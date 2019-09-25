#pragma once
#include "CDonne.h"
#include "CPartie.h"


// Boîte de dialogue CAnnonce

class CAnnonce : public CDialogEx
{
	DECLARE_DYNAMIC(CAnnonce)

public:
	CAnnonce(CPartie * laP,CWnd* pParent = NULL);   // constructeur standard
	virtual ~CAnnonce();

// Données de boîte de dialogue
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_TAROTMFC_ANNONCE };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // Prise en charge de DDX/DDV
	CPartie* laPartie;
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void PoigneeChange();
	afx_msg void CampChange();
	afx_msg void OnBnClickedOk();
	int int_pgn;
	int int_cmp;
	poignee pgn;
	camp cmp_bout;
	camp cmp_pgn;
	afx_msg void CampPoigneeChange();
	int int_camp_pgn;
};
