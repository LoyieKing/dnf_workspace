# GetExtraGold

`_ZNK13user_creature12CCreatureMgr12GetExtraGoldEi`

`user_creature::CCreatureMgr::GetExtraGold(int) const`

| 类 | 地址 |
|---|---|
| `user_creature::CCreatureMgr` | `0x0833c31a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0833c31a  _ZNK13user_creature12CCreatureMgr12GetExtraGoldEi
#           user_creature::CCreatureMgr::GetExtraGold(int) const
# range [0x0833c31a, 0x0833c41d]
0833c31a +0x000:  push   %ebp
0833c31b +0x001:  mov    %esp,%ebp
0833c31d +0x003:  sub    $0x28,%esp
0833c320 +0x006:  mov    0x8(%ebp),%eax
0833c323 +0x009:  mov    0x18(%eax),%eax
0833c326 +0x00c:  test   %eax,%eax
0833c328 +0x00e:  je     0833c416 <+0xfc>
0833c32e +0x014:  mov    0x8(%ebp),%eax
0833c331 +0x017:  mov    0x18(%eax),%eax
0833c334 +0x01a:  mov    %eax,(%esp)
0833c337 +0x01d:  call   08338478 <_ZN13user_creature9CCreature13IsDieCreatureEv>  ; user_creature::CCreature::IsDieCreature()
0833c33c +0x022:  test   %al,%al
0833c33e +0x024:  je     0833c34a <+0x30>
0833c340 +0x026:  mov    $0x0,%eax
0833c345 +0x02b:  jmp    0833c41b <+0x101>
0833c34a +0x030:  mov    0x8(%ebp),%eax
0833c34d +0x033:  mov    0x18(%eax),%eax
0833c350 +0x036:  mov    %eax,(%esp)
0833c353 +0x039:  call   0833f0da <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x11a7>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x11a7
0833c358 +0x03e:  sub    $0x16,%eax
0833c35b +0x041:  cmp    $0x2a,%eax
0833c35e +0x044:  ja     0833c416 <+0xfc>
0833c364 +0x04a:  mov    &data#db2832d7(.rodata)(,%eax,4),%eax
0833c36b +0x051:  jmp    *%eax
0833c36d +0x053:  mov    0xc(%ebp),%edx
0833c370 +0x056:  mov    %edx,%eax
0833c372 +0x058:  shl    $0x2,%eax
0833c375 +0x05b:  lea    (%eax,%edx,1),%ecx
0833c378 +0x05e:  mov    $0x51eb851f,%edx
0833c37d +0x063:  mov    %ecx,%eax
0833c37f +0x065:  imul   %edx
0833c381 +0x067:  sar    $0x5,%edx
0833c384 +0x06a:  mov    %ecx,%eax
0833c386 +0x06c:  sar    $0x1f,%eax
0833c389 +0x06f:  mov    %edx,%ecx
0833c38b +0x071:  sub    %eax,%ecx
0833c38d +0x073:  mov    %ecx,%eax
0833c38f +0x075:  mov    %eax,-0x18(%ebp)
0833c392 +0x078:  mov    -0x18(%ebp),%eax
0833c395 +0x07b:  jmp    0833c41b <+0x101>
0833c39a +0x080:  mov    0xc(%ebp),%edx
0833c39d +0x083:  mov    %edx,%eax
0833c39f +0x085:  add    %eax,%eax
0833c3a1 +0x087:  lea    (%eax,%edx,1),%ecx
0833c3a4 +0x08a:  mov    $0x51eb851f,%edx
0833c3a9 +0x08f:  mov    %ecx,%eax
0833c3ab +0x091:  imul   %edx
0833c3ad +0x093:  sar    $0x5,%edx
0833c3b0 +0x096:  mov    %ecx,%eax
0833c3b2 +0x098:  sar    $0x1f,%eax
0833c3b5 +0x09b:  mov    %edx,%ecx
0833c3b7 +0x09d:  sub    %eax,%ecx
0833c3b9 +0x09f:  mov    %ecx,%eax
0833c3bb +0x0a1:  mov    %eax,-0x14(%ebp)
0833c3be +0x0a4:  mov    -0x14(%ebp),%eax
0833c3c1 +0x0a7:  jmp    0833c41b <+0x101>
0833c3c3 +0x0a9:  mov    0xc(%ebp),%edx
0833c3c6 +0x0ac:  mov    %edx,%eax
0833c3c8 +0x0ae:  shl    $0x2,%eax
0833c3cb +0x0b1:  lea    (%eax,%edx,1),%ecx
0833c3ce +0x0b4:  mov    $0x51eb851f,%edx
0833c3d3 +0x0b9:  mov    %ecx,%eax
0833c3d5 +0x0bb:  imul   %edx
0833c3d7 +0x0bd:  sar    $0x5,%edx
0833c3da +0x0c0:  mov    %ecx,%eax
0833c3dc +0x0c2:  sar    $0x1f,%eax
0833c3df +0x0c5:  mov    %edx,%ecx
0833c3e1 +0x0c7:  sub    %eax,%ecx
0833c3e3 +0x0c9:  mov    %ecx,%eax
0833c3e5 +0x0cb:  mov    %eax,-0x10(%ebp)
0833c3e8 +0x0ce:  mov    -0x10(%ebp),%eax
0833c3eb +0x0d1:  jmp    0833c41b <+0x101>
0833c3ed +0x0d3:  mov    0xc(%ebp),%edx
0833c3f0 +0x0d6:  mov    %edx,%eax
0833c3f2 +0x0d8:  add    %eax,%eax
0833c3f4 +0x0da:  lea    (%eax,%edx,1),%ecx
0833c3f7 +0x0dd:  mov    $0x51eb851f,%edx
0833c3fc +0x0e2:  mov    %ecx,%eax
0833c3fe +0x0e4:  imul   %edx
0833c400 +0x0e6:  sar    $0x5,%edx
0833c403 +0x0e9:  mov    %ecx,%eax
0833c405 +0x0eb:  sar    $0x1f,%eax
0833c408 +0x0ee:  mov    %edx,%ecx
0833c40a +0x0f0:  sub    %eax,%ecx
0833c40c +0x0f2:  mov    %ecx,%eax
0833c40e +0x0f4:  mov    %eax,-0xc(%ebp)
0833c411 +0x0f7:  mov    -0xc(%ebp),%eax
0833c414 +0x0fa:  jmp    0833c41b <+0x101>
0833c416 +0x0fc:  mov    $0x0,%eax
0833c41b +0x101:  leave
0833c41c +0x102:  ret
0833c41d +0x103:  nop
```

## 反编译 C

```c
// user_creature::CCreatureMgr::GetExtraGold @ 0x833c31a

/* user_creature::CCreatureMgr::GetExtraGold(int) const */

int __thiscall user_creature::CCreatureMgr::GetExtraGold(CCreatureMgr *this,int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*(int *)(this + 0x18) == 0) {
switchD_0833c36b_caseD_19:
    iVar3 = 0;
  }
  else {
    cVar1 = CCreature::IsDieCreature(*(CCreature **)(this + 0x18));
    if (cVar1 != '\0') {
      return 0;
    }
    uVar2 = CCreature::GetCreatureId(*(CCreature **)(this + 0x18));
    switch(uVar2) {
    case 0x16:
    case 0x17:
    case 0x18:
      iVar3 = (param_1 * 5) / 100;
      break;
    default:
      goto switchD_0833c36b_caseD_19;
    case 0x2a:
    case 0x3f:
      iVar3 = (param_1 * 3) / 100;
      break;
    case 0x36:
    case 0x37:
    case 0x38:
      iVar3 = (param_1 * 3) / 100;
      break;
    case 0x40:
      iVar3 = (param_1 * 5) / 100;
    }
  }
  return iVar3;
}
```
