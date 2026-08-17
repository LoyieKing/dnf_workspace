# CTraceMobDieHack

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## _collect

```asm
// === 08599f64 CTraceMobDieHack::_collect  [0x08599f64-0x859a169] ===
 8599f64:	55                   	push   %ebp
 8599f65:	89 e5                	mov    %esp,%ebp
 8599f67:	53                   	push   %ebx
 8599f68:	83 ec 44             	sub    $0x44,%esp
 8599f6b:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8599f72:	e9 de 01 00 00       	jmp    859a155 <_ZN16CTraceMobDieHack8_collectEPP5CUseri+0x1f1>
 8599f77:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8599f7a:	c1 e0 02             	shl    $0x2,%eax
 8599f7d:	03 45 0c             	add    0xc(%ebp),%eax
 8599f80:	8b 00                	mov    (%eax),%eax
 8599f82:	85 c0                	test   %eax,%eax
 8599f84:	0f 84 ba 01 00 00    	je     859a144 <_ZN16CTraceMobDieHack8_collectEPP5CUseri+0x1e0>
 8599f8a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8599f8d:	c1 e0 02             	shl    $0x2,%eax
 8599f90:	03 45 0c             	add    0xc(%ebp),%eax
 8599f93:	8b 00                	mov    (%eax),%eax
 8599f95:	89 04 24             	mov    %eax,(%esp)
 8599f98:	e8 51 4e b8 ff       	call   811edee <_ZNK5CUser16IsGameMasterModeEv>
 8599f9d:	84 c0                	test   %al,%al
 8599f9f:	0f 85 a2 01 00 00    	jne    859a147 <_ZN16CTraceMobDieHack8_collectEPP5CUseri+0x1e3>
 8599fa5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8599fa8:	c1 e0 02             	shl    $0x2,%eax
 8599fab:	03 45 0c             	add    0xc(%ebp),%eax
 8599fae:	8b 00                	mov    (%eax),%eax
 8599fb0:	89 04 24             	mov    %eax,(%esp)
 8599fb3:	e8 94 b1 0b 00       	call   865514c <_ZN5CUser8GetPartyEv>
 8599fb8:	85 c0                	test   %eax,%eax
 8599fba:	74 1d                	je     8599fd9 <_ZN16CTraceMobDieHack8_collectEPP5CUseri+0x75>
 8599fbc:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8599fbf:	c1 e0 02             	shl    $0x2,%eax
 8599fc2:	03 45 0c             	add    0xc(%ebp),%eax
 8599fc5:	8b 00                	mov    (%eax),%eax
 8599fc7:	89 04 24             	mov    %eax,(%esp)
 8599fca:	e8 7d b1 0b 00       	call   865514c <_ZN5CUser8GetPartyEv>
 8599fcf:	8b 80 ac 0c 00 00    	mov    0xcac(%eax),%eax
 8599fd5:	85 c0                	test   %eax,%eax
 8599fd7:	75 07                	jne    8599fe0 <_ZN16CTraceMobDieHack8_collectEPP5CUseri+0x7c>
 8599fd9:	b8 01 00 00 00       	mov    $0x1,%eax
 8599fde:	eb 05                	jmp    8599fe5 <_ZN16CTraceMobDieHack8_collectEPP5CUseri+0x81>
 8599fe0:	b8 00 00 00 00       	mov    $0x0,%eax
 8599fe5:	84 c0                	test   %al,%al
 8599fe7:	0f 85 5d 01 00 00    	jne    859a14a <_ZN16CTraceMobDieHack8_collectEPP5CUseri+0x1e6>
 8599fed:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8599ff0:	c1 e0 02             	shl    $0x2,%eax
 8599ff3:	03 45 0c             	add    0xc(%ebp),%eax
 8599ff6:	8b 00                	mov    (%eax),%eax
 8599ff8:	89 04 24             	mov    %eax,(%esp)
 8599ffb:	e8 b8 02 b4 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 859a000:	83 f8 0a             	cmp    $0xa,%eax
 859a003:	0f 9e c0             	setle  %al
 859a006:	84 c0                	test   %al,%al
 859a008:	0f 85 3f 01 00 00    	jne    859a14d <_ZN16CTraceMobDieHack8_collectEPP5CUseri+0x1e9>
 859a00e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 859a011:	c1 e0 02             	shl    $0x2,%eax
 859a014:	03 45 0c             	add    0xc(%ebp),%eax
 859a017:	8b 00                	mov    (%eax),%eax
 859a019:	89 04 24             	mov    %eax,(%esp)
 859a01c:	e8 97 02 b4 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 859a021:	89 c3                	mov    %eax,%ebx
 859a023:	8b 45 f0             	mov    -0x10(%ebp),%eax
 859a026:	c1 e0 02             	shl    $0x2,%eax
 859a029:	03 45 0c             	add    0xc(%ebp),%eax
 859a02c:	8b 00                	mov    (%eax),%eax
 859a02e:	89 04 24             	mov    %eax,(%esp)
 859a031:	e8 16 b1 0b 00       	call   865514c <_ZN5CUser8GetPartyEv>
 859a036:	8b 80 ac 0c 00 00    	mov    0xcac(%eax),%eax
 859a03c:	89 04 24             	mov    %eax,(%esp)
 859a03f:	e8 cc f7 b5 ff       	call   80f9810 <_ZNK8CDungeon18get_standard_levelEv>
 859a044:	89 da                	mov    %ebx,%edx
 859a046:	29 c2                	sub    %eax,%edx
 859a048:	89 d0                	mov    %edx,%eax
 859a04a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 859a04d:	83 7d f4 05          	cmpl   $0x5,-0xc(%ebp)
 859a051:	0f 8f f9 00 00 00    	jg     859a150 <_ZN16CTraceMobDieHack8_collectEPP5CUseri+0x1ec>
 859a057:	8b 45 f0             	mov    -0x10(%ebp),%eax
 859a05a:	c1 e0 02             	shl    $0x2,%eax
 859a05d:	03 45 0c             	add    0xc(%ebp),%eax
 859a060:	8b 00                	mov    (%eax),%eax
 859a062:	89 04 24             	mov    %eax,(%esp)
 859a065:	e8 04 03 b4 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 859a06a:	89 45 d0             	mov    %eax,-0x30(%ebp)
 859a06d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 859a070:	c1 e0 02             	shl    $0x2,%eax
 859a073:	03 45 0c             	add    0xc(%ebp),%eax
 859a076:	8b 00                	mov    (%eax),%eax
 859a078:	89 04 24             	mov    %eax,(%esp)
 859a07b:	e8 ce 1b b3 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 859a080:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 859a083:	66 c7 45 d8 93 01    	movw   $0x193,-0x28(%ebp)
 859a089:	8b 45 10             	mov    0x10(%ebp),%eax
 859a08c:	89 45 dc             	mov    %eax,-0x24(%ebp)
 859a08f:	c7 45 e0 01 00 00 00 	movl   $0x1,-0x20(%ebp)
 859a096:	8b 45 08             	mov    0x8(%ebp),%eax
 859a099:	8d 50 40             	lea    0x40(%eax),%edx
 859a09c:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 859a09f:	89 54 24 04          	mov    %edx,0x4(%esp)
 859a0a3:	89 04 24             	mov    %eax,(%esp)
 859a0a6:	e8 db 60 02 00       	call   85c0186 <_ZNSt6vectorI11stHackLog_tSaIS0_EE3endEv>
 859a0ab:	83 ec 04             	sub    $0x4,%esp
 859a0ae:	8b 45 08             	mov    0x8(%ebp),%eax
 859a0b1:	8d 50 40             	lea    0x40(%eax),%edx
 859a0b4:	8d 45 e8             	lea    -0x18(%ebp),%eax
 859a0b7:	89 54 24 04          	mov    %edx,0x4(%esp)
 859a0bb:	89 04 24             	mov    %eax,(%esp)
 859a0be:	e8 9f 60 02 00       	call   85c0162 <_ZNSt6vectorI11stHackLog_tSaIS0_EE5beginEv>
 859a0c3:	83 ec 04             	sub    $0x4,%esp
 859a0c6:	8d 45 cc             	lea    -0x34(%ebp),%eax
 859a0c9:	8d 55 d0             	lea    -0x30(%ebp),%edx
 859a0cc:	89 54 24 0c          	mov    %edx,0xc(%esp)
 859a0d0:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 859a0d3:	89 54 24 08          	mov    %edx,0x8(%esp)
 859a0d7:	8b 55 e8             	mov    -0x18(%ebp),%edx
 859a0da:	89 54 24 04          	mov    %edx,0x4(%esp)
 859a0de:	89 04 24             	mov    %eax,(%esp)
 859a0e1:	e8 c6 60 02 00       	call   85c01ac <_ZSt4findIN9__gnu_cxx17__normal_iteratorIP11stHackLog_tSt6vectorIS2_SaIS2_EEEES2_ET_S8_S8_RKT0_>
 859a0e6:	83 ec 04             	sub    $0x4,%esp
 859a0e9:	8b 45 08             	mov    0x8(%ebp),%eax
 859a0ec:	8d 50 40             	lea    0x40(%eax),%edx
 859a0ef:	8d 45 ec             	lea    -0x14(%ebp),%eax
 859a0f2:	89 54 24 04          	mov    %edx,0x4(%esp)
 859a0f6:	89 04 24             	mov    %eax,(%esp)
 859a0f9:	e8 88 60 02 00       	call   85c0186 <_ZNSt6vectorI11stHackLog_tSaIS0_EE3endEv>
 859a0fe:	83 ec 04             	sub    $0x4,%esp
 859a101:	8d 45 ec             	lea    -0x14(%ebp),%eax
 859a104:	89 44 24 04          	mov    %eax,0x4(%esp)
 859a108:	8d 45 cc             	lea    -0x34(%ebp),%eax
 859a10b:	89 04 24             	mov    %eax,(%esp)
 859a10e:	e8 ed 60 02 00       	call   85c0200 <_ZN9__gnu_cxxeqIP11stHackLog_tSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESB_>
 859a113:	84 c0                	test   %al,%al
 859a115:	74 17                	je     859a12e <_ZN16CTraceMobDieHack8_collectEPP5CUseri+0x1ca>
 859a117:	8b 45 08             	mov    0x8(%ebp),%eax
 859a11a:	8d 50 40             	lea    0x40(%eax),%edx
 859a11d:	8d 45 d0             	lea    -0x30(%ebp),%eax
 859a120:	89 44 24 04          	mov    %eax,0x4(%esp)
 859a124:	89 14 24             	mov    %edx,(%esp)
 859a127:	e8 00 61 02 00       	call   85c022c <_ZNSt6vectorI11stHackLog_tSaIS0_EE9push_backERKS0_>
 859a12c:	eb 23                	jmp    859a151 <_ZN16CTraceMobDieHack8_collectEPP5CUseri+0x1ed>
 859a12e:	8d 45 cc             	lea    -0x34(%ebp),%eax
 859a131:	89 04 24             	mov    %eax,(%esp)
 859a134:	e8 67 61 02 00       	call   85c02a0 <_ZNK9__gnu_cxx17__normal_iteratorIP11stHackLog_tSt6vectorIS1_SaIS1_EEEptEv>
 859a139:	8b 50 10             	mov    0x10(%eax),%edx
 859a13c:	83 c2 01             	add    $0x1,%edx
 859a13f:	89 50 10             	mov    %edx,0x10(%eax)
 859a142:	eb 0d                	jmp    859a151 <_ZN16CTraceMobDieHack8_collectEPP5CUseri+0x1ed>
 859a144:	90                   	nop
 859a145:	eb 0a                	jmp    859a151 <_ZN16CTraceMobDieHack8_collectEPP5CUseri+0x1ed>
 859a147:	90                   	nop
 859a148:	eb 07                	jmp    859a151 <_ZN16CTraceMobDieHack8_collectEPP5CUseri+0x1ed>
 859a14a:	90                   	nop
 859a14b:	eb 04                	jmp    859a151 <_ZN16CTraceMobDieHack8_collectEPP5CUseri+0x1ed>
 859a14d:	90                   	nop
 859a14e:	eb 01                	jmp    859a151 <_ZN16CTraceMobDieHack8_collectEPP5CUseri+0x1ed>
 859a150:	90                   	nop
 859a151:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 859a155:	83 7d f0 03          	cmpl   $0x3,-0x10(%ebp)
 859a159:	0f 9e c0             	setle  %al
 859a15c:	84 c0                	test   %al,%al
 859a15e:	0f 85 13 fe ff ff    	jne    8599f77 <_ZN16CTraceMobDieHack8_collectEPP5CUseri+0x13>
 859a164:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 859a167:	c9                   	leave
 859a168:	c3                   	ret
 859a169:	90                   	nop

```

