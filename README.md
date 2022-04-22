# wikistyle
Custom stylesheets for the foswiki FI implementation.

## TODO
- Previous 1234 Next on search results, remove underline and swap color (see screengrab on desktop)
- More bold login button on less than full-width
- Fix landing page search box to use the dark colors from the Need Help box to pop more, get rid of grayish blue.
- High-contrast skin for the syntax highlighter - get web accessibility set from A11y.
- Flathub page: write that content baby.

## Done
- Underline doubles
- Footer freeze
- Hover brightness on search tab
- Remove writer names
- Logo size
- Search bar funkiness https://wiki.flatironinstitute.org/Main/WebHome (edit inline)
- =text= is used to provide <code>text</code> Can we CSS it so that it does not break and is always on a single line?
- Subwebs "expand" button on Web landing pages: more... is kind of hidden: replace by an icon?
- Set web BG color for each center
- Width of the actual content is a bit limited compared to previous version, this leads to more scrolling for pre elements. eg: modules page
- Set web BG color for each cluster
- Logo size
- Color styling on internal notification boxes http://foswiki/SCC/WebHome#chapter_scc_webhome_4
- Color style warning boxes: http://foswiki/SCC/Playbooks/CreatingAModule
- Remove the underline on foswiki fa icon class.
- Color styling on internal notification boxes
- Console programming layout an alternate class for <code> (see #!/bin/bash on http://foswiki/SCC/Software/Slurm)
- Subwebs "expand" button on Web landing pages: more... is kind of hidden: replace by an icon?
- center-conditional classes on info boxes for each center.
- `[wikiadmin@foswiki templates]$ vim topbar.matter.nat.tmpl` (Auto set the names to have a space?)
- Need a clean template for user profiles. So far it would look like this: https://wiki.flatironinstitute.org/Main/FoswikiTest (Auto set the names to have a space?)
- Landing page need help box styling (add dog like fido?)
- TL;DR https://wiki.flatironinstitute.orgSCC/Software/Slurm or https://wiki.flatironinstitute.orgSCC/WebHome#chapter_scc_webhome_4. Class named 'fiCheatsheetMessage.'
- Ul / li style http://foswiki/SCC/WebHome#chapter_scc_webhome_4 - fix the spacing and maybe increase the size? use negative space maybe expand sub items horizontally?
- Ul / li style on landing = change color to look like info/warning box text.
- put links to mon7 and fido pages in a user's profile page (aka template!)
- How to have important messages on the main landing page (eg: "MPI is broken...")  class = foswikiAnnouncement 
- foswikiWarningMessage => better color maybe dark yellow?
- foswikiCheatsheetMessage add finger with tie icon as circle svg.

## Punt?
- ASCII support inside %CODE% see https://wiki.flatironinstitute.org/Sandbox/TestingUserForms for example
