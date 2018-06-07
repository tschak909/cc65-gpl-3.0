#include <conio.h>

void
more (void)
{
  cprintf("\r\n");
  cprintf("                                --MORE--  ");
  cprintf("\r\n");
  cgetc();
  clrscr();
}

void
done (void)
{
  cprintf("\r\n");
  cprintf("                            --END OF LICENSE--  ");
  cprintf("\r\n");
  cgetc();
  clrscr();
}

void
main (void)
{
  clrscr();
  cprintf ("                    GNU GENERAL PUBLIC LICENSE\r\n");
  cprintf ("                       Version 3, 29 June 2007\r\n");
  cprintf ("\r\n");
  cprintf
    (" Copyright (C) 2007 Free Software Foundation, Inc. <https://fsf.org/>\r\n");
  cprintf (" Everyone is permitted to copy and distribute verbatim copies\r\n");
  cprintf (" of this license document, but changing it is not allowed.\r\n");
  cprintf ("\r\n");
  cprintf ("                            Preamble\r\n");
  cprintf ("\r\n");
  cprintf
    ("  The GNU General Public License is a free, copyleft license for\r\n");
  cprintf ("software and other kinds of works.\r\n");
  cprintf ("\r\n");
  cprintf
    ("  The licenses for most software and other practical works are designed\r\n");
  cprintf
    ("to take away your freedom to share and change the works.  By contrast,\r\n");
  cprintf
    ("the GNU General Public License is intended to guarantee your freedom to\r\n");
  cprintf
    ("share and change all versions of a program--to make sure it remains free\r\n");
  cprintf
    ("software for all its users.  We, the Free Software Foundation, use the\r\n");
  cprintf
    ("GNU General Public License for most of our software; it applies also to\r\n");
  cprintf
    ("any other work released this way by its authors.  You can apply it to\r\n");
  cprintf ("your programs, too.\r\n");
  cprintf ("\r\n");

  more();
  
  cprintf
    ("  When we speak of free software, we are referring to freedom, not\r\n");
  cprintf
    ("price.  Our General Public Licenses are designed to make sure that you\r\n");
  cprintf
    ("have the freedom to distribute copies of free software (and charge for\r\n");
  cprintf
    ("them if you wish), that you receive source code or can get it if you\r\n");
  cprintf
    ("want it, that you can change the software or use pieces of it in new\r\n");
  cprintf ("free programs, and that you know you can do these things.\r\n");
  cprintf ("\r\n");
  cprintf
    ("  To protect your rights, we need to prevent others from denying you\r\n");
  cprintf
    ("these rights or asking you to surrender the rights.  Therefore, you have\r\n");
  cprintf
    ("certain responsibilities if you distribute copies of the software, or if\r\n");
  cprintf
    ("you modify it: responsibilities to respect the freedom of others.\r\n");
  cprintf ("\r\n");
  cprintf
    ("  For example, if you distribute copies of such a program, whether\r\n");
  cprintf
    ("gratis or for a fee, you must pass on to the recipients the same\r\n");
  cprintf
    ("freedoms that you received.  You must make sure that they, too, receive\r\n");
  cprintf
    ("or can get the source code.  And you must show them these terms so they\r\n");
  cprintf ("know their rights.\r\n");
  cprintf ("\r\n");
  cprintf
    ("  Developers that use the GNU GPL protect your rights with two steps:\r\n");
  cprintf
    ("(1) assert copyright on the software, and (2) offer you this License\r\n");
  cprintf
    ("giving you legal permission to copy, distribute and/or modify it.\r\n");

  more();

  cprintf ("\r\n");
  cprintf
    ("  For the developers' and authors' protection, the GPL clearly explains\r\n");
  cprintf
    ("that there is no warranty for this free software.  For both users' and\r\n");
  cprintf
    ("authors' sake, the GPL requires that modified versions be marked as\r\n");
  cprintf
    ("changed, so that their problems will not be attributed erroneously to\r\n");
  cprintf ("authors of previous versions.\r\n");
  cprintf ("\r\n");
  cprintf
    ("  Some devices are designed to deny users access to install or run\r\n");
  cprintf
    ("modified versions of the software inside them, although the manufacturer\r\n");
  cprintf
    ("can do so.  This is fundamentally incompatible with the aim of\r\n");
  cprintf
    ("protecting users' freedom to change the software.  The systematic\r\n");
  cprintf
    ("pattern of such abuse occurs in the area of products for individuals to\r\n");
  cprintf
    ("use, which is precisely where it is most unacceptable.  Therefore, we\r\n");
  cprintf
    ("have designed this version of the GPL to prohibit the practice for those\r\n");
  cprintf
    ("products.  If such problems arise substantially in other domains, we\r\n");
  cprintf
    ("stand ready to extend this provision to those domains in future versions\r\n");
  cprintf ("of the GPL, as needed to protect the freedom of users.\r\n");
  cprintf ("\r\n");
  cprintf
    ("  Finally, every program is threatened constantly by software patents.\r\n");
  cprintf
    ("States should not allow patents to restrict development and use of\r\n");
  cprintf
    ("software on general-purpose computers, but in those that do, we wish to\r\n");

  more();

  cprintf
    ("avoid the special danger that patents applied to a free program could\r\n");
  cprintf
    ("make it effectively proprietary.  To prevent this, the GPL assures that\r\n");
  cprintf ("patents cannot be used to render the program non-free.\r\n");
  cprintf ("\r\n");
  cprintf
    ("  The precise terms and conditions for copying, distribution and\r\n");
  cprintf ("modification follow.\r\n");
  cprintf ("\r\n");
  cprintf ("                       TERMS AND CONDITIONS\r\n");
  cprintf ("\r\n");
  cprintf ("  0. Definitions.\r\n");
  cprintf ("\r\n");
  cprintf
    ("  \"This License\" refers to version 3 of the GNU General Public License.\r\n");
  cprintf ("\r\n");
  cprintf
    ("  \"Copyright\" also means copyright-like laws that apply to other kinds of\r\n");
  cprintf ("works, such as semiconductor masks.\r\n");
  cprintf ("\r\n");
  cprintf
    ("  \"The Program\" refers to any copyrightable work licensed under this\r\n");
  cprintf
    ("License.  Each licensee is addressed as \"you\".  \"Licensees\" and\r\n");
  cprintf ("\"recipients\" may be individuals or organizations.\r\n");
  cprintf ("\r\n");

  more();
  
  cprintf
    ("  To \"modify\" a work means to copy from or adapt all or part of the work\r\n");
  cprintf
    ("in a fashion requiring copyright permission, other than the making of an\r\n");
  cprintf
    ("exact copy.  The resulting work is called a \"modified version\" of the\r\n");
  cprintf ("earlier work or a work \"based on\" the earlier work.\r\n");
  cprintf ("\r\n");
  cprintf
    ("  A \"covered work\" means either the unmodified Program or a work based\r\n");
  cprintf ("on the Program.\r\n");
  cprintf ("\r\n");
  cprintf
    ("  To \"propagate\" a work means to do anything with it that, without\r\n");
  cprintf ("permission, would make you directly or secondarily liable for\r\n");
  cprintf
    ("infringement under applicable copyright law, except executing it on a\r\n");
  cprintf
    ("computer or modifying a private copy.  Propagation includes copying,\r\n");
  cprintf
    ("distribution (with or without modification), making available to the\r\n");
  cprintf ("public, and in some countries other activities as well.\r\n");
  cprintf ("\r\n");
  cprintf
    ("  To \"convey\" a work means any kind of propagation that enables other\r\n");
  cprintf
    ("parties to make or receive copies.  Mere interaction with a user through\r\n");
  cprintf
    ("a computer network, with no transfer of a copy, is not conveying.\r\n");
  cprintf ("\r\n");
  cprintf
    ("  An interactive user interface displays \"Appropriate Legal Notices\"\r\n");
  cprintf
    ("to the extent that it includes a convenient and prominently visible\r\n");

  more();

  cprintf
    ("feature that (1) displays an appropriate copyright notice, and (2)\r\n");
  cprintf
    ("tells the user that there is no warranty for the work (except to the\r\n");
  cprintf
    ("extent that warranties are provided), that licensees may convey the\r\n");
  cprintf
    ("work under this License, and how to view a copy of this License.  If\r\n");
  cprintf
    ("the interface presents a list of user commands or options, such as a\r\n");
  cprintf ("menu, a prominent item in the list meets this criterion.\r\n");
  cprintf ("\r\n");
  cprintf ("  1. Source Code.\r\n");
  cprintf ("\r\n");
  cprintf
    ("  The \"source code\" for a work means the preferred form of the work\r\n");
  cprintf
    ("for making modifications to it.  \"Object code\" means any non-source\r\n");
  cprintf ("form of a work.\r\n");
  cprintf ("\r\n");
  cprintf
    ("  A \"Standard Interface\" means an interface that either is an official\r\n");
  cprintf
    ("standard defined by a recognized standards body, or, in the case of\r\n");
  cprintf
    ("interfaces specified for a particular programming language, one that\r\n");
  cprintf ("is widely used among developers working in that language.\r\n");
  cprintf ("\r\n");
  cprintf
    ("  The \"System Libraries\" of an executable work include anything, other\r\n");
  cprintf
    ("than the work as a whole, that (a) is included in the normal form of\r\n");

  more();
  
  cprintf
    ("packaging a Major Component, but which is not part of that Major\r\n");
  cprintf
    ("Component, and (b) serves only to enable use of the work with that\r\n");
  cprintf
    ("Major Component, or to implement a Standard Interface for which an\r\n");
  cprintf
    ("implementation is available to the public in source code form.  A\r\n");
  cprintf
    ("\"Major Component\", in this context, means a major essential component\r\n");
  cprintf
    ("(kernel, window system, and so on) of the specific operating system\r\n");
  cprintf
    ("(if any) on which the executable work runs, or a compiler used to\r\n");
  cprintf
    ("produce the work, or an object code interpreter used to run it.\r\n");
  cprintf ("\r\n");
  cprintf
    ("  The \"Corresponding Source\" for a work in object code form means all\r\n");
  cprintf
    ("the source code needed to generate, install, and (for an executable\r\n");
  cprintf
    ("work) run the object code and to modify the work, including scripts to\r\n");
  cprintf
    ("control those activities.  However, it does not include the work's\r\n");
  cprintf
    ("System Libraries, or general-purpose tools or generally available free\r\n");
  cprintf
    ("programs which are used unmodified in performing those activities but\r\n");
  cprintf
    ("which are not part of the work.  For example, Corresponding Source\r\n");
  cprintf
    ("includes interface definition files associated with source files for\r\n");
  cprintf
    ("the work, and the source code for shared libraries and dynamically\r\n");
  cprintf
    ("linked subprograms that the work is specifically designed to require,\r\n");
  cprintf
    ("such as by intimate data communication or control flow between those\r\n");
  cprintf ("subprograms and other parts of the work.\r\n");

  more();
  
  cprintf ("\r\n");
  cprintf
    ("  The Corresponding Source need not include anything that users\r\n");
  cprintf
    ("can regenerate automatically from other parts of the Corresponding\r\n");
  cprintf ("Source.\r\n");
  cprintf ("\r\n");
  cprintf
    ("  The Corresponding Source for a work in source code form is that\r\n");
  cprintf ("same work.\r\n");
  cprintf ("\r\n");
  cprintf ("  2. Basic Permissions.\r\n");
  cprintf ("\r\n");
  cprintf
    ("  All rights granted under this License are granted for the term of\r\n");
  cprintf
    ("copyright on the Program, and are irrevocable provided the stated\r\n");
  cprintf
    ("conditions are met.  This License explicitly affirms your unlimited\r\n");
  cprintf
    ("permission to run the unmodified Program.  The output from running a\r\n");
  cprintf
    ("covered work is covered by this License only if the output, given its\r\n");
  cprintf
    ("content, constitutes a covered work.  This License acknowledges your\r\n");
  cprintf
    ("rights of fair use or other equivalent, as provided by copyright law.\r\n");
  cprintf ("\r\n");
  cprintf
    ("  You may make, run and propagate covered works that you do not\r\n");
  cprintf
    ("convey, without conditions so long as your license otherwise remains\r\n");
  cprintf
    ("in force.  You may convey covered works to others for the sole purpose\r\n");

  more();

  cprintf
    ("of having them make modifications exclusively for you, or provide you\r\n");
  cprintf
    ("with facilities for running those works, provided that you comply with\r\n");
  cprintf
    ("the terms of this License in conveying all material for which you do\r\n");
  cprintf
    ("not control copyright.  Those thus making or running the covered works\r\n");
  cprintf
    ("for you must do so exclusively on your behalf, under your direction\r\n");
  cprintf
    ("and control, on terms that prohibit them from making any copies of\r\n");
  cprintf
    ("your copyrighted material outside their relationship with you.\r\n");
  cprintf ("\r\n");
  cprintf
    ("  Conveying under any other circumstances is permitted solely under\r\n");
  cprintf
    ("the conditions stated below.  Sublicensing is not allowed; section 10\r\n");
  cprintf ("makes it unnecessary.\r\n");
  cprintf ("\r\n");
  cprintf
    ("  3. Protecting Users' Legal Rights From Anti-Circumvention Law.\r\n");
  cprintf ("\r\n");
  cprintf
    ("  No covered work shall be deemed part of an effective technological\r\n");
  cprintf
    ("measure under any applicable law fulfilling obligations under article\r\n");
  cprintf
    ("11 of the WIPO copyright treaty adopted on 20 December 1996, or\r\n");
  cprintf ("similar laws prohibiting or restricting circumvention of such\r\n");
  cprintf ("measures.\r\n");
  cprintf ("\r\n");

  more();
  
  cprintf
    ("  When you convey a covered work, you waive any legal power to forbid\r\n");
  cprintf
    ("circumvention of technological measures to the extent such circumvention\r\n");
  cprintf
    ("is effected by exercising rights under this License with respect to\r\n");
  cprintf
    ("the covered work, and you disclaim any intention to limit operation or\r\n");
  cprintf
    ("modification of the work as a means of enforcing, against the work's\r\n");
  cprintf
    ("users, your or third parties' legal rights to forbid circumvention of\r\n");
  cprintf ("technological measures.\r\n");
  cprintf ("\r\n");
  cprintf ("  4. Conveying Verbatim Copies.\r\n");
  cprintf ("\r\n");
  cprintf
    ("  You may convey verbatim copies of the Program's source code as you\r\n");
  cprintf
    ("receive it, in any medium, provided that you conspicuously and\r\n");
  cprintf
    ("appropriately publish on each copy an appropriate copyright notice;\r\n");
  cprintf ("keep intact all notices stating that this License and any\r\n");
  cprintf
    ("non-permissive terms added in accord with section 7 apply to the code;\r\n");
  cprintf
    ("keep intact all notices of the absence of any warranty; and give all\r\n");
  cprintf ("recipients a copy of this License along with the Program.\r\n");
  cprintf ("\r\n");
  cprintf
    ("  You may charge any price or no price for each copy that you convey,\r\n");
  cprintf ("and you may offer support or warranty protection for a fee.\r\n");
  cprintf ("\r\n");

  more();
  
  cprintf ("  5. Conveying Modified Source Versions.\r\n");
  cprintf ("\r\n");
  cprintf
    ("  You may convey a work based on the Program, or the modifications to\r\n");
  cprintf
    ("produce it from the Program, in the form of source code under the\r\n");
  cprintf
    ("terms of section 4, provided that you also meet all of these conditions:\r\n");
  cprintf ("\r\n");
  cprintf
    ("    a) The work must carry prominent notices stating that you modified\r\n");
  cprintf ("    it, and giving a relevant date.\r\n");
  cprintf ("\r\n");
  cprintf
    ("    b) The work must carry prominent notices stating that it is\r\n");
  cprintf
    ("    released under this License and any conditions added under section\r\n");
  cprintf
    ("    7.  This requirement modifies the requirement in section 4 to\r\n");
  cprintf ("    \"keep intact all notices\".\r\n");
  cprintf ("\r\n");
  cprintf
    ("    c) You must license the entire work, as a whole, under this\r\n");
  cprintf
    ("    License to anyone who comes into possession of a copy.  This\r\n");
  cprintf
    ("    License will therefore apply, along with any applicable section 7\r\n");
  cprintf
    ("    additional terms, to the whole of the work, and all its parts,\r\n");
  cprintf
    ("    regardless of how they are packaged.  This License gives no\r\n");
  cprintf
    ("    permission to license the work in any other way, but it does not\r\n");
  cprintf
    ("    invalidate such permission if you have separately received it.\r\n");

  more();
  
  cprintf ("\r\n");
  cprintf
    ("    d) If the work has interactive user interfaces, each must display\r\n");
  cprintf
    ("    Appropriate Legal Notices; however, if the Program has interactive\r\n");
  cprintf
    ("    interfaces that do not display Appropriate Legal Notices, your\r\n");
  cprintf ("    work need not make them do so.\r\n");
  cprintf ("\r\n");
  cprintf
    ("  A compilation of a covered work with other separate and independent\r\n");
  cprintf
    ("works, which are not by their nature extensions of the covered work,\r\n");
  cprintf
    ("and which are not combined with it such as to form a larger program,\r\n");
  cprintf
    ("in or on a volume of a storage or distribution medium, is called an\r\n");
  cprintf
    ("\"aggregate\" if the compilation and its resulting copyright are not\r\n");
  cprintf
    ("used to limit the access or legal rights of the compilation's users\r\n");
  cprintf
    ("beyond what the individual works permit.  Inclusion of a covered work\r\n");
  cprintf
    ("in an aggregate does not cause this License to apply to the other\r\n");
  cprintf ("parts of the aggregate.\r\n");
  cprintf ("\r\n");
  cprintf ("  6. Conveying Non-Source Forms.\r\n");
  cprintf ("\r\n");
  cprintf
    ("  You may convey a covered work in object code form under the terms\r\n");
  cprintf ("of sections 4 and 5, provided that you also convey the\r\n");
  cprintf
    ("machine-readable Corresponding Source under the terms of this License,\r\n");

  more();

  cprintf ("in one of these ways:\r\n");
  cprintf ("\r\n");
  cprintf
    ("    a) Convey the object code in, or embodied in, a physical product\r\n");
  cprintf
    ("    (including a physical distribution medium), accompanied by the\r\n");
  cprintf ("    Corresponding Source fixed on a durable physical medium\r\n");
  cprintf ("    customarily used for software interchange.\r\n");
  cprintf ("\r\n");
  cprintf
    ("    b) Convey the object code in, or embodied in, a physical product\r\n");
  cprintf
    ("    (including a physical distribution medium), accompanied by a\r\n");
  cprintf
    ("    written offer, valid for at least three years and valid for as\r\n");
  cprintf
    ("    long as you offer spare parts or customer support for that product\r\n");
  cprintf
    ("    model, to give anyone who possesses the object code either (1) a\r\n");
  cprintf
    ("    copy of the Corresponding Source for all the software in the\r\n");
  cprintf
    ("    product that is covered by this License, on a durable physical\r\n");
  cprintf
    ("    medium customarily used for software interchange, for a price no\r\n");
  cprintf
    ("    more than your reasonable cost of physically performing this\r\n");
  cprintf ("    conveying of source, or (2) access to copy the\r\n");
  cprintf ("    Corresponding Source from a network server at no charge.\r\n");
  cprintf ("\r\n");
  cprintf
    ("    c) Convey individual copies of the object code with a copy of the\r\n");
  cprintf ("    written offer to provide the Corresponding Source.  This\r\n");

  more();

  cprintf
    ("    alternative is allowed only occasionally and noncommercially, and\r\n");
  cprintf
    ("    only if you received the object code with such an offer, in accord\r\n");
  cprintf ("    with subsection 6b.\r\n");
  cprintf ("\r\n");
  cprintf
    ("    d) Convey the object code by offering access from a designated\r\n");
  cprintf
    ("    place (gratis or for a charge), and offer equivalent access to the\r\n");
  cprintf
    ("    Corresponding Source in the same way through the same place at no\r\n");
  cprintf
    ("    further charge.  You need not require recipients to copy the\r\n");
  cprintf
    ("    Corresponding Source along with the object code.  If the place to\r\n");
  cprintf
    ("    copy the object code is a network server, the Corresponding Source\r\n");
  cprintf
    ("    may be on a different server (operated by you or a third party)\r\n");
  cprintf
    ("    that supports equivalent copying facilities, provided you maintain\r\n");
  cprintf
    ("    clear directions next to the object code saying where to find the\r\n");
  cprintf
    ("    Corresponding Source.  Regardless of what server hosts the\r\n");
  cprintf
    ("    Corresponding Source, you remain obligated to ensure that it is\r\n");
  cprintf
    ("    available for as long as needed to satisfy these requirements.\r\n");
  cprintf ("\r\n");
  cprintf
    ("    e) Convey the object code using peer-to-peer transmission, provided\r\n");
  cprintf
    ("    you inform other peers where the object code and Corresponding\r\n");
  cprintf
    ("    Source of the work are being offered to the general public at no\r\n");
  cprintf ("    charge under subsection 6d.\r\n");

  more();
  
  cprintf ("\r\n");
  cprintf
    ("  A separable portion of the object code, whose source code is excluded\r\n");
  cprintf
    ("from the Corresponding Source as a System Library, need not be\r\n");
  cprintf ("included in conveying the object code work.\r\n");
  cprintf ("\r\n");
  cprintf
    ("  A \"User Product\" is either (1) a \"consumer product\", which means any\r\n");
  cprintf
    ("tangible personal property which is normally used for personal, family,\r\n");
  cprintf
    ("or household purposes, or (2) anything designed or sold for incorporation\r\n");
  cprintf
    ("into a dwelling.  In determining whether a product is a consumer product,\r\n");
  cprintf
    ("doubtful cases shall be resolved in favor of coverage.  For a particular\r\n");
  cprintf
    ("product received by a particular user, \"normally used\" refers to a\r\n");
  cprintf
    ("typical or common use of that class of product, regardless of the status\r\n");
  cprintf
    ("of the particular user or of the way in which the particular user\r\n");
  cprintf
    ("actually uses, or expects or is expected to use, the product.  A product\r\n");
  cprintf
    ("is a consumer product regardless of whether the product has substantial\r\n");
  cprintf
    ("commercial, industrial or non-consumer uses, unless such uses represent\r\n");
  cprintf ("the only significant mode of use of the product.\r\n");
  cprintf ("\r\n");
  cprintf
    ("  \"Installation Information\" for a User Product means any methods,\r\n");
  cprintf
    ("procedures, authorization keys, or other information required to install\r\n");
  cprintf
    ("and execute modified versions of a covered work in that User Product from\r\n");

  more();

  cprintf
    ("a modified version of its Corresponding Source.  The information must\r\n");
  cprintf
    ("suffice to ensure that the continued functioning of the modified object\r\n");
  cprintf
    ("code is in no case prevented or interfered with solely because\r\n");
  cprintf ("modification has been made.\r\n");
  cprintf ("\r\n");
  cprintf
    ("  If you convey an object code work under this section in, or with, or\r\n");
  cprintf
    ("specifically for use in, a User Product, and the conveying occurs as\r\n");
  cprintf
    ("part of a transaction in which the right of possession and use of the\r\n");
  cprintf
    ("User Product is transferred to the recipient in perpetuity or for a\r\n");
  cprintf
    ("fixed term (regardless of how the transaction is characterized), the\r\n");
  cprintf
    ("Corresponding Source conveyed under this section must be accompanied\r\n");
  cprintf
    ("by the Installation Information.  But this requirement does not apply\r\n");
  cprintf
    ("if neither you nor any third party retains the ability to install\r\n");
  cprintf
    ("modified object code on the User Product (for example, the work has\r\n");
  cprintf ("been installed in ROM).\r\n");
  cprintf ("\r\n");
  cprintf
    ("  The requirement to provide Installation Information does not include a\r\n");
  cprintf
    ("requirement to continue to provide support service, warranty, or updates\r\n");
  cprintf
    ("for a work that has been modified or installed by the recipient, or for\r\n");
  cprintf
    ("the User Product in which it has been modified or installed.  Access to a\r\n");
  cprintf
    ("network may be denied when the modification itself materially and\r\n");

  more();
  
  cprintf
    ("adversely affects the operation of the network or violates the rules and\r\n");
  cprintf ("protocols for communication across the network.\r\n");
  cprintf ("\r\n");
  cprintf
    ("  Corresponding Source conveyed, and Installation Information provided,\r\n");
  cprintf
    ("in accord with this section must be in a format that is publicly\r\n");
  cprintf
    ("documented (and with an implementation available to the public in\r\n");
  cprintf
    ("source code form), and must require no special password or key for\r\n");
  cprintf ("unpacking, reading or copying.\r\n");
  cprintf ("\r\n");
  cprintf ("  7. Additional Terms.\r\n");
  cprintf ("\r\n");
  cprintf
    ("  \"Additional permissions\" are terms that supplement the terms of this\r\n");
  cprintf
    ("License by making exceptions from one or more of its conditions.\r\n");
  cprintf
    ("Additional permissions that are applicable to the entire Program shall\r\n");
  cprintf
    ("be treated as though they were included in this License, to the extent\r\n");
  cprintf
    ("that they are valid under applicable law.  If additional permissions\r\n");
  cprintf
    ("apply only to part of the Program, that part may be used separately\r\n");
  cprintf
    ("under those permissions, but the entire Program remains governed by\r\n");
  cprintf ("this License without regard to the additional permissions.\r\n");
  cprintf ("\r\n");
  cprintf
    ("  When you convey a copy of a covered work, you may at your option\r\n");

  more();

  cprintf
    ("remove any additional permissions from that copy, or from any part of\r\n");
  cprintf
    ("it.  (Additional permissions may be written to require their own\r\n");
  cprintf
    ("removal in certain cases when you modify the work.)  You may place\r\n");
  cprintf
    ("additional permissions on material, added by you to a covered work,\r\n");
  cprintf
    ("for which you have or can give appropriate copyright permission.\r\n");
  cprintf ("\r\n");
  cprintf
    ("  Notwithstanding any other provision of this License, for material you\r\n");
  cprintf
    ("add to a covered work, you may (if authorized by the copyright holders of\r\n");
  cprintf
    ("that material) supplement the terms of this License with terms:\r\n");
  cprintf ("\r\n");
  cprintf
    ("    a) Disclaiming warranty or limiting liability differently from the\r\n");
  cprintf ("    terms of sections 15 and 16 of this License; or\r\n");
  cprintf ("\r\n");
  cprintf
    ("    b) Requiring preservation of specified reasonable legal notices or\r\n");
  cprintf
    ("    author attributions in that material or in the Appropriate Legal\r\n");
  cprintf ("    Notices displayed by works containing it; or\r\n");
  cprintf ("\r\n");
  cprintf
    ("    c) Prohibiting misrepresentation of the origin of that material, or\r\n");
  cprintf
    ("    requiring that modified versions of such material be marked in\r\n");
  cprintf
    ("    reasonable ways as different from the original version; or\r\n");
  cprintf ("\r\n");

  more();
  
  cprintf
    ("    d) Limiting the use for publicity purposes of names of licensors or\r\n");
  cprintf ("    authors of the material; or\r\n");
  cprintf ("\r\n");
  cprintf
    ("    e) Declining to grant rights under trademark law for use of some\r\n");
  cprintf ("    trade names, trademarks, or service marks; or\r\n");
  cprintf ("\r\n");
  cprintf
    ("    f) Requiring indemnification of licensors and authors of that\r\n");
  cprintf
    ("    material by anyone who conveys the material (or modified versions of\r\n");
  cprintf
    ("    it) with contractual assumptions of liability to the recipient, for\r\n");
  cprintf
    ("    any liability that these contractual assumptions directly impose on\r\n");
  cprintf ("    those licensors and authors.\r\n");
  cprintf ("\r\n");
  cprintf
    ("  All other non-permissive additional terms are considered \"further\r\n");
  cprintf
    ("restrictions\" within the meaning of section 10.  If the Program as you\r\n");
  cprintf
    ("received it, or any part of it, contains a notice stating that it is\r\n");
  cprintf ("governed by this License along with a term that is a further\r\n");
  cprintf
    ("restriction, you may remove that term.  If a license document contains\r\n");
  cprintf
    ("a further restriction but permits relicensing or conveying under this\r\n");
  cprintf
    ("License, you may add to a covered work material governed by the terms\r\n");
  cprintf
    ("of that license document, provided that the further restriction does\r\n");
  cprintf ("not survive such relicensing or conveying.\r\n");

  more();
  
  cprintf ("\r\n");
  cprintf
    ("  If you add terms to a covered work in accord with this section, you\r\n");
  cprintf ("must place, in the relevant source files, a statement of the\r\n");
  cprintf
    ("additional terms that apply to those files, or a notice indicating\r\n");
  cprintf ("where to find the applicable terms.\r\n");
  cprintf ("\r\n");
  cprintf
    ("  Additional terms, permissive or non-permissive, may be stated in the\r\n");
  cprintf
    ("form of a separately written license, or stated as exceptions;\r\n");
  cprintf ("the above requirements apply either way.\r\n");
  cprintf ("\r\n");
  cprintf ("  8. Termination.\r\n");
  cprintf ("\r\n");
  cprintf
    ("  You may not propagate or modify a covered work except as expressly\r\n");
  cprintf
    ("provided under this License.  Any attempt otherwise to propagate or\r\n");
  cprintf
    ("modify it is void, and will automatically terminate your rights under\r\n");
  cprintf
    ("this License (including any patent licenses granted under the third\r\n");
  cprintf ("paragraph of section 11).\r\n");
  cprintf ("\r\n");
  cprintf
    ("  However, if you cease all violation of this License, then your\r\n");
  cprintf ("license from a particular copyright holder is reinstated (a)\r\n");
  cprintf
    ("provisionally, unless and until the copyright holder explicitly and\r\n");

  more();

  cprintf
    ("finally terminates your license, and (b) permanently, if the copyright\r\n");
  cprintf
    ("holder fails to notify you of the violation by some reasonable means\r\n");
  cprintf ("prior to 60 days after the cessation.\r\n");
  cprintf ("\r\n");
  cprintf
    ("  Moreover, your license from a particular copyright holder is\r\n");
  cprintf
    ("reinstated permanently if the copyright holder notifies you of the\r\n");
  cprintf
    ("violation by some reasonable means, this is the first time you have\r\n");
  cprintf
    ("received notice of violation of this License (for any work) from that\r\n");
  cprintf
    ("copyright holder, and you cure the violation prior to 30 days after\r\n");
  cprintf ("your receipt of the notice.\r\n");
  cprintf ("\r\n");
  cprintf
    ("  Termination of your rights under this section does not terminate the\r\n");
  cprintf
    ("licenses of parties who have received copies or rights from you under\r\n");
  cprintf
    ("this License.  If your rights have been terminated and not permanently\r\n");
  cprintf
    ("reinstated, you do not qualify to receive new licenses for the same\r\n");
  cprintf ("material under section 10.\r\n");
  cprintf ("\r\n");
  cprintf ("  9. Acceptance Not Required for Having Copies.\r\n");
  cprintf ("\r\n");
  cprintf
    ("  You are not required to accept this License in order to receive or\r\n");

  more();
  
  cprintf
    ("run a copy of the Program.  Ancillary propagation of a covered work\r\n");
  cprintf
    ("occurring solely as a consequence of using peer-to-peer transmission\r\n");
  cprintf
    ("to receive a copy likewise does not require acceptance.  However,\r\n");
  cprintf
    ("nothing other than this License grants you permission to propagate or\r\n");
  cprintf
    ("modify any covered work.  These actions infringe copyright if you do\r\n");
  cprintf
    ("not accept this License.  Therefore, by modifying or propagating a\r\n");
  cprintf
    ("covered work, you indicate your acceptance of this License to do so.\r\n");
  cprintf ("\r\n");
  cprintf ("  10. Automatic Licensing of Downstream Recipients.\r\n");
  cprintf ("\r\n");
  cprintf
    ("  Each time you convey a covered work, the recipient automatically\r\n");
  cprintf
    ("receives a license from the original licensors, to run, modify and\r\n");
  cprintf
    ("propagate that work, subject to this License.  You are not responsible\r\n");
  cprintf ("for enforcing compliance by third parties with this License.\r\n");
  cprintf ("\r\n");
  cprintf
    ("  An \"entity transaction\" is a transaction transferring control of an\r\n");
  cprintf
    ("organization, or substantially all assets of one, or subdividing an\r\n");
  cprintf
    ("organization, or merging organizations.  If propagation of a covered\r\n");
  cprintf ("work results from an entity transaction, each party to that\r\n");
  cprintf
    ("transaction who receives a copy of the work also receives whatever\r\n");
  cprintf
    ("licenses to the work the party's predecessor in interest had or could\r\n");

  more();

  cprintf
    ("give under the previous paragraph, plus a right to possession of the\r\n");
  cprintf
    ("Corresponding Source of the work from the predecessor in interest, if\r\n");
  cprintf ("the predecessor has it or can get it with reasonable efforts.\r\n");
  cprintf ("\r\n");
  cprintf
    ("  You may not impose any further restrictions on the exercise of the\r\n");
  cprintf
    ("rights granted or affirmed under this License.  For example, you may\r\n");
  cprintf
    ("not impose a license fee, royalty, or other charge for exercise of\r\n");
  cprintf
    ("rights granted under this License, and you may not initiate litigation\r\n");
  cprintf
    ("(including a cross-claim or counterclaim in a lawsuit) alleging that\r\n");
  cprintf
    ("any patent claim is infringed by making, using, selling, offering for\r\n");
  cprintf ("sale, or importing the Program or any portion of it.\r\n");
  cprintf ("\r\n");
  cprintf ("  11. Patents.\r\n");
  cprintf ("\r\n");
  cprintf
    ("  A \"contributor\" is a copyright holder who authorizes use under this\r\n");
  cprintf
    ("License of the Program or a work on which the Program is based.  The\r\n");
  cprintf
    ("work thus licensed is called the contributor's \"contributor version\".\r\n");
  cprintf ("\r\n");
  cprintf
    ("  A contributor's \"essential patent claims\" are all patent claims\r\n");
  cprintf
    ("owned or controlled by the contributor, whether already acquired or\r\n");
  cprintf
    ("hereafter acquired, that would be infringed by some manner, permitted\r\n");

  more();

  cprintf
    ("by this License, of making, using, or selling its contributor version,\r\n");
  cprintf ("but do not include claims that would be infringed only as a\r\n");
  cprintf
    ("consequence of further modification of the contributor version.  For\r\n");
  cprintf
    ("purposes of this definition, \"control\" includes the right to grant\r\n");
  cprintf
    ("patent sublicenses in a manner consistent with the requirements of\r\n");
  cprintf ("this License.\r\n");
  cprintf ("\r\n");
  cprintf
    ("  Each contributor grants you a non-exclusive, worldwide, royalty-free\r\n");
  cprintf
    ("patent license under the contributor's essential patent claims, to\r\n");
  cprintf
    ("make, use, sell, offer for sale, import and otherwise run, modify and\r\n");
  cprintf ("propagate the contents of its contributor version.\r\n");
  cprintf ("\r\n");
  cprintf
    ("  In the following three paragraphs, a \"patent license\" is any express\r\n");
  cprintf
    ("agreement or commitment, however denominated, not to enforce a patent\r\n");
  cprintf
    ("(such as an express permission to practice a patent or covenant not to\r\n");
  cprintf
    ("sue for patent infringement).  To \"grant\" such a patent license to a\r\n");
  cprintf
    ("party means to make such an agreement or commitment not to enforce a\r\n");
  cprintf ("patent against the party.\r\n");
  cprintf ("\r\n");
  cprintf
    ("  If you convey a covered work, knowingly relying on a patent license,\r\n");
  cprintf
    ("and the Corresponding Source of the work is not available for anyone\r\n");

  more();

  cprintf
    ("to copy, free of charge and under the terms of this License, through a\r\n");
  cprintf
    ("publicly available network server or other readily accessible means,\r\n");
  cprintf
    ("then you must either (1) cause the Corresponding Source to be so\r\n");
  cprintf
    ("available, or (2) arrange to deprive yourself of the benefit of the\r\n");
  cprintf
    ("patent license for this particular work, or (3) arrange, in a manner\r\n");
  cprintf
    ("consistent with the requirements of this License, to extend the patent\r\n");
  cprintf
    ("license to downstream recipients.  \"Knowingly relying\" means you have\r\n");
  cprintf
    ("actual knowledge that, but for the patent license, your conveying the\r\n");
  cprintf
    ("covered work in a country, or your recipient's use of the covered work\r\n");
  cprintf
    ("in a country, would infringe one or more identifiable patents in that\r\n");
  cprintf ("country that you have reason to believe are valid.\r\n");
  cprintf ("\r\n");
  cprintf
    ("  If, pursuant to or in connection with a single transaction or\r\n");
  cprintf
    ("arrangement, you convey, or propagate by procuring conveyance of, a\r\n");
  cprintf
    ("covered work, and grant a patent license to some of the parties\r\n");
  cprintf
    ("receiving the covered work authorizing them to use, propagate, modify\r\n");
  cprintf
    ("or convey a specific copy of the covered work, then the patent license\r\n");
  cprintf
    ("you grant is automatically extended to all recipients of the covered\r\n");
  cprintf ("work and works based on it.\r\n");
  cprintf ("\r\n");
  cprintf
    ("  A patent license is \"discriminatory\" if it does not include within\r\n");

  more();

  cprintf ("the scope of its coverage, prohibits the exercise of, or is\r\n");
  cprintf
    ("conditioned on the non-exercise of one or more of the rights that are\r\n");
  cprintf
    ("specifically granted under this License.  You may not convey a covered\r\n");
  cprintf
    ("work if you are a party to an arrangement with a third party that is\r\n");
  cprintf
    ("in the business of distributing software, under which you make payment\r\n");
  cprintf
    ("to the third party based on the extent of your activity of conveying\r\n");
  cprintf
    ("the work, and under which the third party grants, to any of the\r\n");
  cprintf
    ("parties who would receive the covered work from you, a discriminatory\r\n");
  cprintf
    ("patent license (a) in connection with copies of the covered work\r\n");
  cprintf
    ("conveyed by you (or copies made from those copies), or (b) primarily\r\n");
  cprintf
    ("for and in connection with specific products or compilations that\r\n");
  cprintf
    ("contain the covered work, unless you entered into that arrangement,\r\n");
  cprintf ("or that patent license was granted, prior to 28 March 2007.\r\n");
  cprintf ("\r\n");
  cprintf
    ("  Nothing in this License shall be construed as excluding or limiting\r\n");
  cprintf
    ("any implied license or other defenses to infringement that may\r\n");
  cprintf ("otherwise be available to you under applicable patent law.\r\n");
  cprintf ("\r\n");
  cprintf ("  12. No Surrender of Others' Freedom.\r\n");
  cprintf ("\r\n");

  more();
  
  cprintf
    ("  If conditions are imposed on you (whether by court order, agreement or\r\n");
  cprintf
    ("otherwise) that contradict the conditions of this License, they do not\r\n");
  cprintf
    ("excuse you from the conditions of this License.  If you cannot convey a\r\n");
  cprintf
    ("covered work so as to satisfy simultaneously your obligations under this\r\n");
  cprintf
    ("License and any other pertinent obligations, then as a consequence you may\r\n");
  cprintf
    ("not convey it at all.  For example, if you agree to terms that obligate you\r\n");
  cprintf
    ("to collect a royalty for further conveying from those to whom you convey\r\n");
  cprintf
    ("the Program, the only way you could satisfy both those terms and this\r\n");
  cprintf
    ("License would be to refrain entirely from conveying the Program.\r\n");
  cprintf ("\r\n");
  cprintf ("  13. Use with the GNU Affero General Public License.\r\n");
  cprintf ("\r\n");
  cprintf
    ("  Notwithstanding any other provision of this License, you have\r\n");
  cprintf
    ("permission to link or combine any covered work with a work licensed\r\n");
  cprintf
    ("under version 3 of the GNU Affero General Public License into a single\r\n");
  cprintf
    ("combined work, and to convey the resulting work.  The terms of this\r\n");
  cprintf
    ("License will continue to apply to the part which is the covered work,\r\n");
  cprintf
    ("but the special requirements of the GNU Affero General Public License,\r\n");
  cprintf
    ("section 13, concerning interaction through a network will apply to the\r\n");
  cprintf ("combination as such.\r\n");
  cprintf ("\r\n");

  more();

  cprintf ("  14. Revised Versions of this License.\r\n");
  cprintf ("\r\n");
  cprintf
    ("  The Free Software Foundation may publish revised and/or new versions of\r\n");
  cprintf
    ("the GNU General Public License from time to time.  Such new versions will\r\n");
  cprintf
    ("be similar in spirit to the present version, but may differ in detail to\r\n");
  cprintf ("address new problems or concerns.\r\n");
  cprintf ("\r\n");
  cprintf
    ("  Each version is given a distinguishing version number.  If the\r\n");
  cprintf
    ("Program specifies that a certain numbered version of the GNU General\r\n");
  cprintf
    ("Public License \"or any later version\" applies to it, you have the\r\n");
  cprintf
    ("option of following the terms and conditions either of that numbered\r\n");
  cprintf
    ("version or of any later version published by the Free Software\r\n");
  cprintf
    ("Foundation.  If the Program does not specify a version number of the\r\n");
  cprintf
    ("GNU General Public License, you may choose any version ever published\r\n");
  cprintf ("by the Free Software Foundation.\r\n");
  cprintf ("\r\n");
  cprintf
    ("  If the Program specifies that a proxy can decide which future\r\n");
  cprintf
    ("versions of the GNU General Public License can be used, that proxy's\r\n");
  cprintf
    ("public statement of acceptance of a version permanently authorizes you\r\n");
  cprintf ("to choose that version for the Program.\r\n");
  cprintf ("\r\n");

  more();

  cprintf ("  Later license versions may give you additional or different\r\n");
  cprintf
    ("permissions.  However, no additional obligations are imposed on any\r\n");
  cprintf
    ("author or copyright holder as a result of your choosing to follow a\r\n");
  cprintf ("later version.\r\n");
  cprintf ("\r\n");
  cprintf ("  15. Disclaimer of Warranty.\r\n");
  cprintf ("\r\n");
  cprintf
    ("  THERE IS NO WARRANTY FOR THE PROGRAM, TO THE EXTENT PERMITTED BY\r\n");
  cprintf
    ("APPLICABLE LAW.  EXCEPT WHEN OTHERWISE STATED IN WRITING THE COPYRIGHT\r\n");
  cprintf ("HOLDERS AND/OR OTHER PARTIES PROVIDE THE PROGRAM \" AS IS \" WITHOUT WARRANTY\r\n");
  cprintf
    ("OF ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING, BUT NOT LIMITED TO,\r\n");
  cprintf
    ("THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR\r\n");
  cprintf
    ("PURPOSE.  THE ENTIRE RISK AS TO THE QUALITY AND PERFORMANCE OF THE PROGRAM\r\n");
  cprintf
    ("IS WITH YOU.  SHOULD THE PROGRAM PROVE DEFECTIVE, YOU ASSUME THE COST OF\r\n");
  cprintf ("ALL NECESSARY SERVICING, REPAIR OR CORRECTION.\r\n");
  cprintf ("\r\n");
  cprintf ("  16. Limitation of Liability.\r\n");
  cprintf ("\r\n");
  cprintf
    ("  IN NO EVENT UNLESS REQUIRED BY APPLICABLE LAW OR AGREED TO IN WRITING\r\n");
  cprintf
    ("WILL ANY COPYRIGHT HOLDER, OR ANY OTHER PARTY WHO MODIFIES AND/OR CONVEYS\r\n");

  more();
  
  cprintf
    ("THE PROGRAM AS PERMITTED ABOVE, BE LIABLE TO YOU FOR DAMAGES, INCLUDING ANY\r\n");
  cprintf
    ("GENERAL, SPECIAL, INCIDENTAL OR CONSEQUENTIAL DAMAGES ARISING OUT OF THE\r\n");
  cprintf
    ("USE OR INABILITY TO USE THE PROGRAM (INCLUDING BUT NOT LIMITED TO LOSS OF\r\n");
  cprintf
    ("DATA OR DATA BEING RENDERED INACCURATE OR LOSSES SUSTAINED BY YOU OR THIRD\r\n");
  cprintf
    ("PARTIES OR A FAILURE OF THE PROGRAM TO OPERATE WITH ANY OTHER PROGRAMS),\r\n");
  cprintf
    ("EVEN IF SUCH HOLDER OR OTHER PARTY HAS BEEN ADVISED OF THE POSSIBILITY OF\r\n");
  cprintf ("SUCH DAMAGES.\r\n");
  cprintf ("\r\n");
  cprintf ("  17. Interpretation of Sections 15 and 16.\r\n");
  cprintf ("\r\n");
  cprintf
    ("  If the disclaimer of warranty and limitation of liability provided\r\n");
  cprintf
    ("above cannot be given local legal effect according to their terms,\r\n");
  cprintf
    ("reviewing courts shall apply local law that most closely approximates\r\n");
  cprintf
    ("an absolute waiver of all civil liability in connection with the\r\n");
  cprintf
    ("Program, unless a warranty or assumption of liability accompanies a\r\n");
  cprintf ("copy of the Program in return for a fee.\r\n");
  cprintf ("\r\n");
  cprintf ("                     END OF TERMS AND CONDITIONS\r\n");
  cprintf ("\r\n");

  more();

  cprintf ("            How to Apply These Terms to Your New Programs\r\n");
  cprintf ("\r\n");
  cprintf
    ("  If you develop a new program, and you want it to be of the greatest\r\n");
  cprintf
    ("possible use to the public, the best way to achieve this is to make it\r\n");
  cprintf
    ("free software which everyone can redistribute and change under these terms.\r\n");
  cprintf ("\r\n");
  cprintf
    ("  To do so, attach the following notices to the program.  It is safest\r\n");
  cprintf
    ("to attach them to the start of each source file to most effectively\r\n");
  cprintf
    ("state the exclusion of warranty; and each file should have at least\r\n");
  cprintf
    ("the \"copyright\" line and a pointer to where the full notice is found.\r\n");
  cprintf ("\r\n");
  cprintf
    ("    <one line to give the program's name and a brief idea of what it does.>\r\n");
  cprintf ("    Copyright (C) <year>  <name of author>\r\n");
  cprintf ("\r\n");
  cprintf
    ("    This program is free software: you can redistribute it and/or modify\r\n");
  cprintf
    ("    it under the terms of the GNU General Public License as published by\r\n");
  cprintf
    ("    the Free Software Foundation, either version 3 of the License, or\r\n");
  cprintf ("    (at your option) any later version.\r\n");
  cprintf ("\r\n");
  cprintf
    ("    This program is distributed in the hope that it will be useful,\r\n");

  more();

  cprintf
    ("    but WITHOUT ANY WARRANTY; without even the implied warranty of\r\n");
  cprintf
    ("    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the\r\n");
  cprintf ("    GNU General Public License for more details.\r\n");
  cprintf ("\r\n");
  cprintf
    ("    You should have received a copy of the GNU General Public License\r\n");
  cprintf
    ("    along with this program.  If not, see <https://www.gnu.org/licenses/>.\r\n");
  cprintf ("\r\n");
  cprintf
    ("Also add information on how to contact you by electronic and paper mail.\r\n");
  cprintf ("\r\n");
  cprintf
    ("  If the program does terminal interaction, make it output a short\r\n");
  cprintf ("notice like this when it starts in an interactive mode:\r\n");
  cprintf ("\r\n");
  cprintf ("    <program>  Copyright (C) <year>  <name of author>\r\n");
  cprintf
    ("    This program comes with ABSOLUTELY NO WARRANTY; for details type `show w'.\r\n");
  cprintf
    ("    This is free software, and you are welcome to redistribute it\r\n");
  cprintf ("    under certain conditions; type `show c' for details.\r\n");
  cprintf ("\r\n");
  cprintf
    ("The hypothetical commands `show w' and `show c' should show the appropriate\r\n");
  cprintf
    ("parts of the General Public License.  Of course, your program's commands\r\n");
  cprintf
    ("might be different; for a GUI interface, you would use an \"about box\".\r\n");
  cprintf ("\r\n");

  more();
  
  cprintf
    ("  You should also get your employer (if you work as a programmer) or school,\r\n");
  cprintf
    ("if any, to sign a \"copyright disclaimer\" for the program, if necessary.\r\n");
  cprintf
    ("For more information on this, and how to apply and follow the GNU GPL, see\r\n");
  cprintf ("<https://www.gnu.org/licenses/>.\r\n");
  cprintf ("\r\n");
  cprintf
    ("  The GNU General Public License does not permit incorporating your program\r\n");
  cprintf
    ("into proprietary programs.  If your program is a subroutine library, you\r\n");
  cprintf
    ("may consider it more useful to permit linking proprietary applications with\r\n");
  cprintf
    ("the library.  If this is what you want to do, use the GNU Lesser General\r\n");
  cprintf
    ("Public License instead of this License.  But first, please read\r\n");
  cprintf ("<https://www.gnu.org/licenses/why-not-lgpl.html>.\r\n");

  done();
  
}
