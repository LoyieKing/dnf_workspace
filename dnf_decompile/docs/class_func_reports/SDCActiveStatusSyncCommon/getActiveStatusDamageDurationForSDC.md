# getActiveStatusDamageDurationForSDC

`_ZN25SDCActiveStatusSyncCommon35getActiveStatusDamageDurationForSDCEciPiS0_P29STSDCActiveStatusSyncDataSendPv`

`SDCActiveStatusSyncCommon::getActiveStatusDamageDurationForSDC(char, int, int*, int*, STSDCActiveStatusSyncDataSend*, void*)`

| 类 | 地址 |
|---|---|
| `SDCActiveStatusSyncCommon` | `0x0808df82` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0808df82  _ZN25SDCActiveStatusSyncCommon35getActiveStatusDamageDurationForSDCEciPiS0_P29STSDCActiveStatusSyncDataSendPv
#           SDCActiveStatusSyncCommon::getActiveStatusDamageDurationForSDC(char, int, int*, int*, STSDCActiveStatusSyncDataSend*, void*)
# range [0x0808df82, 0x0808e13b]
0808df82 +0x000:  push   %ebp
0808df83 +0x001:  mov    %esp,%ebp
0808df85 +0x003:  push   %esi
0808df86 +0x004:  push   %ebx
0808df87 +0x005:  add    $0xffffff80,%esp
0808df8a +0x008:  mov    0xc(%ebp),%eax
0808df8d +0x00b:  mov    %al,-0x5c(%ebp)
0808df90 +0x00e:  cmpl   $0x0,0x14(%ebp)
0808df94 +0x012:  je     0808e12d <+0x1ab>
0808df9a +0x018:  cmpl   $0x0,0x18(%ebp)
0808df9e +0x01c:  je     0808e130 <+0x1ae>
0808dfa4 +0x022:  cmpl   $0x0,0x1c(%ebp)
0808dfa8 +0x026:  je     0808e133 <+0x1b1>
0808dfae +0x02c:  mov    0x1c(%ebp),%eax
0808dfb1 +0x02f:  mov    (%eax),%edx
0808dfb3 +0x031:  mov    %edx,-0x4a(%ebp)
0808dfb6 +0x034:  mov    0x4(%eax),%edx
0808dfb9 +0x037:  mov    %edx,-0x46(%ebp)
0808dfbc +0x03a:  mov    0x8(%eax),%edx
0808dfbf +0x03d:  mov    %edx,-0x42(%ebp)
0808dfc2 +0x040:  mov    0xc(%eax),%edx
0808dfc5 +0x043:  mov    %edx,-0x3e(%ebp)
0808dfc8 +0x046:  mov    0x10(%eax),%edx
0808dfcb +0x049:  mov    %edx,-0x3a(%ebp)
0808dfce +0x04c:  mov    0x14(%eax),%edx
0808dfd1 +0x04f:  mov    %edx,-0x36(%ebp)
0808dfd4 +0x052:  mov    0x18(%eax),%edx
0808dfd7 +0x055:  mov    %edx,-0x32(%ebp)
0808dfda +0x058:  mov    0x1c(%eax),%edx
0808dfdd +0x05b:  mov    %edx,-0x2e(%ebp)
0808dfe0 +0x05e:  mov    0x20(%eax),%edx
0808dfe3 +0x061:  mov    %edx,-0x2a(%ebp)
0808dfe6 +0x064:  mov    0x24(%eax),%edx
0808dfe9 +0x067:  mov    %edx,-0x26(%ebp)
0808dfec +0x06a:  mov    0x28(%eax),%edx
0808dfef +0x06d:  mov    %edx,-0x22(%ebp)
0808dff2 +0x070:  mov    0x2c(%eax),%edx
0808dff5 +0x073:  mov    %edx,-0x1e(%ebp)
0808dff8 +0x076:  mov    0x30(%eax),%edx
0808dffb +0x079:  mov    %edx,-0x1a(%ebp)
0808dffe +0x07c:  movzbl 0x34(%eax),%eax
0808e002 +0x080:  mov    %al,-0x16(%ebp)
0808e005 +0x083:  lea    -0x14(%ebp),%eax
0808e008 +0x086:  mov    %eax,(%esp)
0808e00b +0x089:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
0808e010 +0x08e:  movsbl -0x5c(%ebp),%eax
0808e014 +0x092:  mov    0x14(%ebp),%edx
0808e017 +0x095:  mov    %edx,0x14(%esp)
0808e01b +0x099:  lea    -0x14(%ebp),%edx
0808e01e +0x09c:  mov    %edx,0x10(%esp)
0808e022 +0x0a0:  lea    -0x4a(%ebp),%edx
0808e025 +0x0a3:  mov    %edx,0xc(%esp)
0808e029 +0x0a7:  mov    0x10(%ebp),%edx
0808e02c +0x0aa:  mov    %edx,0x8(%esp)
0808e030 +0x0ae:  mov    %eax,0x4(%esp)
0808e034 +0x0b2:  mov    0x8(%ebp),%eax
0808e037 +0x0b5:  mov    %eax,(%esp)
0808e03a +0x0b8:  call   0808d4b4 <_ZN25SDCActiveStatusSyncCommon17makeEtcParametersE17ENUM_ACTIVESTATUSiPvPSt6vectorIiSaIiEEPi>  ; SDCActiveStatusSyncCommon::makeEtcParameters(ENUM_ACTIVESTATUS, int, void*, std::vector<int, std::allocator<int> >*, int*)
0808e03f +0x0bd:  lea    -0x14(%ebp),%eax
0808e042 +0x0c0:  mov    %eax,(%esp)
0808e045 +0x0c3:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
0808e04a +0x0c8:  test   %eax,%eax
0808e04c +0x0ca:  setne  %al
0808e04f +0x0cd:  test   %al,%al
0808e051 +0x0cf:  je     0808e073 <+0xf1>
0808e053 +0x0d1:  movl   $0x0,0x4(%esp)
0808e05b +0x0d9:  lea    -0x14(%ebp),%eax
0808e05e +0x0dc:  mov    %eax,(%esp)
0808e061 +0x0df:  call   0808e1dc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x4c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x4c
0808e066 +0x0e4:  mov    (%eax),%eax
0808e068 +0x0e6:  mov    %eax,-0x47(%ebp)
0808e06b +0x0e9:  mov    0x14(%ebp),%eax
0808e06e +0x0ec:  mov    (%eax),%eax
0808e070 +0x0ee:  mov    %eax,-0x43(%ebp)
0808e073 +0x0f1:  movsbl -0x5c(%ebp),%eax
0808e077 +0x0f5:  cmp    $0xb,%eax
0808e07a +0x0f8:  ja     0808e105 <+0x183>
0808e080 +0x0fe:  mov    &data#b78bdbef(.rodata)(,%eax,4),%eax
0808e087 +0x105:  jmp    *%eax
0808e089 +0x107:  movb   $0x0,-0x15(%ebp)
0808e08d +0x10b:  mov    -0x43(%ebp),%eax
0808e090 +0x10e:  mov    %eax,0x10(%esp)
0808e094 +0x112:  movl   $0x0,0xc(%esp)
0808e09c +0x11a:  lea    -0x4a(%ebp),%eax
0808e09f +0x11d:  mov    %eax,0x8(%esp)
0808e0a3 +0x121:  lea    -0x15(%ebp),%eax
0808e0a6 +0x124:  mov    %eax,0x4(%esp)
0808e0aa +0x128:  mov    0x8(%ebp),%eax
0808e0ad +0x12b:  mov    %eax,(%esp)
0808e0b0 +0x12e:  call   0808de08 <_ZN25SDCActiveStatusSyncCommon13getBurnDamageERbP29STSDCActiveStatusSyncDataSendPvi>  ; SDCActiveStatusSyncCommon::getBurnDamage(bool&, STSDCActiveStatusSyncDataSend*, void*, int)
0808e0b5 +0x133:  mov    0x18(%ebp),%edx
0808e0b8 +0x136:  mov    %eax,(%edx)
0808e0ba +0x138:  jmp    0808e105 <+0x183>
0808e0bc +0x13a:  mov    -0x43(%ebp),%eax
0808e0bf +0x13d:  mov    %eax,0xc(%esp)
0808e0c3 +0x141:  movl   $0x0,0x8(%esp)
0808e0cb +0x149:  lea    -0x4a(%ebp),%eax
0808e0ce +0x14c:  mov    %eax,0x4(%esp)
0808e0d2 +0x150:  mov    0x8(%ebp),%eax
0808e0d5 +0x153:  mov    %eax,(%esp)
0808e0d8 +0x156:  call   0808dcc4 <_ZN25SDCActiveStatusSyncCommon15getPoisonDamageEP29STSDCActiveStatusSyncDataSendPvi>  ; SDCActiveStatusSyncCommon::getPoisonDamage(STSDCActiveStatusSyncDataSend*, void*, int)
0808e0dd +0x15b:  mov    0x18(%ebp),%edx
0808e0e0 +0x15e:  mov    %eax,(%edx)
0808e0e2 +0x160:  jmp    0808e105 <+0x183>
0808e0e4 +0x162:  lea    -0x4a(%ebp),%eax
0808e0e7 +0x165:  mov    %eax,0x4(%esp)
0808e0eb +0x169:  mov    0x8(%ebp),%eax
0808e0ee +0x16c:  mov    %eax,(%esp)
0808e0f1 +0x16f:  call   0808df1a <_ZN25SDCActiveStatusSyncCommon23getBleedingDamageServerEP29STSDCActiveStatusSyncDataSend>  ; SDCActiveStatusSyncCommon::getBleedingDamageServer(STSDCActiveStatusSyncDataSend*)
0808e0f6 +0x174:  mov    0x18(%ebp),%edx
0808e0f9 +0x177:  mov    %eax,(%edx)
0808e0fb +0x179:  jmp    0808e105 <+0x183>
0808e0fd +0x17b:  mov    -0x47(%ebp),%edx
0808e100 +0x17e:  mov    0x18(%ebp),%eax
0808e103 +0x181:  mov    %edx,(%eax)
0808e105 +0x183:  lea    -0x14(%ebp),%eax
0808e108 +0x186:  mov    %eax,(%esp)
0808e10b +0x189:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
0808e110 +0x18e:  jmp    0808e134 <+0x1b2>
0808e112 +0x190:  mov    %edx,%ebx
0808e114 +0x192:  mov    %eax,%esi
0808e116 +0x194:  lea    -0x14(%ebp),%eax
0808e119 +0x197:  mov    %eax,(%esp)
0808e11c +0x19a:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
0808e121 +0x19f:  mov    %esi,%eax
0808e123 +0x1a1:  mov    %ebx,%edx
0808e125 +0x1a3:  mov    %eax,(%esp)
0808e128 +0x1a6:  call   08ae3750 <_Unwind_Resume>
0808e12d +0x1ab:  nop
0808e12e +0x1ac:  jmp    0808e134 <+0x1b2>
0808e130 +0x1ae:  nop
0808e131 +0x1af:  jmp    0808e134 <+0x1b2>
0808e133 +0x1b1:  nop
0808e134 +0x1b2:  sub    $0xffffff80,%esp
0808e137 +0x1b5:  pop    %ebx
0808e138 +0x1b6:  pop    %esi
0808e139 +0x1b7:  pop    %ebp
0808e13a +0x1b8:  ret
0808e13b +0x1b9:  nop
```

## 反编译 C

```c
// SDCActiveStatusSyncCommon::getActiveStatusDamageDurationForSDC @ 0x808df82

