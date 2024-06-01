<h1 align="center"> 🗣 Subject &nbsp;&nbsp;&nbsp;&nbsp;so_long </h1>

<br>
<table>
  <tr>
    <td>Program &nbsp;name</td>
    <td>so_long</td>
  </tr>
  <tr>
    <td>Turn &nbsp;in &nbsp;files</td>
    <td>Makefile, &nbsp;*.h,&nbsp; *.c,&nbsp; maps</td>
  </tr>
  <tr>
    <td>Makefile</td>
    <td>NAME,&nbsp; all, &nbsp;clean, &nbsp;fclean, &nbsp;re</td>
  </tr>
  <tr>
    <td>Arguments</td>
    <td>A &nbsp;map &nbsp;in&nbsp; format&nbsp; *.ber</td>
  </tr>
  <tr>
    <td>External &nbsp;functs.</td>
    <td>
      <ul>
        <li>open, &nbsp;close,&nbsp; read, &nbsp;write,&nbsp; malloc,&nbsp; free,&nbsp; perror,&nbsp; strerror,&nbsp; exit
        <li>All &nbsp;functions &nbsp;of &nbsp;the&nbsp; math &nbsp;library&nbsp; (-lm &nbsp;compiler &nbsp;option, &nbsp;man&nbsp; man &nbsp;3 &nbsp;math)
        <li>All &nbsp;functions &nbsp;of &nbsp;the&nbsp; MiniLibX
        <li>ft_printf &nbsp;and &nbsp;any &nbsp;equivalent&nbsp; YOU &nbsp;coded
      </ul>
    </td>
  </tr>
  <tr>
    <td>Libft &nbsp;authorized</td>
    <td>Yes</td>
  </tr>
  <tr>
    <td>Description</td>
    <td>You &nbsp;must&nbsp; create&nbsp; a&nbsp; basic &nbsp;2D &nbsp;game &nbsp;in&nbsp; which&nbsp; a &nbsp;dolphin&nbsp; escapes &nbsp;Earth &nbsp;after &nbsp;<br>eating&nbsp; some&nbsp; fish.&nbsp; Instead &nbsp;of &nbsp;a&nbsp; dolphin,&nbsp; fish, &nbsp;and&nbsp; the &nbsp;Earth,&nbsp; you &nbsp;can &nbsp;use&nbsp; any &nbsp;<br>character, &nbsp;any &nbsp;collectible&nbsp; and &nbsp;any &nbsp;place &nbsp;you &nbsp;want.</td>
  </tr>
</table>

<br>
Your &nbsp;project &nbsp;must&nbsp; comply &nbsp;with &nbsp;the &nbsp;following &nbsp;rules:<br>
<ul>
<li>You&nbsp; must &nbsp;use &nbsp;the&nbsp; MiniLibX. &nbsp;Either&nbsp; the&nbsp; version&nbsp; available&nbsp; on &nbsp;the&nbsp; school&nbsp; machines,&nbsp;
or &nbsp;installing&nbsp; it &nbsp;using &nbsp;its &nbsp;sources.
<li>You&nbsp; have&nbsp; to&nbsp; turn&nbsp; in &nbsp;a&nbsp; Makefile &nbsp;which &nbsp;will &nbsp;compile &nbsp;your &nbsp;source &nbsp;files. &nbsp;It&nbsp; must&nbsp; not&nbsp;
relink.
<li>Your &nbsp;program &nbsp;has&nbsp; to &nbsp;take &nbsp;as&nbsp; parameter&nbsp; a &nbsp;map&nbsp; description&nbsp; file&nbsp; ending&nbsp; with &nbsp;the&nbsp; <b>.ber</b> &nbsp;extension.
</ul>

