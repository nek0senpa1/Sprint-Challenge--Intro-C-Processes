**1. List all of the main states a process may be in at any point in time on a standard Unix system. Briefly explain what each of these states means.**
Running - means it running
Waiting - means it's waiting for something to make it run
Stopped - means it's... stopped running for one reason or another
Zombie - is dead, not running, but still in the list because it's waiting for something



**2. What is a zombie process?**
it's something that has 'ran' but is still just standing around... for reasons



**3. How does a zombie process get created? How does one get destroyed?**
like when a process runs and is done, it does.  but it lingers around, all undead and stuff.
So you gotta shoot it in the head to make it go away. You can tell the parents to wait() to kill them.
Because killing zombie children is still a hard thing to do.



**4. What are some of the benefits of working in a compiled language versus a non-compiled language? More specifically, what benefits are there to be had from taking the extra time to compile our code?**
Oof.  Press F to pay my respect to Javascript and Python at this point.  I didn't know how good I had it.  But I suppose C does run a lot faster,
and does what I want a lot quicker, but it just doesn't seem as... elegant, or easy to use.