```c
// CTraceMobDieHack::_collect @ 0x8599f64

/* CTraceMobDieHack::_collect(CUser**, int) */

void __thiscall CTraceMobDieHack::_collect(CTraceMobDieHack *this,CUser **param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int local_54 [7];
  undefined1 local_38 [4];
  undefined4 local_34;
  undefined4 local_30;
  undefined2 local_2c;
  int local_28;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  undefined1 local_18 [4];
  int local_14;
  int local_10;
  
  piVar5 = local_54 + 2;
  local_14 = 0;
  do {
    if (3 < local_14) {
      return;
    }
    if (param_1[local_14] != (CUser *)0x0) {
      *piVar5 = (int)param_1[local_14];
      piVar5[-1] = 0x8599f9d;
      cVar1 = CUser::IsGameMasterMode((CUser *)*piVar5);
      if (cVar1 == '\0') {
        *piVar5 = (int)param_1[local_14];
        piVar5[-1] = 0x8599fb8;
        iVar3 = CUser::GetParty((CUser *)*piVar5);
        if (iVar3 == 0) {
LAB_08599fd9:
          bVar2 = true;
        }
        else {
          *piVar5 = (int)param_1[local_14];
          piVar5[-1] = 0x8599fcf;
          iVar3 = CUser::GetParty((CUser *)*piVar5);
          if (*(int *)(iVar3 + 0xcac) == 0) goto LAB_08599fd9;
          bVar2 = false;
        }
        if (!bVar2) {
          *piVar5 = (int)param_1[local_14];
          piVar5[-1] = 0x859a000;
          iVar3 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)*piVar5);
          if (10 < iVar3) {
            *piVar5 = (int)param_1[local_14];
            piVar5[-1] = 0x859a021;
            iVar3 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)*piVar5);
            *piVar5 = (int)param_1[local_14];
            piVar5[-1] = 0x859a036;
            iVar4 = CUser::GetParty((CUser *)*piVar5);
            *piVar5 = *(undefined4 *)(iVar4 + 0xcac);
            piVar5[-1] = 0x859a044;
            local_10 = CDungeon::get_standard_level((CDungeon *)*piVar5);
            local_10 = iVar3 - local_10;
            if (local_10 < 6) {
              *piVar5 = (int)param_1[local_14];
              piVar5[-1] = 0x859a06a;
              local_34 = CUser::get_acc_id((CUser *)*piVar5);
              *piVar5 = (int)param_1[local_14];
              piVar5[-1] = 0x859a080;
              local_30 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)*piVar5);
              local_2c = 0x193;
              local_28 = param_2;
              local_24 = 1;
              piVar5[1] = (int)(this + 0x40);
              *piVar5 = (int)&local_20;
              piVar5[-1] = 0x859a0ab;
              std::vector<stHackLog_t,std::allocator<stHackLog_t>>::end();
              piVar5[1] = (int)(this + 0x40);
              *piVar5 = (int)&local_1c;
              piVar5[-1] = 0x859a0c3;
              std::vector<stHackLog_t,std::allocator<stHackLog_t>>::begin();
              piVar5[3] = (int)&local_34;
              piVar5[2] = local_20;
              piVar5[1] = local_1c;
              *piVar5 = (int)local_38;
              piVar5[-1] = 0x859a0e6;
              std::
              find<__gnu_cxx::__normal_iterator<stHackLog_t*,std::vector<stHackLog_t,std::allocator<stHackLog_t>>>,stHackLog_t>
                        ();
              *piVar5 = (int)(this + 0x40);
              piVar5[-1] = (int)local_18;
              piVar5[-2] = 0x859a0fe;
              std::vector<stHackLog_t,std::allocator<stHackLog_t>>::end();
              *piVar5 = (int)local_18;
              piVar5[-1] = (int)local_38;
              piVar5[-2] = 0x859a113;
              bVar2 = __gnu_cxx::operator==
                                ((__normal_iterator *)piVar5[-1],(__normal_iterator *)*piVar5);
              if (bVar2) {
                *piVar5 = (int)&local_34;
                piVar5[-1] = (int)(this + 0x40);
                piVar5[-2] = 0x859a12c;
                std::vector<stHackLog_t,std::allocator<stHackLog_t>>::push_back
                          ((vector<stHackLog_t,std::allocator<stHackLog_t>> *)piVar5[-1],
                           (stHackLog_t *)*piVar5);
                piVar5 = piVar5 + -1;
              }
              else {
                piVar5[-1] = (int)local_38;
                piVar5[-2] = 0x859a139;
                iVar3 = __gnu_cxx::
                        __normal_iterator<stHackLog_t*,std::vector<stHackLog_t,std::allocator<stHackLog_t>>>
                        ::operator->((__normal_iterator<stHackLog_t*,std::vector<stHackLog_t,std::allocator<stHackLog_t>>>
                                      *)piVar5[-1]);
                *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
                piVar5 = piVar5 + -1;
              }
            }
          }
        }
      }
    }
    local_14 = local_14 + 1;
  } while( true );
}

```

