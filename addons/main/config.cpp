class cfgPatches
{
	class watchplus_main
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CBA_main"};
		author[] = {"Kavinsky"};
		authorUrl = "https://github.com/kavinsky/watchplus-a3";
		version = 0.1.0;
		versionStr = "0.1.0";
		versionAr[] = {0,1,0};
	};
};

class CfgFunctions
{
	class WatchPlus
	{
		class Watch
		{
			file="\x\watchplus\addons\main\functions";		
			class postInit{};
			class onWatchKeyDown {};
			class onWatchKeyUp {};
			class getPlayerWatch {};
			class watchUpdateLoop {};
		};
	};
};

class RscWatchBackPicture
{
	access = 0;
	type = 0;
	idc = -1;
	style = 48;
	colorBackground[] = 
	{
		0,
		0,
		0,
		0
	};
	colorText[] = 
	{
		1,
		1,
		1,
		1
	};
	font = "TahomaB";
	sizeEx = 0;
	lineSpacing = 0;
	text = "";
	fixedWidth = 0;
	shadow = 0;
	x = 0;
	y = 0;
	w = 0.2;
	h = 0.15;
};
class RscTitles
{
	class RscWatchPlusWatch
	{
		idd = 43200;
		onLoad = "uiNamespace setVariable ['WATCHPLUS_Watch_Display', _this select 0]";
		onUnload = "uiNamespace setVariable ['WATCHPLUS_Watch_Display', displayNull]";
		fadeIn = 0.2;
		fadeOut = 0.2;
		movingEnable = false;
		duration = 10e10;
		name = "RscWatchPlusWatch"; 
		class controls
		{
			class background154: RscWatchBackPicture
			{
				idc = -1;
				text = "\task_force_radio\anprc154\anprc154.paa";
				x = -0.0269687 * safezoneW + safezoneX;
				y = -0.0251171 * safezoneH + safezoneY;
				w = 0.555188 * safezoneW;
				h = 1.00402 * safezoneH;
				moving = 0;
			};
		};
	};
};
