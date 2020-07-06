# Linux Kernel Assignment : 
## Problem #1    
### Block System call : 
#### (a)block system call for date command 
```
```
#### (b)block system call for firefox command
```
```
## Problem #2 
### play with directory 
#### (a)create a directory without name from command line
```
[laveenajethani@localhost ~]$ mkdir ' '
[laveenajethani@localhost ~]$ ls
' '        Documents   -okgoogle   Public                     typescript
 A         Downloads   Pictures    Templates                  Videos
 Desktop   Music       practise    terminal-AdvancedNewFile

```
#### (b)create a directory with name "-okgoogle"
```
[laveenajethani@localhost ~]$ mkdir -- "-okgoogle"
[laveenajethani@localhost ~]$ ls
' '        Documents   -okgoogle   Public                     typescript
 A         Downloads   Pictures    Templates                  Videos
 Desktop   Music       practise    terminal-AdvancedNewFile

```
## Problem #3 
###  create a directory structure 
```
[laveenajethani@localhost ~]$ mkdir -p A/{B/{G/K/reboot.txt,H/J/reboot.txt},C/{I/J/reboot.txt,J/L/reboot.txt},D/{F/L/reboot.txt,E/M/reboot.txt}}
[laveenajethani@localhost ~]$ tree A
A
├── B
│   ├── G
│   │   └── K
│   │       └── reboot.txt
│   └── H
│       └── J
│           └── reboot.txt
├── C
│   ├── I
│   │   └── J
│   │       └── reboot.txt
│   └── J
│       └── L
│           └── reboot.txt
└── D
    ├── E
    │   └── M
    │       └── reboot.txt
    └── F
        └── L
            └── reboot.txt

21 directories, 0 files

```
## Problem #4
### share and files and folder 
#### (a)create two users name jack and Jill  from command line
```
[root@localhost ~]# useradd jack
[root@localhost ~]# useradd jill
[root@localhost ~]# passwd jack
Changing password for user jack.
New password: 
BAD PASSWORD: The password contains the user name in some form
Retype new password: 
passwd: all authentication tokens updated successfully.
[root@localhost ~]# passwd jill
Changing password for user jill.
New password: 
BAD PASSWORD: The password contains the user name in some form
Retype new password: 
passwd: all authentication tokens updated successfully.

```

#### (b)create all the data under home directory of each users 
```
root@localhost ~]# cd /
[root@localhost /]# ls
bin   dev  home  lib64       media  opt   root  sbin  sys  usr  VBox.log
boot  etc  lib   lost+found  mnt    proc  run   srv   tmp  var
[root@localhost /]# cd /home
[root@localhost home]# ls
jack  jill  laveenajethani  sharedFolder


```
#### (c)login with jack user and create a file name  jack.txt using vim editor and write "hello jack"
```
[root@localhost ~]# su - jack
[jack@localhost ~]$ touch jack.txt
[jack@localhost ~]$ vim jack.txt
hello jack
:wq

```
#### (d)from jack user also create two directories name jack1 & jack2 
```
[jack@localhost ~]$ mkdir jack1 jack2
[jack@localhost ~]$ ls
jack1  jack2  jack.txt

```
#### (e)now login from Jill user and create a file. Jill.txt using vim editor and write "hey jiil"
```
[root@localhost ~]# su - jill
[jill@localhost ~]$ touch jill.txt
[jill@localhost ~]$ vim jill.txt
hey jill
:wq

```
#### (f)from Jill also create two directoires named jill1 & jill2 
```
[jill@localhost ~]$ mkdir jill1 jill2
[jill@localhost ~]$ ls
jill1  jill2  jill.txt


```
#### (g)Important :  swap these files and directories in between users  and to swap don't use root account.
```
[root@localhost ~]# chmod 777 /home/jack
[root@localhost ~]# chmod 777 /home/jill
[root@localhost ~]# su - jack
[jack@localhost ~]$ mv /home/jack/jack1 /home/jill/
[jack@localhost ~]$ mv /home/jack/jack2 /home/jill/
[jack@localhost ~]$ mv /home/jack/jack.txt /home/jill/
[root@localhost ~]# su - jill
[jill@localhost ~]$ mv /home/jill/jill1 /home/jack/
[jill@localhost ~]$ mv /home/jill/jill2 /home/jack/
[jack@localhost ~]$ mv /home/jill/jill.txt /home/jack/


```
## Problem #5 :  
#### play with files and directories 
#### (a) create  3 files named   abc.txt  ok  fine  g.txt  /tmp directory 
```
```
#### (b) create  4  directories   aa aaa aaaa  under  /tmp directory 
```
```
#### (c) give ls command to  list the content of  /tmp directory 
```
```
#### (d) make sure it will only list the content (file|directory)  having 2 char in their name.
```
```
## problem #6:  
### run command without any output 
#### (a) open terminal and type any command 
```
```
#### (b)once you press enter your output of given command must not  print
```
```
#### (c)you are not allowed to redirect output anywhere 
```
```
## problem #7:
### create a shell script 
#### (a)create a shell script named /root/delvex.sh 
```
> vim delvex.sh
 
 #!/bin/sh
if [ $1 == "time" ]
then
	date +%T
elif [ $1 == "user" ]
then
	cat /etc/shells
elif [ $1 -eq  100 ]
then
	for i in {0..99} 
	do
		echo "hello delvex"
		sleep 1
	done
elif [ $1 == "windows" ]
then
	shutdown -h now
else
	uname
	uname -r
	date
	uname -o
        who -b

fi
:wq
```
#### (b)make sure it will run /bin/sh shell 
```
```
#### (c)a user will be running this script my using a command name opensource
```
```
#### (d)when a user  run like  "opensource  time" it must give current time only
```
```
#### (e)when it runs like "opensource user"  it will give list of interactive shell users only
```
```
#### (f)when run like "opensource 100"  it must print "Hello Delvex" 100 times in interval of 1 sec
```
```
#### (g)if runs like  "opensource windows"  then it must shutdown OS
```
```
#### (e)if run opensource command without any parameter  then it must show out --
             i)   name of kernel 
             ii)   version of kernel 
             iii)  current date in the format of  /DD/MM/YY
             iv)  name of OS 
             v)   last reboot time 
             Note:    each output for last option must be in a separate line   
```
```
## Problem #8:
### create a user will default settings
#### (a)create a user name  delvex  and password of this user will be fedora
```
```
#### (b)when user got created below listed things will come by default
```
```
#### (c)history size will be 5000 
```
```
#### (d)history file will be  /home/delvex/myhist.txt
```
```
#### (e)default shell will be  /bin/sh 
```
```
