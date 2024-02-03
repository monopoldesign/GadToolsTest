/*
 *  Source machine generated by GadToolsBox V2.0b
 *  which is (c) Copyright 1991-1993 Jaba Development
 *
 *  GUI Designed by : -- Unnamed --
 */

#include <exec/types.h>
#include <intuition/intuition.h>
#include <intuition/classes.h>
#include <intuition/classusr.h>
#include <intuition/imageclass.h>
#include <intuition/gadgetclass.h>
#include <libraries/gadtools.h>
#include <graphics/displayinfo.h>
#include <graphics/gfxbase.h>

#include <exec/exec.h>
#include <dos/dos.h>

#include <clib/exec_protos.h>
#include <clib/intuition_protos.h>
#include <clib/gadtools_protos.h>
#include <clib/graphics_protos.h>
#include <clib/utility_protos.h>
#include <clib/diskfont_protos.h>
#include <clib/asl_protos.h>

// For Delay() required
//#include <clib/dos_protos.h>

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "GDT.h"

struct Screen         *Scr = NULL;
UBYTE                 *PubScreenName = NULL;
APTR                   VisualInfo = NULL;
struct Window         *Project0Wnd = NULL;
struct Gadget         *Project0GList = NULL;
struct Menu           *Project0Menus = NULL;
struct IntuiMessage    Project0Msg;
struct TextFont       *Font       = NULL;
struct Gadget         *Project0Gadgets[14];
UWORD                  Project0Left = 11;
UWORD                  Project0Top = 26;
UWORD                  Project0Width = 465;
UWORD                  Project0Height = 119;
UBYTE                 *Project0Wdt = (UBYTE *)"GadToolsTest V0.1";

UBYTE *MX0Labels[] = {
	(UBYTE *)"MX_Item1",
	(UBYTE *)"MX_Item2",
	(UBYTE *)"MX_Item3",
	NULL };

UBYTE *CYCLE0Labels[] = {
	(UBYTE *)"CY_Item1",
	(UBYTE *)"CY_Item2",
	(UBYTE *)"CY_Item3",
	NULL };

extern struct MinList LISTVIEW0List;

struct Node LISTVIEW0Nodes[] = {
	&LISTVIEW0Nodes[1], ( struct Node * )&LISTVIEW0List.mlh_Head, 0, 0, "LV_Item1",
	&LISTVIEW0Nodes[2], &LISTVIEW0Nodes[0], 0, 0, "LV_Item2",
	&LISTVIEW0Nodes[3], &LISTVIEW0Nodes[1], 0, 0, "LV_Item3",
	&LISTVIEW0Nodes[4], &LISTVIEW0Nodes[2], 0, 0, "LV_Item4",
	&LISTVIEW0Nodes[5], &LISTVIEW0Nodes[3], 0, 0, "LV_Item5",
	&LISTVIEW0Nodes[6], &LISTVIEW0Nodes[4], 0, 0, "LV_Item6",
	&LISTVIEW0Nodes[7], &LISTVIEW0Nodes[5], 0, 0, "LV_Item7",
	( struct Node * )&LISTVIEW0List.mlh_Tail, &LISTVIEW0Nodes[6], 0, 0, "LV_Item8" };

struct MinList LISTVIEW0List = {
	( struct MinNode * )&LISTVIEW0Nodes[0], ( struct MinNode * )NULL, ( struct MinNode * )&LISTVIEW0Nodes[7] };

struct TextAttr XHelvetica9 = {
	( STRPTR )"XHelvetica.font", 9, 0x00, 0x20 };

struct NewMenu Project0NewMenu[] = {
	NM_TITLE, (STRPTR)"Project", NULL, 0, NULL, NULL,
	NM_ITEM, (STRPTR)"Load...", NULL, 0, 0L, (APTR)Project0Item0,
	NM_ITEM, (STRPTR)"Save as...", NULL, 0, 0L, (APTR)Project0Item1,
	NM_ITEM, (STRPTR)NM_BARLABEL, NULL, 0, 0L, NULL,
	NM_ITEM, (STRPTR)"About...", NULL, 0, 0L, (APTR)Project0Item2,
	NM_ITEM, (STRPTR)NM_BARLABEL, NULL, 0, 0L, NULL,
	NM_ITEM, (STRPTR)"Quit", NULL, 0, 0L, (APTR)Project0Item3,
	NM_TITLE, (STRPTR)"Edit", NULL, 0, NULL, NULL,
	NM_ITEM, (STRPTR)"Copy", NULL, 0, 0L, (APTR)Project0Item4,
	NM_ITEM, (STRPTR)"Paste", NULL, 0, 0L, (APTR)Project0Item5,
	NM_ITEM, (STRPTR)NM_BARLABEL, NULL, 0, 0L, NULL,
	NM_ITEM, (STRPTR)"Options", NULL, 0, NULL, NULL,
	NM_SUB, (STRPTR)"Option 1", NULL, CHECKIT|CHECKED|MENUTOGGLE, 0L, (APTR)Project0Item6,
	NM_SUB, (STRPTR)"Option 2", NULL, CHECKIT|MENUTOGGLE, 0L, (APTR)Project0Item7,
	NM_SUB, (STRPTR)"Option 3", NULL, CHECKIT|MENUTOGGLE, 0L, (APTR)Project0Item8,
	NM_END, NULL, NULL, 0, 0L, NULL };

