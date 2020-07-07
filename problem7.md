## problem #7:
### create a shell script 
#### (a)create a shell script named /root/delvex.sh 
#### b)make sure it will run /bin/sh shell 
```
> vim delvex.sh
#!/bin/sh
if [[ $1 == "time" ]]
then
	echo "current time is:`date +%T`"
elif [[ $1 == "user" ]]
then
	"intractive shells are:`cat /etc/shells`"
elif [[ $1 -eq  100 ]]
then
	for i in {0..99} 
	do
		echo "hello delvex $i"
		sleep 1
	done
elif [[ $1 == "windows" ]]
then
	echo "PC going to shutdown:`shutdown -h now`"
else
	echo "Kernel is:`uname`"
	echo "version of kernel is:`uname -r`"
	echo "current date is:`date +"%d/%m/%y"`"
	echo "Name of OS is:`uname -o`"
        echo "Last reboot on:`who -b`"

fi
 

:wq
```

#### (c)a user will be running this script my using a command name opensource
```
[root@localhost p7]# vim /usr/bin/opensource
#!/bin/bash
/root/delvex.sh
:wq
```
#### (d)when a user  run like  "opensource  time" it must give current time only
```
[root@localhost ~]# opensource time
current time is:17:35:01

```
#### (e)when it runs like "opensource user"  it will give list of interactive shell users only
```
[root@localhost ~]# opensource user
/root/delvex.sh: line 7: intractive shells are:/bin/sh
/bin/bash
/usr/bin/sh
/usr/bin/bash
/usr/bin/tmux


```
#### (f)when run like "opensource 100"  it must print "Hello Delvex" 100 times in interval of 1 sec
```
[root@localhost ~]# opensource 100
hello delvex 0
hello delvex 1
hello delvex 2
hello delvex 3
hello delvex 4
hello delvex 5
hello delvex 6
hello delvex 7
hello delvex 8
hello delvex 9
hello delvex 10
hello delvex 11
hello delvex 12
hello delvex 13
hello delvex 14
hello delvex 15
hello delvex 16
^C

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
[root@localhost ~]# opensource
Kernel is:Linux
version of kernel is:5.6.6-300.fc32.x86_64
current date is:07/07/20
Name of OS is:GNU/Linux
Last reboot on:         system boot  2020-07-07 22:35
