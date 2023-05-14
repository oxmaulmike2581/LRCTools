
//----- (006BC240) --------------------------------------------------------
unsigned int sub_6BC240@<eax>(int a1, char *a2, __m128i a3, _DWORD *a4, int a5, int *a6)
{
  int v6; // eax
  char *i; // ecx
  unsigned int v8; // esi
  char *v9; // ebx
  int v10; // edx
  int v11; // eax
  int v12; // edx
  int v13; // eax
  int v14; // esi
  int v15; // ebx
  int v16; // eax
  int v17; // edi
  char v18; // cl
  char *v19; // edi
  const char *v20; // eax
  int v21; // eax
  char *j; // ecx
  int v23; // eax
  char *v24; // ebx
  int v25; // edx
  int v26; // eax
  _DWORD *v27; // eax
  _DWORD *v28; // ebx
  int *v29; // edx
  int v30; // eax
  int v31; // ebx
  int v32; // edx
  BOOL v33; // eax
  int *v34; // eax
  int v35; // edx
  int *v36; // eax
  unsigned __int8 *v37; // ecx
  _DWORD *v38; // eax
  int *v39; // ebx
  void (__thiscall ***v41)(_DWORD, int); // ecx
  int *v42; // ebx
  void (__thiscall ***v43)(_DWORD, int); // ecx
  int v44; // ebx
  unsigned int v45; // eax
  int v46; // edx
  int v47; // edx
  int v48; // eax
  int v49; // eax
  _DWORD *v50; // ecx
  int v51; // eax
  _DWORD *v52; // ecx
  int v53; // eax
  _DWORD *v54; // ecx
  int v55; // eax
  _DWORD *v56; // ecx
  int v57; // eax
  char *m; // ecx
  unsigned int v59; // esi
  char *v60; // ebx
  int v61; // ebx
  int v62; // eax
  int *v63; // edx
  int *v64; // edi
  unsigned int *v65; // eax
  unsigned int *v66; // ebx
  unsigned int v67; // eax
  int *v68; // ebx
  unsigned int *v69; // ebx
  void (__thiscall ***v70)(_DWORD, int); // ecx
  int v71; // eax
  _DWORD *v72; // eax
  int v73; // ebx
  int k; // ebx
  int v75; // ecx
  char *v76; // ebx
  int v77; // eax
  int v78; // eax
  char *v79; // esi
  int v80; // eax
  int v81; // ebx
  int v82; // eax
  int v83; // [esp+38h] [ebp-180h] BYREF
  signed int v84; // [esp+3Ch] [ebp-17Ch]
  char *v85; // [esp+40h] [ebp-178h]
  int v86; // [esp+44h] [ebp-174h]
  int v87; // [esp+80h] [ebp-138h]
  int v88[9]; // [esp+9Ch] [ebp-11Ch] BYREF
  int v89; // [esp+C0h] [ebp-F8h] BYREF
  int v90[11]; // [esp+C4h] [ebp-F4h] BYREF
  int v91[2]; // [esp+F0h] [ebp-C8h] BYREF
  char *String2; // [esp+F8h] [ebp-C0h]
  int v93; // [esp+FCh] [ebp-BCh]
  int v94; // [esp+100h] [ebp-B8h] BYREF
  int v95; // [esp+104h] [ebp-B4h] BYREF
  int v96; // [esp+108h] [ebp-B0h]
  int v97; // [esp+10Ch] [ebp-ACh]
  int v98; // [esp+110h] [ebp-A8h]
  int *v99; // [esp+114h] [ebp-A4h]
  int *v100; // [esp+11Ch] [ebp-9Ch]
  int *v101; // [esp+124h] [ebp-94h]
  int *v102; // [esp+12Ch] [ebp-8Ch]
  int *v103; // [esp+134h] [ebp-84h]
  int v104; // [esp+138h] [ebp-80h] BYREF
  int v105; // [esp+13Ch] [ebp-7Ch]
  int v106; // [esp+140h] [ebp-78h]
  int v107; // [esp+144h] [ebp-74h]
  int v108; // [esp+148h] [ebp-70h] BYREF
  unsigned int *v109; // [esp+14Ch] [ebp-6Ch]
  int v110; // [esp+150h] [ebp-68h]
  int v111; // [esp+154h] [ebp-64h]
  int v112; // [esp+158h] [ebp-60h]
  int v113; // [esp+15Ch] [ebp-5Ch]
  int v114; // [esp+160h] [ebp-58h]
  int v115; // [esp+164h] [ebp-54h]
  int *v116; // [esp+168h] [ebp-50h]
  int *v117; // [esp+16Ch] [ebp-4Ch]
  int v118; // [esp+170h] [ebp-48h] BYREF
  int *v119; // [esp+174h] [ebp-44h]
  char *v120; // [esp+178h] [ebp-40h]
  int *v121; // [esp+17Ch] [ebp-3Ch]
  signed int v122; // [esp+18Ch] [ebp-2Ch]
  int v123; // [esp+190h] [ebp-28h]
  int v124; // [esp+194h] [ebp-24h]
  int v125; // [esp+198h] [ebp-20h]
  int *v126; // [esp+19Ch] [ebp-1Ch]
  int *v127; // [esp+1A0h] [ebp-18h]
  char *v128; // [esp+1A4h] [ebp-14h]
  int *v129; // [esp+1A8h] [ebp-10h]
  int v130; // [esp+1B4h] [ebp-4h]

  v129 = v88;
  v125 = a1;
  v128 = a2;
  v126 = a6;
  v116 = 0;
  v117 = &dword_9A17AC;
  if ( a6 )
    v123 = (int)a6;
  else
    v123 = (int)&dword_9A17A8;
  v101 = &v118;
  v120 = 0;
  v119 = 0;
  v118 = 0;
  v121 = (int *)dword_9B6A34;
  v130 = 0;
  if ( !v128 )
    goto LABEL_11;
  v6 = 0;
  for ( i = v128; *i; ++v6 )
    ++i;
  v8 = v6 + 1;
  if ( v6 + 1 > v118 )
  {
    v10 = *v121;
    v124 = (int)v121;
    v9 = (char *)(*(int (__cdecl **)(char *, int))(v10 + 32))(v120, v6 + 1);
    v11 = (*(int (__thiscall **)(int, char *))(*(_DWORD *)v124 + 8))(v124, v9);
    if ( !v9 )
      goto LABEL_11;
    v119 = (int *)v8;
    v118 = v11;
    v120 = v9;
  }
  else
  {
    v119 = (int *)(v6 + 1);
    v9 = v120;
  }
  sub_7BDE60(v9, v128, v8);
LABEL_11:
  v115 = 1;
  v130 = 1;
  dword_9A17B4 = 0;
  v127 = v119;
  if ( (int)v119 <= 0 )
    v127 = 0;
  else
    v127 = (int *)((char *)v127 - 1);
  if ( (int)v127 >= 0 )
  {
    v12 = (int)v120;
    while ( 1 )
    {
      v13 = (unsigned __int8)v120[(_DWORD)v127];
      if ( v13 == 47 || v13 == 92 )
        break;
      v127 = (int *)((char *)v127 - 1);
      if ( (int)v127 < 0 )
        goto LABEL_18;
    }
    v120[(_DWORD)v127] = 0;
    v79 = (char *)v127 + 1;
    if ( (int)v127 + 1 > v118 )
    {
      v80 = *v121;
      v124 = (int)v121;
      v81 = (*(int (__fastcall **)(int *, int, char *, char *))(v80 + 32))(v121, v12, v120, (char *)v127 + 1);
      v82 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v124 + 8))(v124, v81);
      if ( v81 )
      {
        v119 = (int *)v79;
        v118 = v82;
        v120 = (char *)v81;
      }
    }
    else
    {
      v119 = (int *)((char *)v127 + 1);
    }
  }