UWORD Project0GTypes[] = {
	LISTVIEW_KIND,
	BUTTON_KIND,
	CHECKBOX_KIND,
	INTEGER_KIND,
	MX_KIND,
	NUMBER_KIND,
	CYCLE_KIND,
	PALETTE_KIND,
	SCROLLER_KIND,
	NUMBER_KIND,
	SLIDER_KIND,
	STRING_KIND,
	TEXT_KIND,
	INTEGER_KIND
};

struct NewGadget Project0NGad[] = {
	372, 8, 78, 54, NULL, NULL, GD_LISTVIEW, 0, NULL, (APTR)LISTVIEWClicked,
	8, 78, 80, 21, (UBYTE *)"Button", NULL, GD_BUTTON, PLACETEXT_IN, NULL, (APTR)BUTTONClicked,
	42, 8, 26, 11, (UBYTE *)"Checkbox", NULL, GD_CHECKBOX, PLACETEXT_BELOW, NULL, (APTR)CHECKBOXClicked,
	86, 8, 57, 15, (UBYTE *)"Integer:", NULL, GD_INTEGER, PLACETEXT_BELOW, NULL, (APTR)INTEGERClicked,
	203, 8, 17, 9, NULL, NULL, GD_MX, PLACETEXT_LEFT, NULL, (APTR)MXClicked,
	240, 8, 55, 13, (UBYTE *)"Number", NULL, GD_NUMBER, PLACETEXT_BELOW, NULL, NULL,
	8, 48, 80, 13, (UBYTE *)"Cycle", NULL, GD_CYCLE, PLACETEXT_BELOW, NULL, (APTR)CYCLEClicked,
	99, 48, 93, 52, (UBYTE *)"Palette", NULL, GD_PALETTE, PLACETEXT_BELOW, NULL, (APTR)PALETTEClicked,
	234, 48, 127, 17, (UBYTE *)"Scroller", NULL, GD_SCROLLER, PLACETEXT_BELOW, NULL, (APTR)SCROLLERClicked,
	213, 48, 22, 17, NULL, NULL, GD_SCR_NUMBER, 0, NULL, NULL,
	213, 83, 88, 17, (UBYTE *)"Slider", NULL, GD_SLIDER, PLACETEXT_BELOW, NULL, (APTR)SLIDERClicked,
	307, 83, 54, 17, (UBYTE *)"String", NULL, GD_STRING, PLACETEXT_BELOW, NULL, (APTR)STRINGClicked,
	372, 63, 77, 37, (UBYTE *)"Text", NULL, GD_TEXT, PLACETEXT_BELOW, NULL, NULL,
	311, 8, 31, 14, (UBYTE *)"SliderValue", NULL, GD_SL_NUMBER, PLACETEXT_BELOW, NULL, (APTR)SL_NUMBERClicked
};

ULONG Project0GTags[] = {
	(GTLV_Labels), (ULONG)&LISTVIEW0List, (GTLV_ShowSelected), NULL, (TAG_DONE),
	(TAG_DONE),
	(TAG_DONE),
	(GTIN_Number), 123456789, (GTIN_MaxChars), 10, (TAG_DONE),
	(GTMX_Labels), (ULONG)&MX0Labels[ 0 ], (TAG_DONE),
	(GTNM_Number), 123456789, (GTNM_Border), TRUE, (TAG_DONE),
	(GTCY_Labels), (ULONG)&CYCLE0Labels[ 0 ], (TAG_DONE),
	(GTPA_Depth), 3, (GTPA_Color), 0, (GTPA_ColorOffset), 0, (TAG_DONE),
	(GTSC_Total), 40, (GTSC_Visible), 10, (GTSC_Arrows), 12, (PGA_Freedom), LORIENT_HORIZ, (GA_RelVerify), TRUE, (TAG_DONE),
	(GTNM_Border), TRUE, (TAG_DONE),
	(GTSL_MaxLevelLen), 4, (GTSL_LevelFormat), (ULONG)"%2ld", (PGA_Freedom), LORIENT_HORIZ, (GA_RelVerify), TRUE, (TAG_DONE),
	(GTST_String), (ULONG)"String", (GTST_MaxChars), 10, (TAG_DONE),
	(GTTX_Border), TRUE, (TAG_DONE),
	(GTIN_Number), 0, (GTIN_MaxChars), 10, (TAG_DONE)
};

