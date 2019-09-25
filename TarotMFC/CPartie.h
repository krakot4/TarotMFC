#pragma once
#include "stdafx.h"
#include "CDonne.h"
#include "CJoueur.h"

class CPartie
{
private:
	CJoueur *lesJoueurs[4];//Agrégation
	CDonne **lesDonnes;//Composition
	int nDonne;
	int bouts;
	int point;
	CJoueur *leDonneur;
	contrat typ_ctr;
	int pts_preneur;
public:
	CPartie(CJoueur *joueurs[]);
	~CPartie();
	void SetPetitAuBout(camp petit);
	void CreerUneDonne();
	void SetPoignee(camp p, poignee type);
	void SetChelem(chelem t);
	void SetContrat(CJoueur *lePreneur, contrat t, CJoueur *lesD[]);
	void SetNbBouts(int nb_bouts);
	void SetDonneur();
	int DoMajScore(int nb_bouts, int points);
};
