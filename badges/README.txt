The badges can be read using the standard Arduino IDE. You can download the
files directly from arduino.cc

Take some time to look at the code in the sample INO files that I have provided.
Images are stored in the character arrays as HEX in 0x00 notation.

Next, we want to convert an image into HEX so that we may display it on the
screen. To do this, we use the FastLCD tool for Windows, which may require the
accompanied OCX files to be registered. When running the program, if the OCX
is needed, use the Command Prompt as Administrator and regsrv /PATH/COMDLG32.OCX
and you should no longer have that issue.

Set the size of the image array to 84x48, the size of the LCD. You may paste any
image that your choose or free draw a new one. Explore the menus and options
within this program. When you have finished, save the image as a BAS. Be sure
to select Nokia on top, and Image in the middle. After that, open up your new
saved file in Notepad or an editor. We need to change the HEX notation to work
with our IDE. Find and Replace "%h" with "0x" on the BAS file, and now copy that
HEX segment into our IDE in the character array. Make sure to follow the same
syntax.

Now that you are complete, pull your battery, connect the FTDI and upload your
sketch!

QUESTIONS AND HOWTO:
jsinger@hackucf.org