/* SDCActiveStatusSyncCommon::getActiveStatusDamageDurationForSDC(char, int, int*, int*,
   STSDCActiveStatusSyncDataSend*, void*) */

void SDCActiveStatusSyncCommon::getActiveStatusDamageDurationForSDC
               (char param_1,int param_2,int *param_3,int *param_4,
               STSDCActiveStatusSyncDataSend *param_5,void *param_6)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined3 in_stack_00000005;
  undefined4 local_4e;
  undefined4 local_4a;
  undefined4 local_46;
  undefined4 local_42;
  undefined4 local_3e;
  undefined4 local_3a;
  undefined4 local_36;
  undefined4 local_32;
  undefined4 local_2e;
  undefined4 local_2a;
  undefined4 local_26;
  undefined4 local_22;
  undefined4 local_1e;
  undefined1 local_1a;
  bool local_19;
  vector<int,std::allocator<int>> local_18 [12];
  
  if (((param_4 != (int *)0x0) && (param_5 != (STSDCActiveStatusSyncDataSend *)0x0)) &&
     (param_6 != (void *)0x0)) {
    local_4e = *(undefined4 *)param_6;
    local_4a = *(undefined4 *)((int)param_6 + 4);
    local_46 = *(undefined4 *)((int)param_6 + 8);
    local_42 = *(undefined4 *)((int)param_6 + 0xc);
    local_3e = *(undefined4 *)((int)param_6 + 0x10);
    local_3a = *(undefined4 *)((int)param_6 + 0x14);
    local_36 = *(undefined4 *)((int)param_6 + 0x18);
    local_32 = *(undefined4 *)((int)param_6 + 0x1c);
    local_2e = *(undefined4 *)((int)param_6 + 0x20);
    local_2a = *(undefined4 *)((int)param_6 + 0x24);
    local_26 = *(undefined4 *)((int)param_6 + 0x28);
    local_22 = *(undefined4 *)((int)param_6 + 0x2c);
    local_1e = *(undefined4 *)((int)param_6 + 0x30);
    local_1a = *(undefined1 *)((int)param_6 + 0x34);
    std::vector<int,std::allocator<int>>::vector(local_18);
                    /* try { // try from 0808e03a to 0808e0dc has its CatchHandler @ 0808e112 */
    makeEtcParameters(_param_1,(int)(char)param_2,param_3,&local_4e,local_18,param_4);
    iVar1 = std::vector<int,std::allocator<int>>::size(local_18);
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)std::vector<int,std::allocator<int>>::operator[](local_18,0);
      local_4e._3_1_ = (undefined1)*puVar2;
      local_4a._3_1_ = (undefined1)*param_4;
      local_4a = CONCAT13(local_4a._3_1_,(int3)((uint)*puVar2 >> 8));
      local_46._0_3_ = (undefined3)((uint)*param_4 >> 8);
    }
    switch((char)param_2) {
    case '\x02':
      uVar3 = getPoisonDamage(_param_1,(STSDCActiveStatusSyncDataSend *)&local_4e,(void *)0x0,
                              CONCAT31((undefined3)local_46,local_4a._3_1_));
      *(undefined4 *)param_5 = uVar3;
      break;
    case '\x06':
    case '\a':
      *(uint *)param_5 = CONCAT31((undefined3)local_4a,local_4e._3_1_);
      break;
    case '\t':
      local_19 = false;
      uVar3 = getBurnDamage(_param_1,&local_19,(STSDCActiveStatusSyncDataSend *)&local_4e,
                            (void *)0x0,CONCAT31((undefined3)local_46,local_4a._3_1_));
      *(undefined4 *)param_5 = uVar3;
      break;
    case '\v':
      uVar3 = getBleedingDamageServer(_param_1,(STSDCActiveStatusSyncDataSend *)&local_4e);
      *(undefined4 *)param_5 = uVar3;
    }
    std::vector<int,std::allocator<int>>::~vector(local_18);
  }
  return;
}
```