---

## reportHackInfo

```asm
// === 08599cb2 CTraceMobDieHack::reportHackInfo  [0x08599cb2-0x8599f63] ===
 8599cb2:	55                   	push   %ebp
 8599cb3:	89 e5                	mov    %esp,%ebp
 8599cb5:	56                   	push   %esi
 8599cb6:	53                   	push   %ebx
 8599cb7:	83 ec 40             	sub    $0x40,%esp
 8599cba:	a1 7c f7 41 09       	mov    0x941f77c,%eax
 8599cbf:	89 04 24             	mov    %eax,(%esp)
 8599cc2:	e8 7d 72 d5 ff       	call   82f0f44 <_ZN16village_attacked18CVillageMonsterMgr7OnEventEv>
 8599cc7:	84 c0                	test   %al,%al
 8599cc9:	74 10                	je     8599cdb <_ZN16CTraceMobDieHack14reportHackInfoEv+0x29>
 8599ccb:	8b 45 08             	mov    0x8(%ebp),%eax
 8599cce:	89 04 24             	mov    %eax,(%esp)
 8599cd1:	e8 da b3 d0 ff       	call   82a50b0 <_ZN16CTraceMobDieHack5resetEv>
 8599cd6:	e9 81 02 00 00       	jmp    8599f5c <_ZN16CTraceMobDieHack14reportHackInfoEv+0x2aa>
 8599cdb:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 8599ce2:	e9 5b 02 00 00       	jmp    8599f42 <_ZN16CTraceMobDieHack14reportHackInfoEv+0x290>
 8599ce7:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8599cea:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8599ced:	89 d0                	mov    %edx,%eax
 8599cef:	01 c0                	add    %eax,%eax
 8599cf1:	01 d0                	add    %edx,%eax
 8599cf3:	c1 e0 02             	shl    $0x2,%eax
 8599cf6:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8599cf9:	83 c0 50             	add    $0x50,%eax
 8599cfc:	8b 00                	mov    (%eax),%eax
 8599cfe:	85 c0                	test   %eax,%eax
 8599d00:	0f 84 34 02 00 00    	je     8599f3a <_ZN16CTraceMobDieHack14reportHackInfoEv+0x288>
 8599d06:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8599d09:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8599d0c:	89 d0                	mov    %edx,%eax
 8599d0e:	01 c0                	add    %eax,%eax
 8599d10:	01 d0                	add    %edx,%eax
 8599d12:	c1 e0 02             	shl    $0x2,%eax
 8599d15:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8599d18:	83 c0 58             	add    $0x58,%eax
 8599d1b:	8b 00                	mov    (%eax),%eax
 8599d1d:	83 f8 01             	cmp    $0x1,%eax
 8599d20:	0f 8e 17 02 00 00    	jle    8599f3d <_ZN16CTraceMobDieHack14reportHackInfoEv+0x28b>
 8599d26:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8599d29:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8599d2c:	89 d0                	mov    %edx,%eax
 8599d2e:	01 c0                	add    %eax,%eax
 8599d30:	01 d0                	add    %edx,%eax
 8599d32:	c1 e0 02             	shl    $0x2,%eax
 8599d35:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8599d38:	83 c0 54             	add    $0x54,%eax
 8599d3b:	8b 08                	mov    (%eax),%ecx
 8599d3d:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8599d40:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8599d43:	89 d0                	mov    %edx,%eax
 8599d45:	01 c0                	add    %eax,%eax
 8599d47:	01 d0                	add    %edx,%eax
 8599d49:	c1 e0 02             	shl    $0x2,%eax
 8599d4c:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 8599d4f:	83 c0 58             	add    $0x58,%eax
 8599d52:	8b 00                	mov    (%eax),%eax
 8599d54:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8599d57:	89 ca                	mov    %ecx,%edx
 8599d59:	89 d0                	mov    %edx,%eax
 8599d5b:	c1 fa 1f             	sar    $0x1f,%edx
 8599d5e:	f7 7d e4             	idivl  -0x1c(%ebp)
 8599d61:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8599d64:	8b 45 08             	mov    0x8(%ebp),%eax
 8599d67:	8b 80 84 00 00 00    	mov    0x84(%eax),%eax
 8599d6d:	83 f8 05             	cmp    $0x5,%eax
 8599d70:	0f 84 de 00 00 00    	je     8599e54 <_ZN16CTraceMobDieHack14reportHackInfoEv+0x1a2>
 8599d76:	8b 45 08             	mov    0x8(%ebp),%eax
 8599d79:	0f b6 80 80 00 00 00 	movzbl 0x80(%eax),%eax
 8599d80:	83 f0 01             	xor    $0x1,%eax
 8599d83:	84 c0                	test   %al,%al
 8599d85:	0f 84 c9 00 00 00    	je     8599e54 <_ZN16CTraceMobDieHack14reportHackInfoEv+0x1a2>
 8599d8b:	c7 45 f0 0a 00 00 00 	movl   $0xa,-0x10(%ebp)
 8599d92:	8b 45 08             	mov    0x8(%ebp),%eax
 8599d95:	8b 80 84 00 00 00    	mov    0x84(%eax),%eax
 8599d9b:	83 f8 01             	cmp    $0x1,%eax
 8599d9e:	74 20                	je     8599dc0 <_ZN16CTraceMobDieHack14reportHackInfoEv+0x10e>
 8599da0:	83 f8 01             	cmp    $0x1,%eax
 8599da3:	7f 06                	jg     8599dab <_ZN16CTraceMobDieHack14reportHackInfoEv+0xf9>
 8599da5:	85 c0                	test   %eax,%eax
 8599da7:	74 0e                	je     8599db7 <_ZN16CTraceMobDieHack14reportHackInfoEv+0x105>
 8599da9:	eb 2e                	jmp    8599dd9 <_ZN16CTraceMobDieHack14reportHackInfoEv+0x127>
 8599dab:	83 f8 02             	cmp    $0x2,%eax
 8599dae:	74 19                	je     8599dc9 <_ZN16CTraceMobDieHack14reportHackInfoEv+0x117>
 8599db0:	83 f8 03             	cmp    $0x3,%eax
 8599db3:	74 1d                	je     8599dd2 <_ZN16CTraceMobDieHack14reportHackInfoEv+0x120>
 8599db5:	eb 22                	jmp    8599dd9 <_ZN16CTraceMobDieHack14reportHackInfoEv+0x127>
 8599db7:	c7 45 f0 05 00 00 00 	movl   $0x5,-0x10(%ebp)
 8599dbe:	eb 19                	jmp    8599dd9 <_ZN16CTraceMobDieHack14reportHackInfoEv+0x127>
 8599dc0:	c7 45 f0 06 00 00 00 	movl   $0x6,-0x10(%ebp)
 8599dc7:	eb 10                	jmp    8599dd9 <_ZN16CTraceMobDieHack14reportHackInfoEv+0x127>
 8599dc9:	c7 45 f0 07 00 00 00 	movl   $0x7,-0x10(%ebp)
 8599dd0:	eb 07                	jmp    8599dd9 <_ZN16CTraceMobDieHack14reportHackInfoEv+0x127>
 8599dd2:	c7 45 f0 08 00 00 00 	movl   $0x8,-0x10(%ebp)
 8599dd9:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8599ddc:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 8599ddf:	7f 73                	jg     8599e54 <_ZN16CTraceMobDieHack14reportHackInfoEv+0x1a2>
 8599de1:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8599de4:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8599de7:	89 d1                	mov    %edx,%ecx
 8599de9:	29 c1                	sub    %eax,%ecx
 8599deb:	89 c8                	mov    %ecx,%eax
 8599ded:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8599df0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8599df3:	8d 70 01             	lea    0x1(%eax),%esi
 8599df6:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8599df9:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8599dfc:	89 d0                	mov    %edx,%eax
 8599dfe:	01 c0                	add    %eax,%eax
 8599e00:	01 d0                	add    %edx,%eax
 8599e02:	c1 e0 02             	shl    $0x2,%eax
 8599e05:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8599e08:	83 c0 50             	add    $0x50,%eax
 8599e0b:	8b 18                	mov    (%eax),%ebx
 8599e0d:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8599e10:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8599e13:	89 d0                	mov    %edx,%eax
 8599e15:	01 c0                	add    %eax,%eax
 8599e17:	01 d0                	add    %edx,%eax
 8599e19:	c1 e0 02             	shl    $0x2,%eax
 8599e1c:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8599e1f:	83 c0 50             	add    $0x50,%eax
 8599e22:	8b 00                	mov    (%eax),%eax
 8599e24:	89 04 24             	mov    %eax,(%esp)
 8599e27:	e8 2e fb b5 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 8599e2c:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 8599e33:	00 
 8599e34:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 8599e3b:	00 
 8599e3c:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8599e40:	c7 44 24 08 9e 01 00 	movl   $0x19e,0x8(%esp)
 8599e47:	00 
 8599e48:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8599e4c:	89 04 24             	mov    %eax,(%esp)
 8599e4f:	e8 2a ee b5 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 8599e54:	8b 45 08             	mov    0x8(%ebp),%eax
 8599e57:	0f b6 80 80 00 00 00 	movzbl 0x80(%eax),%eax
 8599e5e:	84 c0                	test   %al,%al
 8599e60:	74 6e                	je     8599ed0 <_ZN16CTraceMobDieHack14reportHackInfoEv+0x21e>
 8599e62:	83 7d ec 09          	cmpl   $0x9,-0x14(%ebp)
 8599e66:	0f 8f d2 00 00 00    	jg     8599f3e <_ZN16CTraceMobDieHack14reportHackInfoEv+0x28c>
 8599e6c:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8599e6f:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8599e72:	89 d0                	mov    %edx,%eax
 8599e74:	01 c0                	add    %eax,%eax
 8599e76:	01 d0                	add    %edx,%eax
 8599e78:	c1 e0 02             	shl    $0x2,%eax
 8599e7b:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8599e7e:	83 c0 50             	add    $0x50,%eax
 8599e81:	8b 18                	mov    (%eax),%ebx
 8599e83:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8599e86:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8599e89:	89 d0                	mov    %edx,%eax
 8599e8b:	01 c0                	add    %eax,%eax
 8599e8d:	01 d0                	add    %edx,%eax
 8599e8f:	c1 e0 02             	shl    $0x2,%eax
 8599e92:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8599e95:	83 c0 50             	add    $0x50,%eax
 8599e98:	8b 00                	mov    (%eax),%eax
 8599e9a:	89 04 24             	mov    %eax,(%esp)
 8599e9d:	e8 b8 fa b5 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 8599ea2:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 8599ea9:	00 
 8599eaa:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 8599eb1:	00 
 8599eb2:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8599eb9:	00 
 8599eba:	c7 44 24 08 94 01 00 	movl   $0x194,0x8(%esp)
 8599ec1:	00 
 8599ec2:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8599ec6:	89 04 24             	mov    %eax,(%esp)
 8599ec9:	e8 b0 ed b5 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 8599ece:	eb 6e                	jmp    8599f3e <_ZN16CTraceMobDieHack14reportHackInfoEv+0x28c>
 8599ed0:	83 7d ec 13          	cmpl   $0x13,-0x14(%ebp)
 8599ed4:	7f 68                	jg     8599f3e <_ZN16CTraceMobDieHack14reportHackInfoEv+0x28c>
 8599ed6:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8599ed9:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8599edc:	89 d0                	mov    %edx,%eax
 8599ede:	01 c0                	add    %eax,%eax
 8599ee0:	01 d0                	add    %edx,%eax
 8599ee2:	c1 e0 02             	shl    $0x2,%eax
 8599ee5:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8599ee8:	83 c0 50             	add    $0x50,%eax
 8599eeb:	8b 18                	mov    (%eax),%ebx
 8599eed:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8599ef0:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8599ef3:	89 d0                	mov    %edx,%eax
 8599ef5:	01 c0                	add    %eax,%eax
 8599ef7:	01 d0                	add    %edx,%eax
 8599ef9:	c1 e0 02             	shl    $0x2,%eax
 8599efc:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8599eff:	83 c0 50             	add    $0x50,%eax
 8599f02:	8b 00                	mov    (%eax),%eax
 8599f04:	89 04 24             	mov    %eax,(%esp)
 8599f07:	e8 4e fa b5 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 8599f0c:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 8599f13:	00 
 8599f14:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 8599f1b:	00 
 8599f1c:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8599f23:	00 
 8599f24:	c7 44 24 08 93 01 00 	movl   $0x193,0x8(%esp)
 8599f2b:	00 
 8599f2c:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8599f30:	89 04 24             	mov    %eax,(%esp)
 8599f33:	e8 46 ed b5 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 8599f38:	eb 04                	jmp    8599f3e <_ZN16CTraceMobDieHack14reportHackInfoEv+0x28c>
 8599f3a:	90                   	nop
 8599f3b:	eb 01                	jmp    8599f3e <_ZN16CTraceMobDieHack14reportHackInfoEv+0x28c>
 8599f3d:	90                   	nop
 8599f3e:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 8599f42:	83 7d e8 03          	cmpl   $0x3,-0x18(%ebp)
 8599f46:	0f 9e c0             	setle  %al
 8599f49:	84 c0                	test   %al,%al
 8599f4b:	0f 85 96 fd ff ff    	jne    8599ce7 <_ZN16CTraceMobDieHack14reportHackInfoEv+0x35>
 8599f51:	8b 45 08             	mov    0x8(%ebp),%eax
 8599f54:	89 04 24             	mov    %eax,(%esp)
 8599f57:	e8 54 b1 d0 ff       	call   82a50b0 <_ZN16CTraceMobDieHack5resetEv>
 8599f5c:	83 c4 40             	add    $0x40,%esp
 8599f5f:	5b                   	pop    %ebx
 8599f60:	5e                   	pop    %esi
 8599f61:	5d                   	pop    %ebp
 8599f62:	c3                   	ret
 8599f63:	90                   	nop

```