<br>
<h2>Game</h2>
<ul>
<li>The &nbsp;player’s &nbsp;goal &nbsp;is &nbsp;to &nbsp;collect&nbsp; every &nbsp;collectible &nbsp;present &nbsp;on &nbsp;the&nbsp; map,&nbsp; then&nbsp; escape&nbsp;
chosing&nbsp; the &nbsp;shortest&nbsp; possible &nbsp;route.
<li>The &nbsp;W,&nbsp; A,&nbsp; S, &nbsp;and&nbsp; D &nbsp;keys&nbsp; must &nbsp;be&nbsp; used &nbsp;to&nbsp; move &nbsp;the&nbsp; main &nbsp;character.
<li>The &nbsp;player&nbsp; should&nbsp; be&nbsp; able&nbsp; to &nbsp;move&nbsp; in &nbsp;these&nbsp; 4 &nbsp;directions: &nbsp;up, &nbsp;down, &nbsp;left, &nbsp;right.
<li>The&nbsp; player &nbsp;should &nbsp;not &nbsp;be &nbsp;able &nbsp;to &nbsp;move &nbsp;into &nbsp;walls.
<li>At &nbsp;every&nbsp; move, &nbsp;the &nbsp;current &nbsp;number &nbsp;of &nbsp;movements&nbsp; must &nbsp;be&nbsp; displayed&nbsp; in&nbsp; the&nbsp; shell.
<li>You &nbsp;have &nbsp;to &nbsp;use&nbsp; a&nbsp; 2D&nbsp; view&nbsp; (top-down &nbsp;or &nbsp;profile).
<li>The &nbsp;game &nbsp;doesn’t&nbsp; have&nbsp; to&nbsp; be&nbsp; real&nbsp; time.
<li>Although &nbsp;the &nbsp;given &nbsp;examples &nbsp;show &nbsp;a &nbsp;dolphin &nbsp;theme, &nbsp;you &nbsp;can &nbsp;create &nbsp;the &nbsp;world &nbsp;you &nbsp;want.
</ul>

<br>
<h2>Graphic &nbsp;management</h2>
<ul>
<li>Your&nbsp; program &nbsp;has &nbsp;to &nbsp;display&nbsp; the&nbsp; image&nbsp; in&nbsp; a &nbsp;window.
<li>The &nbsp;management&nbsp; of&nbsp; your &nbsp;window&nbsp; must&nbsp; remain &nbsp;smooth &nbsp;(changing &nbsp;to&nbsp; another&nbsp; window, &nbsp;minimizing, &nbsp;and &nbsp;so &nbsp;forth).
<li>Pressing &nbsp;ESC&nbsp; must&nbsp; close &nbsp;the window &nbsp;and&nbsp; quit&nbsp; the&nbsp; program &nbsp;in&nbsp; a &nbsp;clean&nbsp; way.
<li>Clicking &nbsp;on&nbsp; the &nbsp;cross &nbsp;on &nbsp;the &nbsp;window’s &nbsp;frame &nbsp;must &nbsp;close &nbsp;the &nbsp;window&nbsp; and&nbsp; quit&nbsp; the&nbsp;
program &nbsp;in&nbsp; a &nbsp;clean&nbsp; way.
<li>The &nbsp;use &nbsp;of &nbsp;the&nbsp; images&nbsp; of &nbsp;the &nbsp;MiniLibX&nbsp; is&nbsp; mandatory.
</ul>

