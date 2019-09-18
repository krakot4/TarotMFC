#pragma once


// Boîte de dialogue CDiagNewDonne

class CDiagNewDonne : public CDialogEx
{
	DECLARE_DYNAMIC(CDiagNewDonne)

public:
	CDiagNewDonne(CWnd* pParent = NULL);   // constructeur standard
	virtual ~CDiagNewDonne();

// Données de boîte de dialogue
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_TAROTMFC_NEWDONNE };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // Prise en charge de DDX/DDV

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedCancel();
};