```c
// CTraceMobDieHack::reportHackInfo @ 0x8599cb2

/* CTraceMobDieHack::reportHackInfo() */

void __thiscall CTraceMobDieHack::reportHackInfo(CTraceMobDieHack *this)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  CHackAnalyzer *pCVar5;
  int local_1c;
  int local_14;
  
  cVar3 = village_attacked::CVillageMonsterMgr::OnEvent(GlobalData::s_villageMonsterMgr);
  if (cVar3 == '\0') {
    for (local_1c = 0; local_1c < 4; local_1c = local_1c + 1) {
      if ((*(int *)(this + local_1c * 0xc + 0x50) != 0) &&
         (1 < *(int *)(this + local_1c * 0xc + 0x58))) {
        iVar4 = *(int *)(this + local_1c * 0xc + 0x54) / *(int *)(this + local_1c * 0xc + 0x58);
        if ((*(int *)(this + 0x84) != 5) && (this[0x80] != (CTraceMobDieHack)0x1)) {
          local_14 = 10;
          iVar1 = *(int *)(this + 0x84);
          if (iVar1 == 1) {
            local_14 = 6;
          }
          else if (iVar1 < 2) {
            if (iVar1 == 0) {
              local_14 = 5;
            }
          }
          else if (iVar1 == 2) {
            local_14 = 7;
          }
          else if (iVar1 == 3) {
            local_14 = 8;
          }
          if (iVar4 <= local_14) {
            uVar2 = *(undefined4 *)(this + local_1c * 0xc + 0x50);
            pCVar5 = (CHackAnalyzer *)
                     CUser::getHackAnalyzer(*(CUser **)(this + local_1c * 0xc + 0x50));
            WongWork::CHackAnalyzer::addServerHackCnt(pCVar5,uVar2,0x19e,(local_14 - iVar4) + 1,0,0)
            ;
          }
        }
        if (this[0x80] == (CTraceMobDieHack)0x0) {
          if (iVar4 < 0x14) {
            uVar2 = *(undefined4 *)(this + local_1c * 0xc + 0x50);
            pCVar5 = (CHackAnalyzer *)
                     CUser::getHackAnalyzer(*(CUser **)(this + local_1c * 0xc + 0x50));
            WongWork::CHackAnalyzer::addServerHackCnt(pCVar5,uVar2,0x193,1,0,0);
          }
        }
        else if (iVar4 < 10) {
          uVar2 = *(undefined4 *)(this + local_1c * 0xc + 0x50);
          pCVar5 = (CHackAnalyzer *)
                   CUser::getHackAnalyzer(*(CUser **)(this + local_1c * 0xc + 0x50));
          WongWork::CHackAnalyzer::addServerHackCnt(pCVar5,uVar2,0x194,1,0,0);
        }
      }
    }
    reset(this);
  }
  else {
    reset(this);
  }
  return;
}

```

