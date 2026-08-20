# IsAbleToRevival

`_ZN13CPowerManager15IsAbleToRevivalEP5CUserjRi`

`CPowerManager::IsAbleToRevival(CUser*, unsigned int, int&)`

| 类 | 地址 |
|---|---|
| `CPowerManager` | `0x0847f952` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0847f952  _ZN13CPowerManager15IsAbleToRevivalEP5CUserjRi
#           CPowerManager::IsAbleToRevival(CUser*, unsigned int, int&)
# range [0x0847f952, 0x0847fa2d]
0847f952 +0x00:  push   %ebp
0847f953 +0x01:  mov    %esp,%ebp
0847f955 +0x03:  push   %ebx
0847f956 +0x04:  sub    $0x44,%esp
0847f959 +0x07:  mov    $0x3f800000,%eax
0847f95e +0x0c:  mov    %eax,-0x14(%ebp)
0847f961 +0x0f:  mov    0xc(%ebp),%eax
0847f964 +0x12:  mov    %eax,(%esp)
0847f967 +0x15:  call   084810b4 <_GLOBAL__I__ZN13CPowerManagerC2Ev+0x132>  ; global constructors keyed to CPowerManager::CPowerManager()+0x132
0847f96c +0x1a:  mov    %eax,%ebx
0847f96e +0x1c:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0847f973 +0x21:  mov    0xa640(%eax),%eax
0847f979 +0x27:  cmp    %eax,%ebx
0847f97b +0x29:  setb   %al
0847f97e +0x2c:  test   %al,%al
0847f980 +0x2e:  je     0847f9bd <+0x6b>
0847f982 +0x30:  mov    0xc(%ebp),%eax
0847f985 +0x33:  mov    %eax,(%esp)
0847f988 +0x36:  call   084810b4 <_GLOBAL__I__ZN13CPowerManagerC2Ev+0x132>  ; global constructors keyed to CPowerManager::CPowerManager()+0x132
0847f98d +0x3b:  mov    $0x0,%edx
0847f992 +0x40:  mov    %eax,-0x28(%ebp)
0847f995 +0x43:  mov    %edx,-0x24(%ebp)
0847f998 +0x46:  fildll -0x28(%ebp)
0847f99b +0x49:  fstps  -0x2c(%ebp)
0847f99e +0x4c:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0847f9a3 +0x51:  mov    0xa640(%eax),%eax
0847f9a9 +0x57:  mov    %eax,-0x1c(%ebp)
0847f9ac +0x5a:  fildl  -0x1c(%ebp)
0847f9af +0x5d:  fdivrs -0x2c(%ebp)
0847f9b2 +0x60:  flds   ""
0847f9b8 +0x66:  fsubp  %st,%st(1)
0847f9ba +0x68:  fstps  -0x14(%ebp)
0847f9bd +0x6b:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0847f9c2 +0x70:  mov    0xa63c(%eax),%eax
0847f9c8 +0x76:  mov    %eax,-0x1c(%ebp)
0847f9cb +0x79:  fildl  -0x1c(%ebp)
0847f9ce +0x7c:  fmuls  -0x14(%ebp)
0847f9d1 +0x7f:  fnstcw -0x1e(%ebp)
0847f9d4 +0x82:  movzwl -0x1e(%ebp),%eax
0847f9d8 +0x86:  mov    $0xc,%ah
0847f9da +0x88:  mov    %ax,-0x20(%ebp)
0847f9de +0x8c:  fldcw  -0x20(%ebp)
0847f9e1 +0x8f:  fistpl -0x10(%ebp)
0847f9e4 +0x92:  fldcw  -0x1e(%ebp)
0847f9e7 +0x95:  mov    0xc(%ebp),%eax
0847f9ea +0x98:  mov    %eax,(%esp)
0847f9ed +0x9b:  call   082f0b88 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x90c>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x90c
0847f9f2 +0xa0:  mov    0x10(%ebp),%edx
0847f9f5 +0xa3:  mov    %edx,%ecx
0847f9f7 +0xa5:  sub    %eax,%ecx
0847f9f9 +0xa7:  mov    %ecx,%eax
0847f9fb +0xa9:  mov    %eax,-0xc(%ebp)
0847f9fe +0xac:  mov    -0x10(%ebp),%eax
0847fa01 +0xaf:  cmp    -0xc(%ebp),%eax
0847fa04 +0xb2:  jle    0847fa1a <+0xc8>
0847fa06 +0xb4:  mov    -0xc(%ebp),%eax
0847fa09 +0xb7:  mov    -0x10(%ebp),%edx
0847fa0c +0xba:  sub    %eax,%edx
0847fa0e +0xbc:  mov    0x14(%ebp),%eax
0847fa11 +0xbf:  mov    %edx,(%eax)
0847fa13 +0xc1:  mov    $0x0,%eax
0847fa18 +0xc6:  jmp    0847fa28 <+0xd6>
0847fa1a +0xc8:  mov    0x14(%ebp),%eax
0847fa1d +0xcb:  movl   $0x0,(%eax)
0847fa23 +0xd1:  mov    $0x1,%eax
0847fa28 +0xd6:  add    $0x44,%esp
0847fa2b +0xd9:  pop    %ebx
0847fa2c +0xda:  pop    %ebp
0847fa2d +0xdb:  ret
```

## 反编译 C

```c
// CPowerManager::IsAbleToRevival @ 0x847f952

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CPowerManager::IsAbleToRevival(CUser*, unsigned int, int&) */

bool __thiscall
CPowerManager::IsAbleToRevival(CPowerManager *this,CUser *param_1,uint param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 local_18;
  
  local_18 = 1.0;
  uVar1 = CUserCharacInfo::GetCurCharacChaosStateTime((CUserCharacInfo *)param_1);
  iVar2 = G_CDataManager();
  if (uVar1 < *(uint *)(iVar2 + 0xa640)) {
    uVar1 = CUserCharacInfo::GetCurCharacChaosStateTime((CUserCharacInfo *)param_1);
    iVar2 = G_CDataManager();
    local_18 = _DAT_08c72fd0 - (float)uVar1 / (float)*(int *)(iVar2 + 0xa640);
  }
  iVar2 = G_CDataManager();
  iVar2 = (int)ROUND((float)*(int *)(iVar2 + 0xa63c) * local_18);
  iVar3 = CUserCharacInfo::GetCurCharacChaosDieTime((CUserCharacInfo *)param_1);
  iVar3 = param_2 - iVar3;
  if (iVar2 <= iVar3) {
    *param_3 = 0;
  }
  else {
    *param_3 = iVar2 - iVar3;
  }
  return iVar2 <= iVar3;
}
```
