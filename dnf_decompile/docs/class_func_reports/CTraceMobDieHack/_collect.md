# _collect

`_ZN16CTraceMobDieHack8_collectEPP5CUseri`

`CTraceMobDieHack::_collect(CUser**, int)`

| 类 | 地址 |
|---|---|
| `CTraceMobDieHack` | `0x08599f64` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08599f64  _ZN16CTraceMobDieHack8_collectEPP5CUseri
#           CTraceMobDieHack::_collect(CUser**, int)
# range [0x08599f64, 0x0859a169]
08599f64 +0x000:  push   %ebp
08599f65 +0x001:  mov    %esp,%ebp
08599f67 +0x003:  push   %ebx
08599f68 +0x004:  sub    $0x44,%esp
08599f6b +0x007:  movl   $0x0,-0x10(%ebp)
08599f72 +0x00e:  jmp    0859a155 <+0x1f1>
08599f77 +0x013:  mov    -0x10(%ebp),%eax
08599f7a +0x016:  shl    $0x2,%eax
08599f7d +0x019:  add    0xc(%ebp),%eax
08599f80 +0x01c:  mov    (%eax),%eax
08599f82 +0x01e:  test   %eax,%eax
08599f84 +0x020:  je     0859a144 <+0x1e0>
08599f8a +0x026:  mov    -0x10(%ebp),%eax
08599f8d +0x029:  shl    $0x2,%eax
08599f90 +0x02c:  add    0xc(%ebp),%eax
08599f93 +0x02f:  mov    (%eax),%eax
08599f95 +0x031:  mov    %eax,(%esp)
08599f98 +0x034:  call   0811edee <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0xe9>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0xe9
08599f9d +0x039:  test   %al,%al
08599f9f +0x03b:  jne    0859a147 <+0x1e3>
08599fa5 +0x041:  mov    -0x10(%ebp),%eax
08599fa8 +0x044:  shl    $0x2,%eax
08599fab +0x047:  add    0xc(%ebp),%eax
08599fae +0x04a:  mov    (%eax),%eax
08599fb0 +0x04c:  mov    %eax,(%esp)
08599fb3 +0x04f:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
08599fb8 +0x054:  test   %eax,%eax
08599fba +0x056:  je     08599fd9 <+0x75>
08599fbc +0x058:  mov    -0x10(%ebp),%eax
08599fbf +0x05b:  shl    $0x2,%eax
08599fc2 +0x05e:  add    0xc(%ebp),%eax
08599fc5 +0x061:  mov    (%eax),%eax
08599fc7 +0x063:  mov    %eax,(%esp)
08599fca +0x066:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
08599fcf +0x06b:  mov    0xcac(%eax),%eax
08599fd5 +0x071:  test   %eax,%eax
08599fd7 +0x073:  jne    08599fe0 <+0x7c>
08599fd9 +0x075:  mov    $0x1,%eax
08599fde +0x07a:  jmp    08599fe5 <+0x81>
08599fe0 +0x07c:  mov    $0x0,%eax
08599fe5 +0x081:  test   %al,%al
08599fe7 +0x083:  jne    0859a14a <+0x1e6>
08599fed +0x089:  mov    -0x10(%ebp),%eax
08599ff0 +0x08c:  shl    $0x2,%eax
08599ff3 +0x08f:  add    0xc(%ebp),%eax
08599ff6 +0x092:  mov    (%eax),%eax
08599ff8 +0x094:  mov    %eax,(%esp)
08599ffb +0x097:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0859a000 +0x09c:  cmp    $0xa,%eax
0859a003 +0x09f:  setle  %al
0859a006 +0x0a2:  test   %al,%al
0859a008 +0x0a4:  jne    0859a14d <+0x1e9>
0859a00e +0x0aa:  mov    -0x10(%ebp),%eax
0859a011 +0x0ad:  shl    $0x2,%eax
0859a014 +0x0b0:  add    0xc(%ebp),%eax
0859a017 +0x0b3:  mov    (%eax),%eax
0859a019 +0x0b5:  mov    %eax,(%esp)
0859a01c +0x0b8:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0859a021 +0x0bd:  mov    %eax,%ebx
0859a023 +0x0bf:  mov    -0x10(%ebp),%eax
0859a026 +0x0c2:  shl    $0x2,%eax
0859a029 +0x0c5:  add    0xc(%ebp),%eax
0859a02c +0x0c8:  mov    (%eax),%eax
0859a02e +0x0ca:  mov    %eax,(%esp)
0859a031 +0x0cd:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
0859a036 +0x0d2:  mov    0xcac(%eax),%eax
0859a03c +0x0d8:  mov    %eax,(%esp)
0859a03f +0x0db:  call   080f9810 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x1c>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x1c
0859a044 +0x0e0:  mov    %ebx,%edx
0859a046 +0x0e2:  sub    %eax,%edx
0859a048 +0x0e4:  mov    %edx,%eax
0859a04a +0x0e6:  mov    %eax,-0xc(%ebp)
0859a04d +0x0e9:  cmpl   $0x5,-0xc(%ebp)
0859a051 +0x0ed:  jg     0859a150 <+0x1ec>
0859a057 +0x0f3:  mov    -0x10(%ebp),%eax
0859a05a +0x0f6:  shl    $0x2,%eax
0859a05d +0x0f9:  add    0xc(%ebp),%eax
0859a060 +0x0fc:  mov    (%eax),%eax
0859a062 +0x0fe:  mov    %eax,(%esp)
0859a065 +0x101:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0859a06a +0x106:  mov    %eax,-0x30(%ebp)
0859a06d +0x109:  mov    -0x10(%ebp),%eax
0859a070 +0x10c:  shl    $0x2,%eax
0859a073 +0x10f:  add    0xc(%ebp),%eax
0859a076 +0x112:  mov    (%eax),%eax
0859a078 +0x114:  mov    %eax,(%esp)
0859a07b +0x117:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0859a080 +0x11c:  mov    %eax,-0x2c(%ebp)
0859a083 +0x11f:  movw   $0x193,-0x28(%ebp)
0859a089 +0x125:  mov    0x10(%ebp),%eax
0859a08c +0x128:  mov    %eax,-0x24(%ebp)
0859a08f +0x12b:  movl   $0x1,-0x20(%ebp)
0859a096 +0x132:  mov    0x8(%ebp),%eax
0859a099 +0x135:  lea    0x40(%eax),%edx
0859a09c +0x138:  lea    -0x1c(%ebp),%eax
0859a09f +0x13b:  mov    %edx,0x4(%esp)
0859a0a3 +0x13f:  mov    %eax,(%esp)
0859a0a6 +0x142:  call   085c0186 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x16e4>  ; global constructors keyed to CParty::cMember::cMember()+0x16e4
0859a0ab +0x147:  sub    $0x4,%esp
0859a0ae +0x14a:  mov    0x8(%ebp),%eax
0859a0b1 +0x14d:  lea    0x40(%eax),%edx
0859a0b4 +0x150:  lea    -0x18(%ebp),%eax
0859a0b7 +0x153:  mov    %edx,0x4(%esp)
0859a0bb +0x157:  mov    %eax,(%esp)
0859a0be +0x15a:  call   085c0162 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x16c0>  ; global constructors keyed to CParty::cMember::cMember()+0x16c0
0859a0c3 +0x15f:  sub    $0x4,%esp
0859a0c6 +0x162:  lea    -0x34(%ebp),%eax
0859a0c9 +0x165:  lea    -0x30(%ebp),%edx
0859a0cc +0x168:  mov    %edx,0xc(%esp)
0859a0d0 +0x16c:  mov    -0x1c(%ebp),%edx
0859a0d3 +0x16f:  mov    %edx,0x8(%esp)
0859a0d7 +0x173:  mov    -0x18(%ebp),%edx
0859a0da +0x176:  mov    %edx,0x4(%esp)
0859a0de +0x17a:  mov    %eax,(%esp)
0859a0e1 +0x17d:  call   085c01ac <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x170a>  ; global constructors keyed to CParty::cMember::cMember()+0x170a
0859a0e6 +0x182:  sub    $0x4,%esp
0859a0e9 +0x185:  mov    0x8(%ebp),%eax
0859a0ec +0x188:  lea    0x40(%eax),%edx
0859a0ef +0x18b:  lea    -0x14(%ebp),%eax
0859a0f2 +0x18e:  mov    %edx,0x4(%esp)
0859a0f6 +0x192:  mov    %eax,(%esp)
0859a0f9 +0x195:  call   085c0186 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x16e4>  ; global constructors keyed to CParty::cMember::cMember()+0x16e4
0859a0fe +0x19a:  sub    $0x4,%esp
0859a101 +0x19d:  lea    -0x14(%ebp),%eax
0859a104 +0x1a0:  mov    %eax,0x4(%esp)
0859a108 +0x1a4:  lea    -0x34(%ebp),%eax
0859a10b +0x1a7:  mov    %eax,(%esp)
0859a10e +0x1aa:  call   085c0200 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x175e>  ; global constructors keyed to CParty::cMember::cMember()+0x175e
0859a113 +0x1af:  test   %al,%al
0859a115 +0x1b1:  je     0859a12e <+0x1ca>
0859a117 +0x1b3:  mov    0x8(%ebp),%eax
0859a11a +0x1b6:  lea    0x40(%eax),%edx
0859a11d +0x1b9:  lea    -0x30(%ebp),%eax
0859a120 +0x1bc:  mov    %eax,0x4(%esp)
0859a124 +0x1c0:  mov    %edx,(%esp)
0859a127 +0x1c3:  call   085c022c <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x178a>  ; global constructors keyed to CParty::cMember::cMember()+0x178a
0859a12c +0x1c8:  jmp    0859a151 <+0x1ed>
0859a12e +0x1ca:  lea    -0x34(%ebp),%eax
0859a131 +0x1cd:  mov    %eax,(%esp)
0859a134 +0x1d0:  call   085c02a0 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x17fe>  ; global constructors keyed to CParty::cMember::cMember()+0x17fe
0859a139 +0x1d5:  mov    0x10(%eax),%edx
0859a13c +0x1d8:  add    $0x1,%edx
0859a13f +0x1db:  mov    %edx,0x10(%eax)
0859a142 +0x1de:  jmp    0859a151 <+0x1ed>
0859a144 +0x1e0:  nop
0859a145 +0x1e1:  jmp    0859a151 <+0x1ed>
0859a147 +0x1e3:  nop
0859a148 +0x1e4:  jmp    0859a151 <+0x1ed>
0859a14a +0x1e6:  nop
0859a14b +0x1e7:  jmp    0859a151 <+0x1ed>
0859a14d +0x1e9:  nop
0859a14e +0x1ea:  jmp    0859a151 <+0x1ed>
0859a150 +0x1ec:  nop
0859a151 +0x1ed:  addl   $0x1,-0x10(%ebp)
0859a155 +0x1f1:  cmpl   $0x3,-0x10(%ebp)
0859a159 +0x1f5:  setle  %al
0859a15c +0x1f8:  test   %al,%al
0859a15e +0x1fa:  jne    08599f77 <+0x13>
0859a164 +0x200:  mov    -0x4(%ebp),%ebx
0859a167 +0x203:  leave
0859a168 +0x204:  ret
0859a169 +0x205:  nop
```

## 反编译 C

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