LABEL_18:
  dword_9A17C0 = v123;
  v112 = 0;
  v113 = 0;
  v111 = 0;
  v110 = 0;
  v130 = 3;
  if ( v127 )
  {
    v90[4] = (int)&v95;
    v97 = 0;
    v96 = 0;
    v95 = 0;
    v98 = dword_9B6A34;
    v130 = 4;
    if ( aPakBin )
    {
      v14 = v98;
      v15 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v98 + 32))(v98, v97, 9);
      v16 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v14 + 8))(v14, v15);
      if ( v15 )
      {
        v96 = 9;
        v95 = v16;
        v97 = v15;
        v17 = *(_DWORD *)&aPakBin[4];
        *(_DWORD *)v15 = *(_DWORD *)aPakBin;
        v18 = aPakBin[8];
        *(_DWORD *)(v15 + 4) = v17;
        *(_BYTE *)(v15 + 8) = v18;
      }
    }
    v130 = 3;
    v113 = 1;
    v111 = 1;
    sub_795CC4((int)&v118, v91, (int)&v95);
    v19 = String2;
    v112 = 1;
    v110 = 1;
    if ( !String2 || v91[1] <= 0 )
      v19 = byte_9BC520;
    v20 = dword_9A17DC;
    if ( !dword_9A17DC || dword_9A17D8 <= 0 )
      v20 = byte_9BC520;
    if ( _stricmp(v20, v19) )
    {
      if ( !v19 )
      {
        if ( dword_9A17D4 <= 0 )
        {
          v77 = *(_DWORD *)dword_9A17E0;
          v122 = dword_9A17E0;
          v76 = (char *)(*(int (__cdecl **)(char *, int))(v77 + 32))(dword_9A17DC, 1);
          v78 = (*(int (__thiscall **)(signed int, char *))(*(_DWORD *)v122 + 8))(v122, v76);
          if ( !v76 )
            goto LABEL_35;
          dword_9A17D8 = 1;
          dword_9A17D4 = v78;
          dword_9A17DC = v76;
        }
        else
        {
          dword_9A17D8 = 1;
          v76 = dword_9A17DC;
        }
        *v76 = 0;
        goto LABEL_35;
      }
      v21 = 0;
      for ( j = v19; *j; ++v21 )
        ++j;
      v23 = v21 + 1;
      v122 = v23;
      if ( v23 > dword_9A17D4 )
      {
        v25 = *(_DWORD *)dword_9A17E0;
        v123 = dword_9A17E0;
        v24 = (char *)(*(int (__cdecl **)(char *, int))(v25 + 32))(dword_9A17DC, v23);
        v26 = (*(int (__thiscall **)(int, char *))(*(_DWORD *)v123 + 8))(v123, v24);
        if ( !v24 )
        {
LABEL_35:
          if ( dword_9A17C4 )
            (**(void (__cdecl ***)(int))dword_9A17C4)(1);
          v27 = (_DWORD *)(*(int (__thiscall **)(int, int))(*(_DWORD *)dword_9B6A28 + 16))(dword_9B6A28, 60);
          v28 = v27;
          if ( v27 )
          {
            v29 = (int *)dword_9A17C0;
            if ( !dword_9A17C0 )
              v29 = &dword_9A17A8;
            sub_7A512C(v27, v19, (int)v29);
          }
          else
          {
            v28 = 0;
          }
          dword_9A17C4 = (int)v28;
          if ( v28[8] )
          {
            (*(void (__thiscall **)(_DWORD *, int *, int))(*v28 + 4))(v28, &v89, 4);
            if ( v89 == 269488144 )
            {
              (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)dword_9A17C4 + 4))(dword_9A17C4, v88, 4);
              (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)dword_9A17C4 + 4))(dword_9A17C4, &dword_9A17CC, 4);
              dword_9A17C8 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_9B6A30 + 16))(dword_9B6A30, v88[0]);
              (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_9A17C4 + 4))(dword_9A17C4, dword_9A17C8, v88[0]);
              for ( k = 0; k < dword_9A17CC; *(_DWORD *)(dword_9A17C8 + v75) += dword_9A17C8 )
                v75 = 12 * k++;
              dword_9A17D0 = 0;
            }
            else
            {
              if ( dword_9A17C4 )
                (**(void (__thiscall ***)(int, int))dword_9A17C4)(dword_9A17C4, 1);
              dword_9A17C4 = 0;
            }
          }
          else
          {
            if ( v28 )
              (*(void (__thiscall **)(_DWORD *, int))*v28)(v28, 1);
            dword_9A17C4 = 0;
          }
          goto LABEL_49;
        }
        dword_9A17D8 = v122;
        dword_9A17D4 = v26;
        dword_9A17DC = v24;
      }
      else
      {
        v24 = dword_9A17DC;
        dword_9A17D8 = v23;
      }
      sub_7BDE60(v24, v19, v122);
      goto LABEL_35;
    }
  }