<br>
<h2>Map</h2>
<ul>
<li>The &nbsp;map&nbsp; has&nbsp; to &nbsp;be &nbsp;constructed &nbsp;with&nbsp; 3&nbsp; components:&nbsp; <b>walls</b>, &nbsp;<b>collectibles</b>,&nbsp; and &nbsp;<b>free &nbsp;space</b>.
<li>The &nbsp;map &nbsp;can &nbsp;be &nbsp;composed &nbsp;of &nbsp;only &nbsp;these &nbsp;5 &nbsp;characters:<br>
<b>0</b> &nbsp;for&nbsp; an&nbsp; empty&nbsp; space,<br>
<b>1</b> &nbsp;for&nbsp; a &nbsp;wall,<br>
<b>C</b> &nbsp;for&nbsp; a &nbsp;collectible,<br>
<b>E</b> &nbsp;for&nbsp; a &nbsp;map &nbsp;exit,<br>
<b>P</b> &nbsp;for&nbsp; the&nbsp; player’s &nbsp;starting &nbsp;position.<br>
<li>The&nbsp; map&nbsp; must &nbsp;contain &nbsp;at &nbsp;least &nbsp;<b>1 &nbsp;exit</b>, &nbsp;<b>1 &nbsp;collectible</b>, &nbsp;and &nbsp;<b>1 &nbsp;starting &nbsp;position</b>.
<li>The &nbsp;map &nbsp;must &nbsp;be &nbsp;rectangular.
<li>The&nbsp; map &nbsp;must &nbsp;be&nbsp; closed/surrounded &nbsp;by&nbsp; walls.&nbsp; If &nbsp;it’s &nbsp;not, &nbsp;the&nbsp; program&nbsp; must &nbsp;return&nbsp;
an&nbsp; error.
<li>You &nbsp;don’t &nbsp;have &nbsp;to &nbsp;check&nbsp; if &nbsp;there’s &nbsp;a &nbsp;valid &nbsp;path &nbsp;in &nbsp;the &nbsp;map.
<li>You &nbsp;must &nbsp;be &nbsp;able &nbsp;to &nbsp;parse &nbsp;any &nbsp;kind &nbsp;of&nbsp; map,&nbsp; as &nbsp;long &nbsp;as &nbsp;it &nbsp;respects &nbsp;the &nbsp;above &nbsp;rules.
<li>If &nbsp;any &nbsp;misconfiguration&nbsp; of &nbsp;any&nbsp; kind &nbsp;is &nbsp;encountered &nbsp;in &nbsp;the &nbsp;file,&nbsp; the &nbsp;program&nbsp; must&nbsp;
exit &nbsp;in&nbsp; a &nbsp;clean &nbsp;way,&nbsp; and &nbsp;return &nbsp;<b>"Error\n"</b> &nbsp;followed&nbsp; by &nbsp;an &nbsp;explicit &nbsp;error &nbsp;message &nbsp;of&nbsp;
your &nbsp;choice.
</ul>

<br><br><br>
# ⭐️ Bonus &nbsp;part

<br>
<p>
Usually, &nbsp;you &nbsp;would &nbsp;be &nbsp;encouraged &nbsp;to d&nbsp;evelop&nbsp; your &nbsp;own &nbsp;original &nbsp;extra &nbsp;features. &nbsp;However,&nbsp;
there &nbsp;will&nbsp; be &nbsp;much &nbsp;more &nbsp;interesting &nbsp;graphic &nbsp;projects &nbsp;later. &nbsp;They &nbsp;are &nbsp;waiting &nbsp;for &nbsp;you!!&nbsp;
Don’t &nbsp;lose &nbsp;too &nbsp;much&nbsp; time &nbsp;on &nbsp;this&nbsp; assignment!<br><br>
You &nbsp;are&nbsp; allowed &nbsp;to &nbsp;use &nbsp;other&nbsp; functions&nbsp; to &nbsp;complete&nbsp; the &nbsp;bonus &nbsp;part&nbsp; as&nbsp; long&nbsp; as &nbsp;their&nbsp;
use &nbsp;is &nbsp;justified &nbsp;during &nbsp;your &nbsp;evaluation. &nbsp;Be &nbsp;smart!<br><br>
</p>
You&nbsp; will&nbsp; get &nbsp;extra&nbsp; points&nbsp; if &nbsp;you:
<ul>
<li>Make &nbsp;the &nbsp;player &nbsp;lose&nbsp; when &nbsp;they &nbsp;touch &nbsp;an &nbsp;enemy &nbsp;patrol.
<li>Add &nbsp;some &nbsp;sprite &nbsp;animation.
<li>Display&nbsp; the &nbsp;movement &nbsp;count &nbsp;directly&nbsp; on&nbsp; screen &nbsp;instead&nbsp; of &nbsp;writing &nbsp;it &nbsp;in &nbsp;the &nbsp;shell.
</ul>

<br><br>

> [!NOTE]  
> Because of 42 School norm requirements:
> * Each function can't have more than 25 lines of code.
> * All variables are declared and aligned at the top of each function.
> * Project should be created just with allowed functions otherwise it's cheating.
