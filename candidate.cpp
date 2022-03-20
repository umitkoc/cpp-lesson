#include "candidate.hpp"
#include <algorithm>
#include <fstream>
#include <iostream>
#include <vector>
std::vector<candidate> candidates;
int startPage()
{
    int ok = 1;
    int select = 0;
    read();
    while (ok)
    {
        std::cout << "\n\n----------------------\n\n 1:add\n 2:search\n 3:sorted\n 4:get list\n 5:update\n 6:remove\n 7:exit\n\n-------------------------\n";
        std::cin >> select;
        switch (select)
        {
        case 1:
            system("clear");
            add();
            break;
        case 2:
            system("clear");
            search();
            break;
        case 3:
            system("clear");
            sorted();
        case 4:
            system("clear");
            print();
            break;
        case 5:
            system("clear");
            update();
            break;
        case 6:
            system("clear");
            remove();
            break;
        case 7:
            system("clear");
            std::cout << "exit...\n";
            ok = 0;
            break;
        default:
            system("clear");
            std::cout << "default select number\n";
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
        std::cout << "\n1:firstname\n2:lastname\n3:turn back\n4:exit\n";
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
            ok = 0;
            break;
        default:
            system("clear");
            std::cout << "default select number\n";
            break;
        }
    }
    return 0;
}

int print()
{
    std::cout << "\nfirstname\t"
              << "lastname\t\n";
    for (auto &&i : candidates)
        std::cout << "\n"
                  << i.firstname << " " << i.lastname << "\n";
    return 0;
}

int search()
{
    int ok = 1;
    int select = 0;
    std::string value = "";
    while (ok)
    {

        std::cout << "\n1:input value\n 2:turnback\n";
        std::cin >> select;
        switch (select)
        {
        case 1:
            std::cout << "value: "
                      << "\n";
            std::cin >> value;
            system("clear");
            for (auto &&i : candidates)
            {
                if (value == i.firstname || value == i.lastname)
                {
                    std::cout << i.firstname << "\t" << i.lastname << "\n";
                }
            }

            break;
        case 2:
            system("clear");
            ok = 0;
            break;
        default:
            system("clear");
            std::cout << "default select number\n";
            break;
        }
    }
    return 0;
}

int add()
{
    struct candidate _candidate;
    std::cout << "\nCandidate firstname and lastname :\n";
    std::cin >> _candidate.firstname >> _candidate.lastname;
    std::cout << "candidate: " << _candidate.firstname << " " << _candidate.lastname;
    candidates.push_back(_candidate);
    write();
    return 0;
}

int write()
{
    std::ofstream file;
    file.open("test.txt", std::ios::out);
    for (auto &&i : candidates)
        file << i.firstname << " " << i.lastname << "\n";
    file.close();
    return 0;
}

candidate parse_candidate(std::ifstream &source)
{
    std::string firstname, lastname;
    struct candidate _candidate;
    source >> firstname >> lastname;
    _candidate.firstname = firstname;
    _candidate.lastname = lastname;
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
    int ok = 1;
    int select = 1;
    std::string value = "";
    candidate _candidate;
    while (ok)
    {
        std::cout << "\n 1:input value\n 2:turn back\n";
        std::cin >> select;

        switch (select)
        {
        case 1:

            system("clear");
            std::cout << "firstname or lastname: "
                      << "\n";
            std::cin >> value;
            for (int i = 0; i < candidates.size(); i++)
            {
                if (value == candidates[i].firstname || value == candidates[i].lastname)
                {
                    std::cout << "id:" << i << candidates[i].firstname << "\t" << candidates[i].lastname << "\n";
                    select = 0;
                }
            }
            if (select == 0)
            {
                std::cout << "select id: ";
                std::cin >> select;
                std::cin >> _candidate.firstname >> _candidate.lastname;
                candidates[select] = _candidate;
                std::cout << "update candidate";
                write();
            }
            else
            {
                std::cout << "not candidate\n";
            }
            break;
        case 2:
            ok = 0;
            break;
        default:
            system("clear");
            std::cout << "default select number\n";
            break;
        }
    }

    return 0;
}

int remove()
{
    int ok = 1;
    int select = 1;
    std::string value = "";
    candidate _candidate;
    while (ok)
    {
        std::cout << "\n 1:input value\n 2:turn back\n";
        std::cin >> select;

        switch (select)
        {
        case 1:

            system("clear");
            std::cout << "firstname or lastname: "
                      << "\n";
            std::cin >> value;
            for (int i = 0; i < candidates.size(); i++)
            {
                if (value == candidates[i].firstname || value == candidates[i].lastname)
                {
                    std::cout << "id:" << i << candidates[i].firstname << "\t" << candidates[i].lastname << "\n";
                    select = 0;
                }
            }
            if (select == 0)
            {
                std::cout << "select id: ";
                std::cin >> select;
                auto value = candidates[select];
                candidates[select] = candidates[candidates.size() - 1];
                candidates[candidates.size() - 1] = value;
                candidates.pop_back();
                std::cout << "\ndelete candidate\n";
                write();
            }
            else
            {
                std::cout << "\nnot candidate\n";
            }
            break;
        case 2:
            ok = 0;
            break;
        default:
            system("clear");
            std::cout << "\ndefault select number\n";
            break;
        }
    }

    return 0;
}