LABEL_49:
  if ( v112 )
  {
    v100 = v91;
    v130 = 2;
    if ( String2 )
      (*(void (__thiscall **)(int, char *))(*(_DWORD *)v93 + 36))(v93, String2);
  }
  v130 = 1;
  if ( v113 )
  {
    v99 = &v95;
    v130 = 1;
    if ( v97 )
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v98 + 36))(v98, v97);
  }
  v30 = dword_9A17C8;
  if ( dword_9A17C8 )
  {
    v31 = 0;
    v32 = dword_9A17CC;
    if ( dword_9A17CC > 0 )
    {
      while ( _stricmp(*(const char **)(v30 + 12 * v31), v128) )
      {
        ++v31;
        v32 = dword_9A17CC;
        if ( v31 >= dword_9A17CC )
          goto LABEL_60;
        v30 = dword_9A17C8;
      }
      v32 = dword_9A17CC;
    }
LABEL_60:
    if ( v31 < v32 )
    {
      dword_9A17D0 = dword_9A17C8 + 12 * v31;
      (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_9A17C4 + 48))(dword_9A17C4, dword_9A17C0);
      (*(void (__thiscall **)(int *, _DWORD))(dword_9A17AC + 16))(&dword_9A17AC, 0);
      v115 = 0;
      v102 = &v118;
      v130 = 1;
      if ( v120 )
        (*(void (__thiscall **)(int *, char *, int))(*v121 + 36))(v121, v120, v87);
    }
    else
    {
      v115 = 0;
      v103 = &v118;
      v130 = 1;
      if ( v120 )
        (*(void (__thiscall **)(int *, char *))(*v121 + 36))(v121, v120);
    }
  }
  else
  {
    if ( dword_9A17C4 )
    {
      if ( dword_9A17C8 )
      {
        dword_9A17D0 = 0;
      }
      else
      {
        if ( dword_9A17C4 )
          (**(void (__cdecl ***)(int))dword_9A17C4)(1);
        dword_9A17C4 = 0;
      }
    }
    v72 = (_DWORD *)(*(int (__thiscall **)(int, int))(*(_DWORD *)dword_9B6A28 + 16))(dword_9B6A28, 60);
    v73 = (int)v72;
    if ( v72 )
      sub_7A512C(v72, v128, dword_9A17C0);
    else
      v73 = 0;
    dword_9A17C4 = v73;
    if ( *(_DWORD *)(v73 + 32) )
    {
      v115 = 0;
      v90[2] = (int)&v118;
      v130 = 1;
      if ( v120 )
        (*(void (__thiscall **)(int *, char *))(*v121 + 36))(v121, v120);
    }
    else
    {
      if ( v73 )
        (**(void (__thiscall ***)(int, int))v73)(v73, 1);
      dword_9A17C4 = 0;
      v115 = 0;
      v90[10] = (int)&v118;
      v130 = 1;
      if ( v120 )
        (*(void (__thiscall **)(int *, char *))(*v121 + 36))(v121, v120);
    }
  }
  if ( v117[7] )
  {
    v33 = v117[9] != 0;
  }
  else
  {
    v71 = v117[6];
    if ( v71 )
      v33 = *(_DWORD *)(v71 + 32) != 0;
    else
      v33 = 0;
  }
  if ( v33 )
  {
    v34 = v116;
    v127 = v116;
    goto LABEL_73;
  }
  v35 = *(_DWORD *)dword_9B6A28;
  v126 = &dword_9A17A8;
  v36 = (int *)(*(int (__thiscall **)(int, int))(v35 + 16))(dword_9B6A28, 24);
  v127 = v36;
  if ( v36 )
  {
    sub_7A2758(v36, 0);
    v37 = (unsigned __int8 *)v128;
    *v127 = (int)&off_9C1068;
    v38 = sub_79CB54(v37, 17);
    v127[5] = (int)v38;
  }
  else
  {
    v127 = 0;
  }
  v34 = v127;
  v116 = v127;
  if ( v127[5] )
  {
LABEL_73:
    if ( !v34 )
      v127 = v117;
    v106 = 0;
    v105 = 0;
    v104 = 0;
    v107 = dword_9B6A28;
    v114 = 1;
    v109 = 0;
    v130 = 12;
    (*(void (__thiscall **)(int *, int *, int))(*v127 + 4))(v127, &v108, 4);
    if ( v108 != 1145848388 )
    {
      if ( v116 )
        (*(void (__cdecl **)(int))*v116)(1);
      v39 = v117;
      if ( v117 )
      {
        if ( v117[7] )
        {
          v117[9] = 0;
        }
        else
        {
          v41 = (void (__thiscall ***)(_DWORD, int))v117[6];
          if ( v41 )
            (**v41)(v41, 1);
          v39[6] = 0;
        }
      }
      v130 = 11;
      v114 = 0;
      if ( v106 )
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v107 + 36))(v107, v106);
      return 0;
    }
    (*(void (__thiscall **)(int *, int *, int))(*v127 + 4))(v127, &v94, 4);
    if ( v94 != 858861873 )
    {
      if ( v116 )
        (*(void (__cdecl **)(int))*v116)(1);
      v42 = v117;
      if ( v117 )
      {
        if ( v117[7] )
        {
          v117[9] = 0;
        }
        else
        {
          v43 = (void (__thiscall ***)(_DWORD, int))v117[6];
          if ( v43 )
            (**v43)(v43, 1);
          v42[6] = 0;
        }
      }
      v130 = 11;
      v114 = 0;
      if ( v106 )
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v107 + 36))(v107, v106);
      return 0;
    }
    (*(void (__thiscall **)(int *, int *, int))(*v127 + 4))(v127, v90, 4);
    v123 = v90[0];
    if ( v90[0] > 0 && v123 + v105 > v104 )
    {
      v122 = v107;
      v44 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)v107 + 32))(v107, v106, 4 * v123 + 4 * v105);
      v45 = (*(int (__thiscall **)(signed int, int))(*(_DWORD *)v122 + 8))(v122, v44);
      if ( v44 )
      {
        v104 = v45 >> 2;
        v106 = v44;
      }
    }
    v124 = 0;
    if ( v123 > 0 )
    {
      if ( v123 >= 6 )
      {
        v122 = v123 - 6;
        do
        {
          v46 = v124;
          *(_DWORD *)(v106 + 4 * v124) = -1;
          *(_DWORD *)(v106 + 4 * v46 + 4) = -1;
          *(_DWORD *)(v106 + 4 * v46 + 8) = -1;
          *(_DWORD *)(v106 + 4 * v46 + 12) = -1;
          *(_DWORD *)(v106 + 4 * v46 + 16) = -1;
          v124 = v46 + 5;
        }
        while ( v46 + 5 <= v122 );
      }
      do
      {
        v47 = v124;
        *(_DWORD *)(v106 + 4 * v124) = -1;
        v124 = v47 + 1;
      }
      while ( v47 + 1 < v123 );
    }
    v48 = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_9B6A2C + 16))(dword_9B6A2C, 68);
    v123 = v48;
    if ( v48 )
    {
      v88[8] = v48;
      v49 = sub_7A7E44();
      v50 = (_DWORD *)v123;
      *(_DWORD *)(v123 + 8) = 0;
      v50[1] = 0;
      *v50 = 0;
      v50[3] = v49;
      v130 = 13;
      v51 = sub_7A7E44();
      v52 = (_DWORD *)v123;
      *(_DWORD *)(v123 + 24) = 0;
      v52[5] = 0;
      v52[4] = 0;
      v52[7] = v51;
      v130 = 14;
      v53 = sub_7A7E44();
      v54 = (_DWORD *)v123;
      *(_DWORD *)(v123 + 40) = 0;
      v54[9] = 0;
      v54[8] = 0;
      v54[11] = v53;
      v130 = 15;
      v55 = sub_7A7E44();
      v56 = (_DWORD *)v123;
      *(_DWORD *)(v123 + 56) = 0;
      v56[13] = 0;
      v56[12] = 0;
      v56[15] = v55;
      v56[16] = 0;
    }
    else
    {
      v123 = 0;
    }
    v109 = (unsigned int *)v123;
    v123 = (int)&v83;
    v88[6] = (int)&v83;
    v85 = 0;
    v84 = 0;
    v83 = 0;
    v86 = dword_9B6A34;
    v130 = 16;
    if ( !v128 )
      goto LABEL_119;
    v57 = 0;
    for ( m = v128; *m; ++v57 )
      ++m;
    v59 = v57 + 1;
    if ( v57 + 1 > *(_DWORD *)v123 )
    {
      v61 = **(_DWORD **)(v123 + 12);
      v122 = *(_DWORD *)(v123 + 12);
      v60 = (char *)(*(int (__cdecl **)(_DWORD, int))(v61 + 32))(*(_DWORD *)(v123 + 8), v57 + 1);
      v62 = (*(int (__thiscall **)(signed int, char *))(*(_DWORD *)v122 + 8))(v122, v60);
      if ( !v60 )
      {
LABEL_119:
        v130 = 12;
        v64 = v126;
        if ( (unsigned __int8)sub_6BD3E0(v127, v109, a3, v83, v84, v85, v86, (unsigned int *)&v104, v125, a5, (int)v126, a4) )
        {
          v65 = v109;
        }
        else
        {
          if ( v109 )
            sub_6BEDB4((int)v109, (int)v64, a5, 1);
          v65 = 0;
          v109 = 0;
        }
        v66 = v65 + 4;
        v67 = v65[6];
        if ( v67 )
          (*(void (__thiscall **)(unsigned int, unsigned int))(*(_DWORD *)v66[3] + 36))(v66[3], v67);
        v66[2] = 0;
        v66[1] = 0;
        *v66 = 0;
        v130 = 11;
        if ( v116 )
          (*(void (__thiscall **)(int *, int))*v116)(v116, 1);
        if ( v117 )
        {
          v68 = v117;
          if ( v117[7] )
          {
            v117[9] = 0;
          }
          else
          {
            if ( v117[6] )
            {
              v70 = (void (__thiscall ***)(_DWORD, int))v117[6];
              if ( v70 )
                (**v70)(v70, 1);
            }
            v68[6] = 0;
          }
        }
        v69 = v109;
        v130 = -1;
        if ( v106 )
          (*(void (__thiscall **)(int, int))(*(_DWORD *)v107 + 36))(v107, v106);
        return v69;
      }
      v63 = (int *)v123;
      *(_DWORD *)(v123 + 4) = v59;
      *v63 = v62;
      v63[2] = (int)v60;
    }
    else
    {
      v60 = *(char **)(v123 + 8);
      *(_DWORD *)(v123 + 4) = v59;
    }
    sub_7BDE60(v60, v128, v59);
    goto LABEL_119;
  }
  if ( v127 )
    (*(void (__thiscall **)(int *, int))*v127)(v127, 1);
  return 0;
}
// 6BC3F0: conditional instruction was optimized away because %var_B4.4==0
// 6BC814: conditional instruction was optimized away because %var_50.4!=0
// 6BC870: conditional instruction was optimized away because ecx.4!=0
// 6BC8A6: conditional instruction was optimized away because %var_50.4!=0
// 6BC902: conditional instruction was optimized away because ecx.4!=0
// 6BCB91: conditional instruction was optimized away because %var_50.4!=0
// 9A17A8: using guessed type int dword_9A17A8;
// 9A17AC: using guessed type int dword_9A17AC;
// 9A17B4: using guessed type int dword_9A17B4;
// 9A17C0: using guessed type int dword_9A17C0;
// 9A17C4: using guessed type int dword_9A17C4;
// 9A17C8: using guessed type int dword_9A17C8;
// 9A17CC: using guessed type int dword_9A17CC;
// 9A17D0: using guessed type int dword_9A17D0;
// 9A17D4: using guessed type int dword_9A17D4;
// 9A17D8: using guessed type int dword_9A17D8;
// 9A17E0: using guessed type int dword_9A17E0;
// 9B6A28: using guessed type int dword_9B6A28;
// 9B6A2C: using guessed type int dword_9B6A2C;
// 9B6A30: using guessed type int dword_9B6A30;
// 9B6A34: using guessed type int dword_9B6A34;
// 9BC520: using guessed type _BYTE byte_9BC520[4];
// 9C1068: using guessed type int (__stdcall *off_9C1068)(char);


