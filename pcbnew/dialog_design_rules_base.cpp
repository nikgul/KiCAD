///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Apr 16 2008)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "dialog_design_rules_base.h"

///////////////////////////////////////////////////////////////////////////

DIALOG_DESIGN_RULES_BASE::DIALOG_DESIGN_RULES_BASE( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( 600,520 ), wxDefaultSize );
	
	wxBoxSizer* bMainSizer;
	bMainSizer = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* sbSizer1;
	sbSizer1 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Net Classes:") ), wxVERTICAL );
	
	m_grid = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxHSCROLL|wxSIMPLE_BORDER|wxVSCROLL );
	
	// Grid
	m_grid->CreateGrid( 1, 6 );
	m_grid->EnableEditing( true );
	m_grid->EnableGridLines( true );
	m_grid->EnableDragGridSize( false );
	m_grid->SetMargins( 0, 0 );
	
	// Columns
	m_grid->SetColSize( 0, 100 );
	m_grid->SetColSize( 1, 100 );
	m_grid->SetColSize( 2, 100 );
	m_grid->SetColSize( 3, 100 );
	m_grid->SetColSize( 4, 100 );
	m_grid->EnableDragColMove( false );
	m_grid->EnableDragColSize( true );
	m_grid->SetColLabelSize( 40 );
	m_grid->SetColLabelValue( 0, _("Clearance") );
	m_grid->SetColLabelValue( 1, _("Track Width") );
	m_grid->SetColLabelValue( 2, _("Via Dia") );
	m_grid->SetColLabelValue( 3, _("Via Drill") );
	m_grid->SetColLabelValue( 4, _("uVia Dia") );
	m_grid->SetColLabelValue( 5, _("uVia Drill") );
	m_grid->SetColLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Rows
	m_grid->AutoSizeRows();
	m_grid->EnableDragRowSize( true );
	m_grid->SetRowLabelSize( 120 );
	m_grid->SetRowLabelValue( 0, _("Default") );
	m_grid->SetRowLabelAlignment( wxALIGN_LEFT, wxALIGN_CENTRE );
	
	// Label Appearance
	
	// Cell Defaults
	m_grid->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	m_grid->SetToolTip( _("Net Class parameters") );
	m_grid->SetMinSize( wxSize( -1,150 ) );
	
	sbSizer1->Add( m_grid, 1, wxALL|wxEXPAND, 5 );
	
	wxBoxSizer* buttonBoxSizer;
	buttonBoxSizer = new wxBoxSizer( wxHORIZONTAL );
	
	m_addButton = new wxButton( this, wxID_ADD_NETCLASS, _("Add"), wxDefaultPosition, wxDefaultSize, 0 );
	m_addButton->SetToolTip( _("Add another Net Class") );
	
	buttonBoxSizer->Add( m_addButton, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	m_removeButton = new wxButton( this, wxID_REMOVE_NETCLASS, _("Remove"), wxDefaultPosition, wxDefaultSize, 0 );
	m_removeButton->SetToolTip( _("Remove the currently select Net Class") );
	
	buttonBoxSizer->Add( m_removeButton, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	m_moveUpButton = new wxButton( this, wxID_ANY, _("Move Up"), wxDefaultPosition, wxDefaultSize, 0 );
	m_moveUpButton->SetToolTip( _("Move the currently selected Net Class up one row") );
	
	buttonBoxSizer->Add( m_moveUpButton, 0, wxALL, 5 );
	
	sbSizer1->Add( buttonBoxSizer, 0, wxALIGN_CENTER_HORIZONTAL, 5 );
	
	bMainSizer->Add( sbSizer1, 1, wxALL|wxEXPAND, 5 );
	
	wxStaticBoxSizer* sbSizer4;
	sbSizer4 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Membership:") ), wxHORIZONTAL );
	
	wxBoxSizer* leftNetSelectBoxSizer;
	leftNetSelectBoxSizer = new wxBoxSizer( wxVERTICAL );
	
	wxArrayString m_leftClassChoiceChoices;
	m_leftClassChoice = new wxChoice( this, ID_LEFT_CHOICE_CLICK, wxDefaultPosition, wxDefaultSize, m_leftClassChoiceChoices, 0 );
	m_leftClassChoice->SetSelection( 0 );
	leftNetSelectBoxSizer->Add( m_leftClassChoice, 0, wxALL|wxEXPAND, 5 );
	
	m_leftListCtrl = new wxListCtrl( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLC_HRULES|wxLC_REPORT|wxLC_VRULES );
	m_leftListCtrl->SetMinSize( wxSize( 220,-1 ) );
	
	leftNetSelectBoxSizer->Add( m_leftListCtrl, 1, wxALL|wxEXPAND, 5 );
	
	sbSizer4->Add( leftNetSelectBoxSizer, 1, wxALL|wxEXPAND, 5 );
	
	wxBoxSizer* bmiddleSizerNetSelect;
	bmiddleSizerNetSelect = new wxBoxSizer( wxVERTICAL );
	
	m_buttonRightToLeft = new wxButton( this, ID_LEFT_TO_RIGHT_COPY, _("<<<"), wxDefaultPosition, wxDefaultSize, 0 );
	bmiddleSizerNetSelect->Add( m_buttonRightToLeft, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );
	
	m_buttonLeftToRight = new wxButton( this, ID_RIGHT_TO_LEFT_COPY, _(">>>"), wxDefaultPosition, wxDefaultSize, 0 );
	bmiddleSizerNetSelect->Add( m_buttonLeftToRight, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );
	
	wxBoxSizer* bSizerButtonsSelecAll;
	bSizerButtonsSelecAll = new wxBoxSizer( wxHORIZONTAL );
	
	m_buttonLeftSelAll = new wxButton( this, wxID_ANY, _("<< Select All"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerButtonsSelecAll->Add( m_buttonLeftSelAll, 0, wxALL, 5 );
	
	m_buttonRightSelAll = new wxButton( this, wxID_ANY, _("Select All >>"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerButtonsSelecAll->Add( m_buttonRightSelAll, 0, wxALIGN_BOTTOM|wxALIGN_RIGHT|wxALL, 5 );
	
	bmiddleSizerNetSelect->Add( bSizerButtonsSelecAll, 0, wxALIGN_CENTER_HORIZONTAL, 5 );
	
	sbSizer4->Add( bmiddleSizerNetSelect, 0, wxALIGN_CENTER_VERTICAL, 5 );
	
	wxBoxSizer* rghtNetSelectBoxSizer;
	rghtNetSelectBoxSizer = new wxBoxSizer( wxVERTICAL );
	
	wxArrayString m_rightClassChoiceChoices;
	m_rightClassChoice = new wxChoice( this, ID_RIGHT_CHOICE_CLICK, wxDefaultPosition, wxDefaultSize, m_rightClassChoiceChoices, 0 );
	m_rightClassChoice->SetSelection( 0 );
	rghtNetSelectBoxSizer->Add( m_rightClassChoice, 0, wxALL|wxEXPAND, 5 );
	
	m_rightListCtrl = new wxListCtrl( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLC_HRULES|wxLC_REPORT|wxLC_VRULES );
	m_rightListCtrl->SetMinSize( wxSize( 220,-1 ) );
	
	rghtNetSelectBoxSizer->Add( m_rightListCtrl, 1, wxALL|wxEXPAND, 5 );
	
	sbSizer4->Add( rghtNetSelectBoxSizer, 0, wxALL|wxEXPAND, 5 );
	
	bMainSizer->Add( sbSizer4, 2, wxEXPAND|wxBOTTOM|wxRIGHT|wxLEFT, 5 );
	
	wxStaticBoxSizer* sbSizer2;
	sbSizer2 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Messages:") ), wxHORIZONTAL );
	
	m_MessagesList = new wxHtmlWindow( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxHW_SCROLLBAR_AUTO|wxSUNKEN_BORDER );
	m_MessagesList->SetMinSize( wxSize( -1,100 ) );
	
	sbSizer2->Add( m_MessagesList, 1, wxEXPAND|wxRIGHT|wxLEFT, 5 );
	
	bMainSizer->Add( sbSizer2, 0, wxALL|wxEXPAND, 5 );
	
	m_sdbSizer1 = new wxStdDialogButtonSizer();
	m_sdbSizer1OK = new wxButton( this, wxID_OK );
	m_sdbSizer1->AddButton( m_sdbSizer1OK );
	m_sdbSizer1Cancel = new wxButton( this, wxID_CANCEL );
	m_sdbSizer1->AddButton( m_sdbSizer1Cancel );
	m_sdbSizer1->Realize();
	bMainSizer->Add( m_sdbSizer1, 0, wxALIGN_RIGHT|wxALL|wxEXPAND, 5 );
	
	this->SetSizer( bMainSizer );
	this->Layout();
	
	// Connect Events
	m_grid->Connect( wxEVT_GRID_CELL_LEFT_CLICK, wxGridEventHandler( DIALOG_DESIGN_RULES_BASE::OnNetClassesGridLeftClick ), NULL, this );
	m_grid->Connect( wxEVT_GRID_CELL_RIGHT_CLICK, wxGridEventHandler( DIALOG_DESIGN_RULES_BASE::OnNetClassesGridRightClick ), NULL, this );
	m_addButton->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DIALOG_DESIGN_RULES_BASE::OnAddNetclassClick ), NULL, this );
	m_removeButton->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DIALOG_DESIGN_RULES_BASE::OnRemoveNetclassClick ), NULL, this );
	m_moveUpButton->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DIALOG_DESIGN_RULES_BASE::OnMoveUpSelectedNetClass ), NULL, this );
	m_leftClassChoice->Connect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( DIALOG_DESIGN_RULES_BASE::OnLeftCBSelection ), NULL, this );
	m_buttonRightToLeft->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DIALOG_DESIGN_RULES_BASE::OnRightToLeftCopyButton ), NULL, this );
	m_buttonLeftToRight->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DIALOG_DESIGN_RULES_BASE::OnLeftToRightCopyButton ), NULL, this );
	m_buttonLeftSelAll->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DIALOG_DESIGN_RULES_BASE::OnLeftSelectAllButton ), NULL, this );
	m_buttonRightSelAll->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DIALOG_DESIGN_RULES_BASE::OnRightSelectAllButton ), NULL, this );
	m_rightClassChoice->Connect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( DIALOG_DESIGN_RULES_BASE::OnRightCBSelection ), NULL, this );
	m_sdbSizer1Cancel->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DIALOG_DESIGN_RULES_BASE::OnCancelButtonClick ), NULL, this );
	m_sdbSizer1OK->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DIALOG_DESIGN_RULES_BASE::OnOkButtonClick ), NULL, this );
}