---

## traceEnd

```asm
// === 08599a88 CTraceMobDieHack::traceEnd  [0x08599a88-0x8599cb1] ===
 8599a88:	55                   	push   %ebp
 8599a89:	89 e5                	mov    %esp,%ebp
 8599a8b:	56                   	push   %esi
 8599a8c:	53                   	push   %ebx
 8599a8d:	83 ec 30             	sub    $0x30,%esp
 8599a90:	8b 45 08             	mov    0x8(%ebp),%eax
 8599a93:	0f b6 40 4c          	movzbl 0x4c(%eax),%eax
 8599a97:	83 f0 01             	xor    $0x1,%eax
 8599a9a:	84 c0                	test   %al,%al
 8599a9c:	0f 85 02 02 00 00    	jne    8599ca4 <_ZN16CTraceMobDieHack8traceEndEP5CUserPS1_+0x21c>
 8599aa2:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8599aa9:	e8 f0 21 b3 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 8599aae:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8599ab1:	8b 45 08             	mov    0x8(%ebp),%eax
 8599ab4:	c6 40 4c 00          	movb   $0x0,0x4c(%eax)
 8599ab8:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8599abc:	74 24                	je     8599ae2 <_ZN16CTraceMobDieHack8traceEndEP5CUserPS1_+0x5a>
 8599abe:	8b 45 0c             	mov    0xc(%ebp),%eax
 8599ac1:	89 04 24             	mov    %eax,(%esp)
 8599ac4:	e8 83 b6 0b 00       	call   865514c <_ZN5CUser8GetPartyEv>
 8599ac9:	85 c0                	test   %eax,%eax
 8599acb:	74 15                	je     8599ae2 <_ZN16CTraceMobDieHack8traceEndEP5CUserPS1_+0x5a>
 8599acd:	8b 45 0c             	mov    0xc(%ebp),%eax
 8599ad0:	89 04 24             	mov    %eax,(%esp)
 8599ad3:	e8 74 b6 0b 00       	call   865514c <_ZN5CUser8GetPartyEv>
 8599ad8:	8b 80 ac 0c 00 00    	mov    0xcac(%eax),%eax
 8599ade:	85 c0                	test   %eax,%eax
 8599ae0:	75 07                	jne    8599ae9 <_ZN16CTraceMobDieHack8traceEndEP5CUserPS1_+0x61>
 8599ae2:	b8 01 00 00 00       	mov    $0x1,%eax
 8599ae7:	eb 05                	jmp    8599aee <_ZN16CTraceMobDieHack8traceEndEP5CUserPS1_+0x66>
 8599ae9:	b8 00 00 00 00       	mov    $0x0,%eax
 8599aee:	84 c0                	test   %al,%al
 8599af0:	0f 85 b1 01 00 00    	jne    8599ca7 <_ZN16CTraceMobDieHack8traceEndEP5CUserPS1_+0x21f>
 8599af6:	8b 45 0c             	mov    0xc(%ebp),%eax
 8599af9:	89 04 24             	mov    %eax,(%esp)
 8599afc:	e8 4b b6 0b 00       	call   865514c <_ZN5CUser8GetPartyEv>
 8599b01:	8b 80 ac 0c 00 00    	mov    0xcac(%eax),%eax
 8599b07:	89 04 24             	mov    %eax,(%esp)
 8599b0a:	e8 e1 41 b6 ff       	call   80fdcf0 <_ZNK8CDungeon9get_indexEv>
 8599b0f:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8599b12:	c7 45 d8 01 00 00 00 	movl   $0x1,-0x28(%ebp)
 8599b19:	c7 45 dc 02 00 00 00 	movl   $0x2,-0x24(%ebp)
 8599b20:	c7 45 e0 29 00 00 00 	movl   $0x29,-0x20(%ebp)
 8599b27:	c7 45 e4 21 00 00 00 	movl   $0x21,-0x1c(%ebp)
 8599b2e:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8599b35:	eb 14                	jmp    8599b4b <_ZN16CTraceMobDieHack8traceEndEP5CUserPS1_+0xc3>
 8599b37:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8599b3a:	8b 44 85 d8          	mov    -0x28(%ebp,%eax,4),%eax
 8599b3e:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 8599b41:	0f 84 63 01 00 00    	je     8599caa <_ZN16CTraceMobDieHack8traceEndEP5CUserPS1_+0x222>
 8599b47:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8599b4b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8599b4e:	83 f8 03             	cmp    $0x3,%eax
 8599b51:	0f 96 c0             	setbe  %al
 8599b54:	84 c0                	test   %al,%al
 8599b56:	75 df                	jne    8599b37 <_ZN16CTraceMobDieHack8traceEndEP5CUserPS1_+0xaf>
 8599b58:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8599b5f:	e9 2f 01 00 00       	jmp    8599c93 <_ZN16CTraceMobDieHack8traceEndEP5CUserPS1_+0x20b>
 8599b64:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8599b67:	c1 e0 02             	shl    $0x2,%eax
 8599b6a:	03 45 10             	add    0x10(%ebp),%eax
 8599b6d:	8b 00                	mov    (%eax),%eax
 8599b6f:	85 c0                	test   %eax,%eax
 8599b71:	74 2e                	je     8599ba1 <_ZN16CTraceMobDieHack8traceEndEP5CUserPS1_+0x119>
 8599b73:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8599b76:	c1 e0 02             	shl    $0x2,%eax
 8599b79:	03 45 10             	add    0x10(%ebp),%eax
 8599b7c:	8b 00                	mov    (%eax),%eax
 8599b7e:	89 04 24             	mov    %eax,(%esp)
 8599b81:	e8 ac 68 b8 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 8599b86:	85 c0                	test   %eax,%eax
 8599b88:	74 17                	je     8599ba1 <_ZN16CTraceMobDieHack8traceEndEP5CUserPS1_+0x119>
 8599b8a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8599b8d:	c1 e0 02             	shl    $0x2,%eax
 8599b90:	03 45 10             	add    0x10(%ebp),%eax
 8599b93:	8b 00                	mov    (%eax),%eax
 8599b95:	89 04 24             	mov    %eax,(%esp)
 8599b98:	e8 af b5 0b 00       	call   865514c <_ZN5CUser8GetPartyEv>
 8599b9d:	85 c0                	test   %eax,%eax
 8599b9f:	75 07                	jne    8599ba8 <_ZN16CTraceMobDieHack8traceEndEP5CUserPS1_+0x120>
 8599ba1:	b8 01 00 00 00       	mov    $0x1,%eax
 8599ba6:	eb 05                	jmp    8599bad <_ZN16CTraceMobDieHack8traceEndEP5CUserPS1_+0x125>
 8599ba8:	b8 00 00 00 00       	mov    $0x0,%eax
 8599bad:	84 c0                	test   %al,%al
 8599baf:	0f 85 d6 00 00 00    	jne    8599c8b <_ZN16CTraceMobDieHack8traceEndEP5CUserPS1_+0x203>
 8599bb5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8599bb8:	c1 e0 02             	shl    $0x2,%eax
 8599bbb:	03 45 10             	add    0x10(%ebp),%eax
 8599bbe:	8b 00                	mov    (%eax),%eax
 8599bc0:	89 04 24             	mov    %eax,(%esp)
 8599bc3:	e8 f0 06 b4 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 8599bc8:	89 c3                	mov    %eax,%ebx
 8599bca:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8599bcd:	c1 e0 02             	shl    $0x2,%eax
 8599bd0:	03 45 10             	add    0x10(%ebp),%eax
 8599bd3:	8b 00                	mov    (%eax),%eax
 8599bd5:	89 04 24             	mov    %eax,(%esp)
 8599bd8:	e8 6f b5 0b 00       	call   865514c <_ZN5CUser8GetPartyEv>
 8599bdd:	8b 80 ac 0c 00 00    	mov    0xcac(%eax),%eax
 8599be3:	89 04 24             	mov    %eax,(%esp)
 8599be6:	e8 25 fc b5 ff       	call   80f9810 <_ZNK8CDungeon18get_standard_levelEv>
 8599beb:	83 c0 0a             	add    $0xa,%eax
 8599bee:	39 c3                	cmp    %eax,%ebx
 8599bf0:	0f 9f c0             	setg   %al
 8599bf3:	84 c0                	test   %al,%al
 8599bf5:	0f 85 93 00 00 00    	jne    8599c8e <_ZN16CTraceMobDieHack8traceEndEP5CUserPS1_+0x206>
 8599bfb:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8599bfe:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8599c01:	c1 e0 02             	shl    $0x2,%eax
 8599c04:	03 45 10             	add    0x10(%ebp),%eax
 8599c07:	8b 08                	mov    (%eax),%ecx
 8599c09:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8599c0c:	89 d0                	mov    %edx,%eax
 8599c0e:	01 c0                	add    %eax,%eax
 8599c10:	01 d0                	add    %edx,%eax
 8599c12:	c1 e0 02             	shl    $0x2,%eax
 8599c15:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 8599c18:	83 c0 50             	add    $0x50,%eax
 8599c1b:	89 08                	mov    %ecx,(%eax)
 8599c1d:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8599c20:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 8599c23:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8599c26:	89 c8                	mov    %ecx,%eax
 8599c28:	01 c0                	add    %eax,%eax
 8599c2a:	01 c8                	add    %ecx,%eax
 8599c2c:	c1 e0 02             	shl    $0x2,%eax
 8599c2f:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 8599c32:	83 c0 54             	add    $0x54,%eax
 8599c35:	8b 08                	mov    (%eax),%ecx
 8599c37:	8b 45 08             	mov    0x8(%ebp),%eax
 8599c3a:	8b 00                	mov    (%eax),%eax
 8599c3c:	8b 5d e8             	mov    -0x18(%ebp),%ebx
 8599c3f:	89 de                	mov    %ebx,%esi
 8599c41:	29 c6                	sub    %eax,%esi
 8599c43:	89 f0                	mov    %esi,%eax
 8599c45:	01 c1                	add    %eax,%ecx
 8599c47:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8599c4a:	89 d0                	mov    %edx,%eax
 8599c4c:	01 c0                	add    %eax,%eax
 8599c4e:	01 d0                	add    %edx,%eax
 8599c50:	c1 e0 02             	shl    $0x2,%eax
 8599c53:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 8599c56:	83 c0 54             	add    $0x54,%eax
 8599c59:	89 08                	mov    %ecx,(%eax)
 8599c5b:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8599c5e:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8599c61:	89 d0                	mov    %edx,%eax
 8599c63:	01 c0                	add    %eax,%eax
 8599c65:	01 d0                	add    %edx,%eax
 8599c67:	c1 e0 02             	shl    $0x2,%eax
 8599c6a:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8599c6d:	83 c0 58             	add    $0x58,%eax
 8599c70:	8b 00                	mov    (%eax),%eax
 8599c72:	8d 48 01             	lea    0x1(%eax),%ecx
 8599c75:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8599c78:	89 d0                	mov    %edx,%eax
 8599c7a:	01 c0                	add    %eax,%eax
 8599c7c:	01 d0                	add    %edx,%eax
 8599c7e:	c1 e0 02             	shl    $0x2,%eax
 8599c81:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 8599c84:	83 c0 58             	add    $0x58,%eax
 8599c87:	89 08                	mov    %ecx,(%eax)
 8599c89:	eb 04                	jmp    8599c8f <_ZN16CTraceMobDieHack8traceEndEP5CUserPS1_+0x207>
 8599c8b:	90                   	nop
 8599c8c:	eb 01                	jmp    8599c8f <_ZN16CTraceMobDieHack8traceEndEP5CUserPS1_+0x207>
 8599c8e:	90                   	nop
 8599c8f:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8599c93:	83 7d f4 03          	cmpl   $0x3,-0xc(%ebp)
 8599c97:	0f 9e c0             	setle  %al
 8599c9a:	84 c0                	test   %al,%al
 8599c9c:	0f 85 c2 fe ff ff    	jne    8599b64 <_ZN16CTraceMobDieHack8traceEndEP5CUserPS1_+0xdc>
 8599ca2:	eb 07                	jmp    8599cab <_ZN16CTraceMobDieHack8traceEndEP5CUserPS1_+0x223>
 8599ca4:	90                   	nop
 8599ca5:	eb 04                	jmp    8599cab <_ZN16CTraceMobDieHack8traceEndEP5CUserPS1_+0x223>
 8599ca7:	90                   	nop
 8599ca8:	eb 01                	jmp    8599cab <_ZN16CTraceMobDieHack8traceEndEP5CUserPS1_+0x223>
 8599caa:	90                   	nop
 8599cab:	83 c4 30             	add    $0x30,%esp
 8599cae:	5b                   	pop    %ebx
 8599caf:	5e                   	pop    %esi
 8599cb0:	5d                   	pop    %ebp
 8599cb1:	c3                   	ret

```