//----- (0079CB54) --------------------------------------------------------
_DWORD *__fastcall sub_79CB54(unsigned __int8 *a1, int a2)
{
  unsigned __int8 *v2; // ebp
  int v3; // eax
  _DWORD *v4; // ebx
  int v5; // edx
  int v6; // edi
  int v7; // ecx
  int v8; // eax

  v2 = a1;
  v3 = *a1;
  if ( v3 == 92 || v3 == 47 )
    v2 = a1 + 1;
  v4 = (_DWORD *)(*(int (__thiscall **)(int, int))(*(_DWORD *)dword_9B6A38 + 16))(dword_9B6A38, 8);
  if ( !v4 )
    return 0;
  v5 = dword_9B6028;
  if ( dword_9B6028 <= 0 )
  {
LABEL_14:
    sub_7A792C(v4);
    return 0;
  }
  v6 = 0;
  while ( 1 )
  {
    v7 = *(_DWORD *)(dword_9B602C + 4 * v6);
    if ( v7 )
      break;
LABEL_13:
    if ( ++v6 >= v5 )
      goto LABEL_14;
  }
  v8 = (*(int (__thiscall **)(int, unsigned __int8 *, int))(*(_DWORD *)v7 + 8))(v7, v2, a2);
  v4[1] = v8;
  if ( v8 == -1 )
  {
    v5 = dword_9B6028;
    goto LABEL_13;
  }
  *v4 = *(_DWORD *)(dword_9B602C + 4 * v6);
  if ( dword_9B6038 )
    dword_9B6038();
  return v4;
}
// 9B6028: using guessed type int dword_9B6028;
// 9B602C: using guessed type int dword_9B602C;
// 9B6038: using guessed type int (*dword_9B6038)(void);
// 9B6A38: using guessed type int dword_9B6A38;