UBYTE selectedLVItem;

int main()
{
	BOOL running = TRUE;

	if (SetupScreen() == 0)
	{
		if (OpenProject0Window() == 0)
		{
		//	Delay(500);
			while (running == TRUE)
			{
				Wait(1L << Project0Wnd->UserPort->mp_SigBit);
				running = HandleProject0IDCMP();
			}

			CloseProject0Window();
		}
		CloseDownScreen();
	}
	return (0);
}

int SetupScreen( void )
{
	if ( ! ( Font = OpenDiskFont( &XHelvetica9 )))
		return( 5L );

	if ( ! ( Scr = LockPubScreen( PubScreenName )))
		return( 1L );

	if ( ! ( VisualInfo = GetVisualInfo( Scr, TAG_DONE )))
		return( 2L );

	return( 0L );
}

void CloseDownScreen( void )
{
	if ( VisualInfo ) {
		FreeVisualInfo( VisualInfo );
		VisualInfo = NULL;
	}

	if ( Scr        ) {
		UnlockPubScreen( NULL, Scr );
		Scr = NULL;
	}

	if ( Font       ) {
		CloseFont( Font );
		Font = NULL;
	}
}

int HandleProject0IDCMP( void )
{
	struct 	IntuiMessage *m;
	struct	Gadget *gad;
	struct 	MenuItem *n;
	int		(*func)();
	BOOL	running = TRUE;

	while( m = GT_GetIMsg(Project0Wnd->UserPort))
	{
		CopyMem((char *)m, (char *)&Project0Msg, (long)sizeof(struct IntuiMessage));
		GT_ReplyIMsg( m );

		switch (Project0Msg.Class)
		{
			case IDCMP_REFRESHWINDOW:
				GT_BeginRefresh(Project0Wnd);
				GT_EndRefresh(Project0Wnd, TRUE);
				break;

			case IDCMP_CLOSEWINDOW:
				running = Project0CloseWindow();
				break;

			case IDCMP_GADGETUP:
			case IDCMP_GADGETDOWN:
				printf("Code: %1d\n", Project0Msg.Code);
				gad = (struct Gadget *)Project0Msg.IAddress;
				printf("SpecialInfo: %s\n", ((struct StringInfo *)gad->SpecialInfo)->Buffer);
				func = (void *)gad->UserData;
				running = func();
				break;
			case IDCMP_MENUPICK:
				while(Project0Msg.Code != MENUNULL)
				{
					n = ItemAddress(Project0Menus, Project0Msg.Code);
					printf("Menu: %1d, Item: %1d, SubItem: %1d\n", MENUNUM(Project0Msg.Code), ITEMNUM(Project0Msg.Code), SUBNUM(Project0Msg.Code));
					func = (void *)(GTMENUITEM_USERDATA(n));
					running = func();
					Project0Msg.Code = n->NextSelect;
				}
				break;
		}
	}
	return (running);
}