```c
// CTraceMobDieHack::traceEnd @ 0x8599a88

/* CTraceMobDieHack::traceEnd(CUser*, CUser**) */

void __thiscall CTraceMobDieHack::traceEnd(CTraceMobDieHack *this,CUser *param_1,CUser **param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int local_2c [5];
  int local_18;
  uint local_14;
  int local_10;
  
  if (this[0x4c] == (CTraceMobDieHack)0x1) {
    local_2c[4] = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    this[0x4c] = (CTraceMobDieHack)0x0;
    if (((param_1 == (CUser *)0x0) || (iVar2 = CUser::GetParty(param_1), iVar2 == 0)) ||
       (iVar2 = CUser::GetParty(param_1), *(int *)(iVar2 + 0xcac) == 0)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (!bVar1) {
      iVar2 = CUser::GetParty(param_1);
      local_18 = CDungeon::get_index(*(CDungeon **)(iVar2 + 0xcac));
      local_2c[0] = 1;
      local_2c[1] = 2;
      local_2c[2] = 0x29;
      local_2c[3] = 0x21;
      for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
        if (local_2c[local_14] == local_18) {
          return;
        }
      }
      for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
        if (((param_2[local_10] == (CUser *)0x0) ||
            (iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2[local_10]),
            iVar2 == 0)) || (iVar2 = CUser::GetParty(param_2[local_10]), iVar2 == 0)) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (!bVar1) {
          iVar2 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_2[local_10]);
          iVar3 = CUser::GetParty(param_2[local_10]);
          iVar3 = CDungeon::get_standard_level(*(CDungeon **)(iVar3 + 0xcac));
          if (iVar2 <= iVar3 + 10) {
            *(CUser **)(this + local_10 * 0xc + 0x50) = param_2[local_10];
            *(int *)(this + local_10 * 0xc + 0x54) =
                 *(int *)(this + local_10 * 0xc + 0x54) + (local_2c[4] - *(int *)this);
            *(int *)(this + local_10 * 0xc + 0x58) = *(int *)(this + local_10 * 0xc + 0x58) + 1;
          }
        }
      }
    }
  }
  return;
}

```

