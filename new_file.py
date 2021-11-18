file=input("file:")
if file!="":
    with open(f"{file}","w") as files:
        if(file.find("cpp")>0):
            files.write("#include <iostream> \n int main()\n{\nreturn 0;}")
        else:
            files.write("#include <stdio.h> \n int main()\n{\nreturn 0;}")
        files.close()
else:
    print(":( by by")