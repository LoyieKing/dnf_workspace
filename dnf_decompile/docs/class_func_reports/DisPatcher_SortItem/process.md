# process

`_ZN19DisPatcher_SortItem7processEP5CUserR8MSG_BASER9ParamBase`

`DisPatcher_SortItem::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_SortItem` | `0x081c9c54` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c9c54  _ZN19DisPatcher_SortItem7processEP5CUserR8MSG_BASER9ParamBase
#           DisPatcher_SortItem::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081c9c54, 0x081c9d63]
081c9c54 +0x000:  push   %ebp
081c9c55 +0x001:  mov    %esp,%ebp
081c9c57 +0x003:  sub    $0x28,%esp
081c9c5a +0x006:  mov    0x10(%ebp),%eax
081c9c5d +0x009:  mov    %eax,0x8(%esp)
081c9c61 +0x00d:  mov    0xc(%ebp),%eax
081c9c64 +0x010:  mov    %eax,0x4(%esp)
081c9c68 +0x014:  mov    0x8(%ebp),%eax
081c9c6b +0x017:  mov    %eax,(%esp)
081c9c6e +0x01a:  call   081c9d64 <_ZN19DisPatcher_SortItem11check_errorEP5CUserR8MSG_BASE>  ; DisPatcher_SortItem::check_error(CUser*, MSG_BASE&)
081c9c73 +0x01f:  mov    %eax,-0x14(%ebp)
081c9c76 +0x022:  cmpl   $0x0,-0x14(%ebp)
081c9c7a +0x026:  jle    081c9c84 <+0x30>
081c9c7c +0x028:  mov    -0x14(%ebp),%eax
081c9c7f +0x02b:  jmp    081c9d61 <+0x10d>
081c9c84 +0x030:  cmpl   $0x0,-0x14(%ebp)
081c9c88 +0x034:  jns    081c9c94 <+0x40>
081c9c8a +0x036:  mov    $0xffffffff,%eax
081c9c8f +0x03b:  jmp    081c9d61 <+0x10d>
081c9c94 +0x040:  mov    0x10(%ebp),%eax
081c9c97 +0x043:  mov    %eax,-0x10(%ebp)
081c9c9a +0x046:  mov    0x14(%ebp),%eax
081c9c9d +0x049:  mov    %eax,-0xc(%ebp)
081c9ca0 +0x04c:  mov    -0x10(%ebp),%eax
081c9ca3 +0x04f:  movzbl 0xd(%eax),%edx
081c9ca7 +0x053:  mov    -0xc(%ebp),%eax
081c9caa +0x056:  mov    %dl,0x4(%eax)
081c9cad +0x059:  mov    -0xc(%ebp),%eax
081c9cb0 +0x05c:  movl   $0x0,0x8(%eax)
081c9cb7 +0x063:  mov    -0xc(%ebp),%eax
081c9cba +0x066:  movzbl 0x4(%eax),%eax
081c9cbe +0x06a:  movsbl %al,%eax
081c9cc1 +0x06d:  cmp    $0x1,%eax
081c9cc4 +0x070:  je     081c9d03 <+0xaf>
081c9cc6 +0x072:  cmp    $0x1,%eax
081c9cc9 +0x075:  jg     081c9cd4 <+0x80>
081c9ccb +0x077:  test   %eax,%eax
081c9ccd +0x079:  je     081c9ce0 <+0x8c>
081c9ccf +0x07b:  jmp    081c9d5c <+0x108>
081c9cd4 +0x080:  cmp    $0x2,%eax
081c9cd7 +0x083:  je     081c9d26 <+0xd2>
081c9cd9 +0x085:  cmp    $0x7,%eax
081c9cdc +0x088:  je     081c9d3b <+0xe7>
081c9cde +0x08a:  jmp    081c9d5c <+0x108>
081c9ce0 +0x08c:  mov    0xc(%ebp),%eax
081c9ce3 +0x08f:  mov    %eax,(%esp)
081c9ce6 +0x092:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
081c9ceb +0x097:  movl   $0x1,0x4(%esp)
081c9cf3 +0x09f:  mov    %eax,(%esp)
081c9cf6 +0x0a2:  call   08504d80 <_ZN10CInventory4sortE10INVEN_TYPE>  ; CInventory::sort(INVEN_TYPE)
081c9cfb +0x0a7:  mov    -0xc(%ebp),%edx
081c9cfe +0x0aa:  mov    %eax,0x8(%edx)
081c9d01 +0x0ad:  jmp    081c9d5c <+0x108>
081c9d03 +0x0af:  mov    0xc(%ebp),%eax
081c9d06 +0x0b2:  mov    %eax,(%esp)
081c9d09 +0x0b5:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
081c9d0e +0x0ba:  movl   $0x2,0x4(%esp)
081c9d16 +0x0c2:  mov    %eax,(%esp)
081c9d19 +0x0c5:  call   08504d80 <_ZN10CInventory4sortE10INVEN_TYPE>  ; CInventory::sort(INVEN_TYPE)
081c9d1e +0x0ca:  mov    -0xc(%ebp),%edx
081c9d21 +0x0cd:  mov    %eax,0x8(%edx)
081c9d24 +0x0d0:  jmp    081c9d5c <+0x108>
081c9d26 +0x0d2:  mov    0xc(%ebp),%eax
081c9d29 +0x0d5:  mov    %eax,(%esp)
081c9d2c +0x0d8:  call   08151a94 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x13c9>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x13c9
081c9d31 +0x0dd:  mov    %eax,(%esp)
081c9d34 +0x0e0:  call   0850bd0c <_ZN6CCargo4sortEv>  ; CCargo::sort()
081c9d39 +0x0e5:  jmp    081c9d5c <+0x108>
081c9d3b +0x0e7:  mov    0xc(%ebp),%eax
081c9d3e +0x0ea:  mov    %eax,(%esp)
081c9d41 +0x0ed:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
081c9d46 +0x0f2:  movl   $0x3,0x4(%esp)
081c9d4e +0x0fa:  mov    %eax,(%esp)
081c9d51 +0x0fd:  call   08504d80 <_ZN10CInventory4sortE10INVEN_TYPE>  ; CInventory::sort(INVEN_TYPE)
081c9d56 +0x102:  mov    -0xc(%ebp),%edx
081c9d59 +0x105:  mov    %eax,0x8(%edx)
081c9d5c +0x108:  mov    $0x0,%eax
081c9d61 +0x10d:  leave
081c9d62 +0x10e:  ret
081c9d63 +0x10f:  nop
```

## 反编译 C

```c
// DisPatcher_SortItem::process @ 0x81c9c54

