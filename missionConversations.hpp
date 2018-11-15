class Conversations
{
	class exit
	{
		exit = 1;
		expression = "nul = [IP_Banker, 'Have a good day.', 'DIRECT', 3] spawn IP_fnc_simpleSentence;";
		sentences[] = {"Cya."};
	};
	class opener
	{
		arguments[] = {"(name player)"};
		responses[] = {"job", "transport", "who", "exit"};
		sentences[] = {
			"Hello, we are from Taipan Security.",
			"Ah yes, I was told you were coming. What would you like to know?"
		};
	};
	class back
	{
		responses[] = {"transport", "job", "who", "exit"};
		sentences[] = {
			"I'd like to know something else.",
			"Yes?"
		};
	};
	class transport
	{
		responses[] = {"job", "who", "back"};
		sentences[] = {
			"We were told we would be provided with transport vehicles.",
			"Yes, just around the corner is a car dealership owned by the bank. We have provided you with five vehicles, if they should be damaged a small budget has been allotted for replacements.",
			"What kind of vehicles are we talking here?",
			"Three Audi RS6s and two Toyota Land Cruisers. The Toyotas are much better suited to offroading that the Audis but if it comes down to needing to get somewhere fast the Toyota is outclassed."
		};
	};
	class job
	{
		responses[] = {"transport", "who", "why", "rebels", "back"};
		sentences[] = {
			"What is our tasking?",
			"A business partner of ours the Tanoan Sugar Company insists on collecting their revenue in cash at their factory and then having it transported to the bank. Normally this would be done by helicopter trips due to the danger but now the filthy rebels on the island have been using anti-air defences making that impossible. As such you will need to drive there, then take two vans worth of cash to our offsite branch at Harcourt.",
			"OK"
		};
	};
	class why
	{
		responses[] = {"transport", "who", "rebels", "back"};
		sentences[] = {
			"Why all the way out there?",
			"As I said, usually it is done by helicopter so the distance is less of a factor. Harcourt is where we sort our, how can I say this, less than clean money. We all have our evils and cleaning money for business people is ours.",
		    "OK"
		};
	};
	class who
	{
		responses[] = {"transport", "job", "back"};
		sentences[] = {
			"Who are you?",
			"I am the manager here at our main branch of Georgetown. I am also the head of security operations, or at least I was when we had a security team. The filthy niggers left to join the rebels and took off with most of our inhouse armory.",
			"Loving the casual racism. I guess that is all I need to know."
		};
	};
	class rebels
	{
		responses[] = {"rebels2", "back"};
		sentences[] = {
			"These rebels. Who are they and why are they fighting?",
			"They call themselves the Syndikat. They have existed for many years and have been crushed many times, but this time they have come back seemingly stronger than normal. The Government is having a hard time combatting them. They fight because they oppose the modernisation of Tanoa. They love wallowing in filth and sacraficing their virgin daughters to the gods rather than living like normal fucking humans, that is why they fight.",
			"OK"
		};
	};
	class rebels2
	{
		responses[] = {"back"};
		sentences[] = {
			"How well equiped are they?",
			"The Government likes to hide this information from us but we have had independant sources tell us that they are well organised and heavily armed. They have everything from armoured vehicles to anti-air defences, the irony is they use the very technology they oppose. Retards....",
			"That is all I need to know."
		};
	};
	
	//car
	class exit2
	{
		exit = 1;
		expression = "nul = [IP_Dealer, 'No worries.', 'DIRECT', 3] spawn IP_fnc_simpleSentence;";
		sentences[] = {"I'll get going."};
	};
	class opener2
	{
		arguments[] = {"(name player)"};
		responses[] = {"well", "gun", "exit2"};
		sentences[] = {
			"Hello, we were told to come here for our cars.",
			"Ah yes."
		};
	};
	class gun
	{
		responses[] = {"well"};
		sentences[] = {
			"Why do you have a gun?",
			"You never know when the rebels might come flying through those doors..."
		};
	};
	class well
	{
		responses[] = {"exit2"};
		sentences[] = {
			"Well? Where are they.",
			"They are through the garage on my left. I am busy, can we hurry this up please."
		};
	};
	
	//Commander
	class exit3
	{
		exit = 1;
		expression = "nul = [IP_Commander, 'Good hunting.', 'DIRECT', 3] spawn IP_fnc_simpleSentence;";
		sentences[] = {"We will get going."};
	};
	class opener3
	{
		arguments[] = {"(name player)"};
		responses[] = {"whatdo", "exit3"};
		sentences[] = {
			"We are here to pickup the vans.",
			"Taipan Security I am guessing, that racist old fuck in Georgetown called ahead.",
			"Are these the ones?",
			"Yes, these are the vans. The money has been hidden in the floor and walls to make it harder for the rebels to find if you die. So don't worry, they aren't empty."
		};
	};
	class whatdo
	{
		responses[] = {"exit3"};
		sentences[] = {
			"What do we do once we get there?",
			"Once you get there find the manager of the site and notify him the vans have been delivered. Then that is all you have to do.",
			"OK"
		};
	};
	
	//Manager
	class exit4
	{
		exit = 1;
		expression = "nul = [IP_Commander, 'Try not to die out there...', 'DIRECT', 3] spawn IP_fnc_simpleSentence;";
		sentences[] = {"We will get going."};
	};
	class opener4
	{
		arguments[] = {"(name player)"};
		responses[] = {"exit4"};
		sentences[] = {
			"We delivered the vans.",
			"Good, you will receive your payment shortly.",
			"Is that all?",
			"Yes, you will be notified when we next need you."
		};
	};
};