DIALOG_DESIGN_RULES_BASE::~DIALOG_DESIGN_RULES_BASE()
{
	// Disconnect Events
	m_grid->Disconnect( wxEVT_GRID_CELL_LEFT_CLICK, wxGridEventHandler( DIALOG_DESIGN_RULES_BASE::OnNetClassesGridLeftClick ), NULL, this );
	m_grid->Disconnect( wxEVT_GRID_CELL_RIGHT_CLICK, wxGridEventHandler( DIALOG_DESIGN_RULES_BASE::OnNetClassesGridRightClick ), NULL, this );
	m_addButton->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DIALOG_DESIGN_RULES_BASE::OnAddNetclassClick ), NULL, this );
	m_removeButton->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DIALOG_DESIGN_RULES_BASE::OnRemoveNetclassClick ), NULL, this );
	m_moveUpButton->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DIALOG_DESIGN_RULES_BASE::OnMoveUpSelectedNetClass ), NULL, this );
	m_leftClassChoice->Disconnect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( DIALOG_DESIGN_RULES_BASE::OnLeftCBSelection ), NULL, this );
	m_buttonRightToLeft->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DIALOG_DESIGN_RULES_BASE::OnRightToLeftCopyButton ), NULL, this );
	m_buttonLeftToRight->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DIALOG_DESIGN_RULES_BASE::OnLeftToRightCopyButton ), NULL, this );
	m_buttonLeftSelAll->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DIALOG_DESIGN_RULES_BASE::OnLeftSelectAllButton ), NULL, this );
	m_buttonRightSelAll->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DIALOG_DESIGN_RULES_BASE::OnRightSelectAllButton ), NULL, this );
	m_rightClassChoice->Disconnect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( DIALOG_DESIGN_RULES_BASE::OnRightCBSelection ), NULL, this );
	m_sdbSizer1Cancel->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DIALOG_DESIGN_RULES_BASE::OnCancelButtonClick ), NULL, this );
	m_sdbSizer1OK->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( DIALOG_DESIGN_RULES_BASE::OnOkButtonClick ), NULL, this );
}
