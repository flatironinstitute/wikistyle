# wikistyle
Custom stylesheets for the foswiki FI implementation.

## TODO
- MOre bold login button on less than full-width
- TL;DR http://foswiki/SCC/Software/Slurm  or http://foswiki/SCC/WebHome#chapter_scc_webhome_4
- TL;DR https://wiki.flatironinstitute.org/SCC/Software/Slurm so far a class for div named 'fiCheatsheetMessage'

- Ul / li style http://foswiki/SCC/WebHome#chapter_scc_webhome_4 - fix the spacing and maybe increase the size? use negative space maybe expand sub items horizontally?
- Ul / li style on landing = change color to look like info/warnign box text.

- `[wikiadmin@foswiki templates]$ vim topbar.matter.nat.tmpl` (Auto set the names to have a space?)

- Style Table of contents

- Private webs per center: where do they live? (aka subwebs of center? Or somewhere else? Where are the links to them? etc)

- search bar results header https://wiki.flatironinstitute.org/Main/WebSearch#q=matter

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

## What Am I?
- Button alignment

## Punt?
- Need a clean template for user profiles. So far it would look like this: https://wiki.flatironinstitute.org/Main/FoswikiTest (Auto set the names to have a space?)
- How to have important messages on the main landing page (eg: "MPI is broken...")


<div class="foswikiInfoMessage sidebarInfoMessage"><h2>Need help? Contact SCC</h2>
<p><i class="foswikiIcon jqIcon fa fa-envelope"></i> <a href="mailto:scicomp@flatironinstitute.org">scicomp@flatironinstitute.org</a></p>
  <p><i class="foswikiIcon jqIcon fa fa-slack"></i> <span class="externalLink"><a class="natExternalLink" href="https://app.slack.com/client/T041VRG00/CBKC2NP9V" target="_blank" rel="noopener noreferrer">Slack #scicomp</a></span></p>
   <p>Help us Help you: follow <a class="no-underline" href="/SCC/ReportingProblems">these guidelines</a>.</p>
</div>