int OpenProject0Window( void )
{
	struct NewGadget	ng;
	struct Gadget	*g;
	UWORD		lc, tc;
	UWORD		offx = Scr->WBorLeft, offy = Scr->WBorTop + Scr->RastPort.TxHeight + 1;

	if ( ! ( g = CreateContext( &Project0GList )))
		return( 1L );

	for( lc = 0, tc = 0; lc < Project0_CNT; lc++ ) {

		CopyMem((char * )&Project0NGad[ lc ], (char * )&ng, (long)sizeof( struct NewGadget ));

		ng.ng_VisualInfo = VisualInfo;
		ng.ng_TextAttr   = &XHelvetica9;
		ng.ng_LeftEdge  += offx;
		ng.ng_TopEdge   += offy;

		Project0Gadgets[ lc ] = g = CreateGadgetA((ULONG)Project0GTypes[ lc ], g, &ng, ( struct TagItem * )&Project0GTags[ tc ] );

		while( Project0GTags[ tc ] ) tc += 2;
		tc++;

		if ( NOT g )
			return( 2L );
	}

	if ( ! ( Project0Menus = CreateMenus( Project0NewMenu, GTMN_FrontPen, 0L, TAG_DONE )))
		return( 3L );

	LayoutMenus( Project0Menus, VisualInfo, GTMN_TextAttr, &XHelvetica9, TAG_DONE );

	if ( ! ( Project0Wnd = OpenWindowTags( NULL,
				WA_Left,	Project0Left,
				WA_Top,		Project0Top,
				WA_Width,	Project0Width,
				WA_Height,	Project0Height + offy,
				WA_IDCMP,	LISTVIEWIDCMP|BUTTONIDCMP|CHECKBOXIDCMP|INTEGERIDCMP|MXIDCMP|NUMBERIDCMP|CYCLEIDCMP|PALETTEIDCMP|SCROLLERIDCMP|ARROWIDCMP|SLIDERIDCMP|STRINGIDCMP|TEXTIDCMP|

						IDCMP_MENUPICK|IDCMP_CLOSEWINDOW|


						IDCMP_REFRESHWINDOW,
				WA_Flags,	WFLG_DRAGBAR|WFLG_DEPTHGADGET|WFLG_CLOSEGADGET|WFLG_SMART_REFRESH|WFLG_ACTIVATE,
				WA_Gadgets,	Project0GList,
				WA_Title,	Project0Wdt,
				WA_ScreenTitle,	"GadToolsTest V0.1 �2020 M.Volkel",
				WA_PubScreen,	Scr,
				TAG_DONE )))
	return( 4L );

	SetMenuStrip( Project0Wnd, Project0Menus );
	GT_RefreshWindow( Project0Wnd, NULL );

	return( 0L );
}

void CloseProject0Window( void )
{
	if ( Project0Menus      ) {
		ClearMenuStrip( Project0Wnd );
		FreeMenus( Project0Menus );
		Project0Menus = NULL;	}

	if ( Project0Wnd        ) {
		CloseWindow( Project0Wnd );
		Project0Wnd = NULL;
	}

	if ( Project0GList      ) {
		FreeGadgets( Project0GList );
		Project0GList = NULL;
	}
}

int Project0CloseWindow()
{
	return (FALSE);
}

int LISTVIEWClicked(void)
{
	printf("LISTVIEW-UP!\n");

	printf("Item %1d selected.\n", Project0Msg.Code);
	selectedLVItem = Project0Msg.Code;
	GT_SetGadgetAttrs(Project0Gadgets[0], Project0Wnd, NULL, GTLV_Selected, selectedLVItem);
	GT_SetGadgetAttrs(Project0Gadgets[5], Project0Wnd, NULL, GTNM_Number, selectedLVItem);
	return (TRUE);
}

int BUTTONClicked(void)
{
	ULONG _myNumber;

	printf("BUTTON-UP!\n");

	// Set Number-Gadget to Integer-Gadget content
	_myNumber = 1234;	// FYI
	_myNumber = atoi(((struct StringInfo *)Project0Gadgets[3]->SpecialInfo)->Buffer);
	GT_SetGadgetAttrs(Project0Gadgets[5], Project0Wnd, NULL, GTNM_Number, _myNumber);

	// Set Text-Gadget to String-Gadget content
	GT_SetGadgetAttrs(Project0Gadgets[12], Project0Wnd, NULL, GTTX_Text, ((struct StringInfo *)Project0Gadgets[11]->SpecialInfo)->Buffer);
	GT_SetGadgetAttrs(Project0Gadgets[0], Project0Wnd, NULL, GTLV_Selected, selectedLVItem);

	return (TRUE);
}

int CHECKBOXClicked(void)
{
	printf("CHECKBOX-UP!\n");
	return (TRUE);
}

int INTEGERClicked(void)
{
	printf("INTEGER-UP!\n");
	return (TRUE);
}

int MXClicked(void)
{
	printf("MX-UP!\n");
	return (TRUE);
}

int CYCLEClicked(void)
{
	printf("CYCLE-UP!\n");
	return (TRUE);
}

int PALETTEClicked(void)
{
	printf("PALETTE-UP!\n");
	return (TRUE);
}

int SCROLLERClicked(void)
{
	printf("SCROLLER-UP!\n");

	// Set Number-Gadget to Scroller-Gadget level
	GT_SetGadgetAttrs(Project0Gadgets[9], Project0Wnd, NULL, GTNM_Number, Project0Msg.Code);

	return (TRUE);
}

