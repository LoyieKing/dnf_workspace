# CheckMoveTown

`_ZN5CUser13CheckMoveTownEi`

`CUser::CheckMoveTown(int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08678526` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08678526  _ZN5CUser13CheckMoveTownEi
#           CUser::CheckMoveTown(int)
# range [0x08678526, 0x086785f3]
08678526 +0x00:  push   %ebp
08678527 +0x01:  mov    %esp,%ebp
08678529 +0x03:  push   %ebx
0867852a +0x04:  sub    $0x24,%esp
0867852d +0x07:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08678532 +0x0c:  mov    %eax,(%esp)
08678535 +0x0f:  call   081424e8 <_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0x83c>  ; global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)+0x83c
0867853a +0x14:  test   %al,%al
0867853c +0x16:  je     08678548 <+0x22>
0867853e +0x18:  mov    $0x0,%eax
08678543 +0x1d:  jmp    086785ed <+0xc7>
08678548 +0x22:  cmpl   $0xa,0xc(%ebp)
0867854c +0x26:  ja     0867856e <+0x48>
0867854e +0x28:  mov    0xc(%ebp),%eax
08678551 +0x2b:  mov    $0x1,%edx
08678556 +0x30:  mov    %edx,%ebx
08678558 +0x32:  mov    %eax,%ecx
0867855a +0x34:  shl    %cl,%ebx
0867855c +0x36:  mov    %ebx,%eax
0867855e +0x38:  and    $0x580,%eax
08678563 +0x3d:  test   %eax,%eax
08678565 +0x3f:  je     0867856e <+0x48>
08678567 +0x41:  mov    $0x0,%eax
0867856c +0x46:  jmp    086785ed <+0xc7>
0867856e +0x48:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08678573 +0x4d:  mov    0xc(%ebp),%edx
08678576 +0x50:  mov    %edx,0x4(%esp)
0867857a +0x54:  mov    %eax,(%esp)
0867857d +0x57:  call   086d1764 <_ZN9GameWorld10GetVillageEi>  ; GameWorld::GetVillage(int)
08678582 +0x5c:  mov    %eax,-0xc(%ebp)
08678585 +0x5f:  cmpl   $0x0,-0xc(%ebp)
08678589 +0x63:  jne    08678592 <+0x6c>
0867858b +0x65:  mov    $0x8,%eax
08678590 +0x6a:  jmp    086785ed <+0xc7>
08678592 +0x6c:  mov    0x8(%ebp),%eax
08678595 +0x6f:  mov    %eax,(%esp)
08678598 +0x72:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0867859d +0x77:  mov    -0xc(%ebp),%edx
086785a0 +0x7a:  mov    0x2c(%edx),%edx
086785a3 +0x7d:  cmp    %edx,%eax
086785a5 +0x7f:  setl   %al
086785a8 +0x82:  test   %al,%al
086785aa +0x84:  je     086785b3 <+0x8d>
086785ac +0x86:  mov    $0x8,%eax
086785b1 +0x8b:  jmp    086785ed <+0xc7>
086785b3 +0x8d:  mov    -0xc(%ebp),%eax
086785b6 +0x90:  mov    0x30(%eax),%eax
086785b9 +0x93:  test   %eax,%eax
086785bb +0x95:  je     086785e8 <+0xc2>
086785bd +0x97:  mov    -0xc(%ebp),%eax
086785c0 +0x9a:  mov    0x30(%eax),%ebx
086785c3 +0x9d:  mov    0x8(%ebp),%eax
086785c6 +0xa0:  mov    %eax,(%esp)
086785c9 +0xa3:  call   0819a8a6 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x58c>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x58c
086785ce +0xa8:  mov    %ebx,0x4(%esp)
086785d2 +0xac:  mov    %eax,(%esp)
086785d5 +0xaf:  call   086ab920 <_ZNK9UserQuest12isClearQuestEi>  ; UserQuest::isClearQuest(int) const
086785da +0xb4:  xor    $0x1,%eax
086785dd +0xb7:  test   %al,%al
086785df +0xb9:  je     086785e8 <+0xc2>
086785e1 +0xbb:  mov    $0x7,%eax
086785e6 +0xc0:  jmp    086785ed <+0xc7>
086785e8 +0xc2:  mov    $0x0,%eax
086785ed +0xc7:  add    $0x24,%esp
086785f0 +0xca:  pop    %ebx
086785f1 +0xcb:  pop    %ebp
086785f2 +0xcc:  ret
086785f3 +0xcd:  nop
```

## 反编译 C

```c
// CUser::CheckMoveTown @ 0x8678526

/* CUser::CheckMoveTown(int) */

undefined4 __thiscall CUser::CheckMoveTown(CUser *this,int param_1)

{
  char cVar1;
  GameWorld *pGVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  UserQuest *this_00;
  
  pGVar2 = (GameWorld *)G_GameWorld();
  cVar1 = GameWorld::IsPVPChannel(pGVar2);
  if (cVar1 == '\0') {
    if (((uint)param_1 < 0xb) && ((1 << ((byte)param_1 & 0x1f) & 0x580U) != 0)) {
      uVar3 = 0;
    }
    else {
      pGVar2 = (GameWorld *)G_GameWorld();
      iVar4 = GameWorld::GetVillage(pGVar2,param_1);
      if (iVar4 == 0) {
        uVar3 = 8;
      }
      else {
        iVar5 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)this);
        if (iVar5 < *(int *)(iVar4 + 0x2c)) {
          uVar3 = 8;
        }
        else {
          if (*(int *)(iVar4 + 0x30) != 0) {
            iVar4 = *(int *)(iVar4 + 0x30);
            this_00 = (UserQuest *)getCurCharacQuestR(this);
            cVar1 = UserQuest::isClearQuest(this_00,iVar4);
            if (cVar1 != '\x01') {
              return 7;
            }
          }
          uVar3 = 0;
        }
      }
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
```
