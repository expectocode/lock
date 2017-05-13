lock
============

This is a fork of [i3lock-fancy](https://github.com/meskarune/i3lock-fancy), an i3lock bash script that takes a screenshot of the desktop, blurs the background and adds a lock icon and text.

Dependencies
------------
* [i3lock-color-git](https://github.com/eBrnd/i3lock-color)
* imagemagick
* scrot
* Liberation Fonts

###         The lock screen in action:

![Screenshot of lockscreen](https://raw.githubusercontent.com/expectocode/lock/master/demonstrations/screenshot.png)

![GIF of lockscreen](https://raw.githubusercontent.com/expectocode/lock/master/demonstrations/optimized_demo.gif)

Installation
------------
1. Install all dependencies - you may need to compile i3lock-color, if you can't be bothered then you can use regular i3lock instead, this will still work. Liberation Fonts are also not necessary, you can just edit the script to not use them if you really don't want to install them for some reason
2. Clone this repo to your hard drive, and maybe add the folder to $PATH if you want.
3. (optional) Edit quotes.txt with your own quotes, and edit the relevant part of the script.
4. You should now be able to run the script - you can assign it to a keyboard shortcut and just use it.


------------
 
Use this with xautolock to automatically lock the screen after a set time.

Systemd Unit file (edit for your own use):

    [Unit]
    Description=Lock the screen automatically after a timeout
    
    [Service]
    Type=simple
    User=meskarune
    Environment=DISPLAY=:0
    ExecStart=/usr/bin/xautolock -time 5 -locker /usr/local/bin/lock/lock -detectsleep
    
    [Install]
    WantedBy=graphical.target