/* DisPatcher_SortItem::process(CUser*, MSG_BASE&, ParamBase&) */

int __thiscall
DisPatcher_SortItem::process
          (DisPatcher_SortItem *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  ParamBase PVar1;
  int iVar2;
  CInventory *pCVar3;
  undefined4 uVar4;
  CCargo *this_00;
  MSG_BASE *pMVar5;
  
  pMVar5 = param_2;
  iVar2 = check_error((CUser *)this,(MSG_BASE *)param_1);
  if (iVar2 < 1) {
    if (iVar2 < 0) {
      iVar2 = -1;
    }
    else {
      *(MSG_BASE *)(param_3 + 4) = param_2[0xd];
      *(undefined4 *)(param_3 + 8) = 0;
      PVar1 = param_3[4];
      if (PVar1 == (ParamBase)0x1) {
        pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
        uVar4 = CInventory::sort(pCVar3,2,pMVar5);
        *(undefined4 *)(param_3 + 8) = uVar4;
      }
      else if ((char)PVar1 < '\x02') {
        if (PVar1 == (ParamBase)0x0) {
          pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
          uVar4 = CInventory::sort(pCVar3,1,pMVar5);
          *(undefined4 *)(param_3 + 8) = uVar4;
        }
      }
      else if (PVar1 == (ParamBase)0x2) {
        this_00 = (CCargo *)CUserCharacInfo::getCurCharacCargoW((CUserCharacInfo *)param_1);
        CCargo::sort(this_00);
      }
      else if (PVar1 == (ParamBase)0x7) {
        pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
        uVar4 = CInventory::sort(pCVar3,3,pMVar5);
        *(undefined4 *)(param_3 + 8) = uVar4;
      }
      iVar2 = 0;
    }
  }
  return iVar2;
}
```
