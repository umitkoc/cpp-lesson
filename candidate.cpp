#include <algorithm>
#include <fstream>
#include <iostream>
#include <vector>
int startPage();
int add();
int print();
int write();
int sorted();
int read();
int update();
int remove();
struct candidate
{
    std::string firstname;
    std::string lastname;
    int number;
    std::string email;
};
std::vector<candidate> candidates;
int startPage()
{
    system("clear");
    int ok = 1;
    int select = 0;
    read();
    print();
    while (ok)
    {
        std::cout << "\n\n_______________________________\n\n 1:add\n 2:sorted\n 3:update\n 4:remove\n 5:exit\n\n___________________________________________\n";
        std::cin >> select;
        switch (select)
        {
        case 1:
            add();
            system("clear");
            print();
            break;
        case 2:
            system("clear");
            print();
            sorted();
            print();
            break;
        case 3:
            update();
            system("clear");
            print();
            break;
        case 4:
            remove();
            system("clear");
            print();
            break;
        case 5:
            system("clear");
            std::cout << "exit...\n";
            ok = 0;
            break;
        default:
            system("clear");
            std::cout << "default select number\n";
            print();
            break;
        }
    }
    return 0;
}

int sorted()
{
    int ok = 1;
    int select = 0;
    while (ok)
    {
        std::cout << "\n 1:firstname\n 2:lastname\n 3:email\n 4:number\n 5:turn back\n 6:exit\n";
        std::cin >> select;
        switch (select)
        {
        case 1:
            system("clear");
            sort(candidates.begin(), candidates.end(), [](candidate a, candidate b)
                 { return a.firstname < b.firstname; });
            print();
            break;
        case 2:
            system("clear");
            sort(candidates.begin(), candidates.end(), [](candidate a, candidate b)
                 { return a.lastname < b.lastname; });
            print();
            break;
        case 3:
            system("clear");
            sort(candidates.begin(), candidates.end(), [](candidate a, candidate b)
                 { return a.email < b.email; });
            print();
            break;
        case 4:
            system("clear");
            sort(candidates.begin(), candidates.end(), [](candidate a, candidate b)
                 { return a.number < b.number; });
            print();
            break;
        case 5:
            system("clear");
            ok = 0;
            break;
        case 6:
            exit(0);
            break;
        default:
            system("clear");
            std::cout << "default select number\n";
            print();
            break;
        }
    }
    return 0;
}

int print()
{
    std::cout << "\n id\tfirstname\tlastname\temail\tnumber\n___________________________________________________________\n";
    for (int i = 0; i < candidates.size(); i++)
    {
        std::cout << i << "\t" << candidates[i].firstname << "\t" << candidates[i].lastname << "\t" << candidates[i].email << "\t" << candidates[i].number << "\n";
    }
    return 0;
}

int add()
{
    candidate _candidate;
    std::cout << "\nADD:\n firstname / lastname  / email / number :\n";
    std::cin >> _candidate.firstname >> _candidate.lastname >> _candidate.email >> _candidate.number;
    std::cout << "candidate: " << _candidate.firstname << "\t" << _candidate.lastname << "\t" << _candidate.email << "\t" << _candidate.number << "\n";
    candidates.push_back(_candidate);
    write();
    return 0;
}

int write()
{
    std::ofstream file;
    file.open("test.txt", std::ios::out);
    for (auto &&i : candidates)
        file << i.firstname << "\t" << i.lastname << "\t" << i.email << "\t" << i.number << "\n";
    file.close();
    return 0;
}

candidate parse_candidate(std::ifstream &source)
{
    candidate _candidate;
    source >> _candidate.firstname >> _candidate.lastname >> _candidate.email >> _candidate.number;
    return _candidate;
}

int read()
{
    std::ifstream file;
    file.open("test.txt", std::ios::in);
    while (!file.eof() && file.is_open())
    {
        candidates.push_back(parse_candidate(file));
    }
    file.close();
    return 0;
}

int update()
{
    candidate _candidate;
    int select = 0;
    std::cout << "UPDATE:\nselect id: ";
    std::cin >> select;
    std::cout << "\n firstname / lastname  / email / number :\n";
    std::cin >> _candidate.firstname >> _candidate.lastname >> _candidate.email >> _candidate.number;
    candidates[select] = _candidate;
    std::cout << "\nupdate candidate\n";
    write();
    return 0;
}

int remove()
{
    int select = 0;
    std::cout << "REMOVE:\nselect id: ";
    std::cin >> select;
    candidate value = candidates[select];
    candidates[select] = candidates[candidates.size() - 1];
    candidates[candidates.size() - 1] = value;
    candidates.pop_back();
    std::cout << "\ndelete candidate\n";
    write();
    return 0;
}