int SLIDERClicked(void)
{
	printf("SLIDER-UP!\n");

	// Set Number-Gadget to Scroller-Gadget level
	GT_SetGadgetAttrs(Project0Gadgets[9], Project0Wnd, NULL, GTNM_Number, Project0Msg.Code);

	return (TRUE);
}

int STRINGClicked(void)
{
	printf("STRING-UP!\n");
	return (TRUE);
}

int SL_NUMBERClicked(void)
{
	ULONG _myNumber;

	printf("INTEGER-UP!\n");

	// Set Number-Gadget to Integer-Gadget content
	_myNumber = atoi(((struct StringInfo *)Project0Gadgets[13]->SpecialInfo)->Buffer);
	GT_SetGadgetAttrs(Project0Gadgets[10], Project0Wnd, NULL, GTSL_Level, _myNumber);
	return (TRUE);
}

int Project0Item0(void)
{
	/* routine when (sub)item "Load..." is selected. */

	/* Easy Requester question */
	struct EasyStruct myreq =
	{
		sizeof(struct EasyStruct),
		0,
		"Easy Request Example",
		"Do you find this interesting?",
		"Yes|No"
	};

	/* Answer goes into %s parameter */
	struct EasyStruct YesNoReply =
	{
		sizeof(struct EasyStruct),
		0,
		"Answer",
		"%s",
		"OK"
	};

	/* Display question and depending on answer give a response in another requester */
	if (EasyRequest(Project0Wnd, &myreq, NULL, NULL) == 1)
		EasyRequest(Project0Wnd, &YesNoReply, NULL, "Good, I'm glad you like it.");
	else
		EasyRequest(Project0Wnd, &YesNoReply, NULL, "Oh dear, Let's try something else");

	return (TRUE);
}

int Project0Item1(void)
{
	/* routine when (sub)item "Save as..." is selected. */

	UBYTE fname[255];
	struct EasyStruct ResultReq =
	{
		sizeof(struct EasyStruct),
		0,
		"Answer",
		"%s",
		"OK"
	};
	struct FileRequester *request;

    request = (struct FileRequester *)AllocAslRequestTags(ASL_FileRequest, ASL_Hail, "Open File", (struct TagItem *)TAG_DONE);

    /* Now show file requester */
    if (AslRequestTags(request,
    	ASLFR_Window, Project0Wnd,
    	ASLFR_InitialLeftEdge, 20,
    	ASLFR_InitialTopEdge, 20,
    	ASLFR_InitialWidth, 300,
    	ASLFR_InitialHeight, 350,
    	ASLFR_InitialDrawer, "DH2:dev/GadToolsTest/",
    	ASLFR_InitialPattern, "#?.cpp",
    	ASLFR_PositiveText, "Open",
    	(struct TagItem *)TAG_DONE))
    {

		 /* Build filename */
		strcat(fname, request->rf_Dir);

		if (fname[strlen(fname)-1] != (UBYTE)58) /* Check for : */
		   strcat(fname, "/");

		strcat(fname, request->rf_File);

		/* Display filename */
		EasyRequest(Project0Wnd, &ResultReq, NULL, fname);
	}
	else
	{
		EasyRequest(Project0Wnd, &ResultReq, NULL, "File request cancelled");
	}

	/* Free requester */
	if (request)
   		FreeAslRequest(request);

	return (TRUE);
}

int Project0Item2(void)
{
	/* routine when (sub)item "About..." is selected. */

	/* Easy Requester question */
	struct EasyStruct myreq =
	{
		sizeof(struct EasyStruct),
		0,
		"About",
		"(c)2020 M.Volkel",
		"Ok"
	};

	/* Display question and depending on answer give a response in another requester */
	EasyRequest(Project0Wnd, &myreq, NULL, NULL);

	return (TRUE);
}

int Project0Item3(void)
{
	/* routine when (sub)item "Quit" is selected. */
	return (FALSE);
}

int Project0Item4(void)
{
	/* routine when (sub)item "Copy" is selected. */
	return (TRUE);
}

int Project0Item5(void)
{
	/* routine when (sub)item "Paste" is selected. */
	return (TRUE);
}

int Project0Item6(void)
{
	/* routine when (sub)item "Option 1" is selected. */
	return (TRUE);
}

int Project0Item7(void)
{
	/* routine when (sub)item "Option 2" is selected. */
	return (TRUE);
}

int Project0Item8(void)
{
	/* routine when (sub)item "Option 3" is selected. */
	return (TRUE);
}