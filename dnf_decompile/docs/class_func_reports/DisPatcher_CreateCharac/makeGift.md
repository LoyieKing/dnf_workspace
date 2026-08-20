# makeGift

`_ZN23DisPatcher_CreateCharac8makeGiftEP5CUserP17SIG_CREATE_CHARAC`

`DisPatcher_CreateCharac::makeGift(CUser*, SIG_CREATE_CHARAC*)`

| 类 | 地址 |
|---|---|
| `DisPatcher_CreateCharac` | `0x081c0a1a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c0a1a  _ZN23DisPatcher_CreateCharac8makeGiftEP5CUserP17SIG_CREATE_CHARAC
#           DisPatcher_CreateCharac::makeGift(CUser*, SIG_CREATE_CHARAC*)
# range [0x081c0a1a, 0x081c0df9]
081c0a1a +0x000:  push   %ebp
081c0a1b +0x001:  mov    %esp,%ebp
081c0a1d +0x003:  push   %ebx
081c0a1e +0x004:  sub    $0xe4,%esp
081c0a24 +0x00a:  mov    0x10(%ebp),%eax
081c0a27 +0x00d:  movzbl 0x22(%eax),%eax
081c0a2b +0x011:  movsbl %al,%eax
081c0a2e +0x014:  mov    &_ZL20CREATECHARACTEREQUIP(,%eax,8),%ebx
081c0a35 +0x01b:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081c0a3a +0x020:  mov    %ebx,0x4(%esp)
081c0a3e +0x024:  mov    %eax,(%esp)
081c0a41 +0x027:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
081c0a46 +0x02c:  mov    %eax,-0x18(%ebp)
081c0a49 +0x02f:  mov    0x10(%ebp),%eax
081c0a4c +0x032:  movzbl 0x22(%eax),%eax
081c0a50 +0x036:  movsbl %al,%eax
081c0a53 +0x039:  add    %eax,%eax
081c0a55 +0x03b:  add    $0x1,%eax
081c0a58 +0x03e:  mov    &_ZL20CREATECHARACTEREQUIP(,%eax,4),%ebx
081c0a5f +0x045:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081c0a64 +0x04a:  mov    %ebx,0x4(%esp)
081c0a68 +0x04e:  mov    %eax,(%esp)
081c0a6b +0x051:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
081c0a70 +0x056:  mov    %eax,-0x14(%ebp)
081c0a73 +0x059:  cmpl   $0x0,-0x18(%ebp)
081c0a77 +0x05d:  je     081c0a7f <+0x65>
081c0a79 +0x05f:  cmpl   $0x0,-0x14(%ebp)
081c0a7d +0x063:  jne    081c0a8e <+0x74>
081c0a7f +0x065:  mov    0x10(%ebp),%eax
081c0a82 +0x068:  movb   $0x0,0x5340(%eax)
081c0a89 +0x06f:  jmp    081c0c4d <+0x233>
081c0a8e +0x074:  mov    0x10(%ebp),%eax
081c0a91 +0x077:  movb   $0x1,0x5340(%eax)
081c0a98 +0x07e:  lea    -0x55(%ebp),%eax
081c0a9b +0x081:  mov    %eax,(%esp)
081c0a9e +0x084:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
081c0aa3 +0x089:  lea    -0x92(%ebp),%eax
081c0aa9 +0x08f:  mov    %eax,(%esp)
081c0aac +0x092:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
081c0ab1 +0x097:  mov    0x10(%ebp),%eax
081c0ab4 +0x09a:  movzbl 0x22(%eax),%eax
081c0ab8 +0x09e:  movsbl %al,%eax
081c0abb +0x0a1:  mov    &_ZL20CREATECHARACTEREQUIP(,%eax,8),%eax
081c0ac2 +0x0a8:  mov    %eax,-0x53(%ebp)
081c0ac5 +0x0ab:  mov    -0x18(%ebp),%eax
081c0ac8 +0x0ae:  mov    (%eax),%eax
081c0aca +0x0b0:  add    $0x8,%eax
081c0acd +0x0b3:  mov    (%eax),%edx
081c0acf +0x0b5:  lea    -0x55(%ebp),%eax
081c0ad2 +0x0b8:  mov    %eax,0x4(%esp)
081c0ad6 +0x0bc:  mov    -0x18(%ebp),%eax
081c0ad9 +0x0bf:  mov    %eax,(%esp)
081c0adc +0x0c2:  call   *%edx
081c0ade +0x0c4:  mov    0x10(%ebp),%eax
081c0ae1 +0x0c7:  mov    -0x55(%ebp),%edx
081c0ae4 +0x0ca:  mov    %edx,0x4e7b(%eax)
081c0aea +0x0d0:  mov    -0x51(%ebp),%edx
081c0aed +0x0d3:  mov    %edx,0x4e7f(%eax)
081c0af3 +0x0d9:  mov    -0x4d(%ebp),%edx
081c0af6 +0x0dc:  mov    %edx,0x4e83(%eax)
081c0afc +0x0e2:  mov    -0x49(%ebp),%edx
081c0aff +0x0e5:  mov    %edx,0x4e87(%eax)
081c0b05 +0x0eb:  mov    -0x45(%ebp),%edx
081c0b08 +0x0ee:  mov    %edx,0x4e8b(%eax)
081c0b0e +0x0f4:  mov    -0x41(%ebp),%edx
081c0b11 +0x0f7:  mov    %edx,0x4e8f(%eax)
081c0b17 +0x0fd:  mov    -0x3d(%ebp),%edx
081c0b1a +0x100:  mov    %edx,0x4e93(%eax)
081c0b20 +0x106:  mov    -0x39(%ebp),%edx
081c0b23 +0x109:  mov    %edx,0x4e97(%eax)
081c0b29 +0x10f:  mov    -0x35(%ebp),%edx
081c0b2c +0x112:  mov    %edx,0x4e9b(%eax)
081c0b32 +0x118:  mov    -0x31(%ebp),%edx
081c0b35 +0x11b:  mov    %edx,0x4e9f(%eax)
081c0b3b +0x121:  mov    -0x2d(%ebp),%edx
081c0b3e +0x124:  mov    %edx,0x4ea3(%eax)
081c0b44 +0x12a:  mov    -0x29(%ebp),%edx
081c0b47 +0x12d:  mov    %edx,0x4ea7(%eax)
081c0b4d +0x133:  mov    -0x25(%ebp),%edx
081c0b50 +0x136:  mov    %edx,0x4eab(%eax)
081c0b56 +0x13c:  mov    -0x21(%ebp),%edx
081c0b59 +0x13f:  mov    %edx,0x4eaf(%eax)
081c0b5f +0x145:  mov    -0x1d(%ebp),%edx
081c0b62 +0x148:  mov    %edx,0x4eb3(%eax)
081c0b68 +0x14e:  movzbl -0x19(%ebp),%edx
081c0b6c +0x152:  mov    %dl,0x4eb7(%eax)
081c0b72 +0x158:  mov    0x10(%ebp),%eax
081c0b75 +0x15b:  movzbl 0x22(%eax),%eax
081c0b79 +0x15f:  movsbl %al,%eax
081c0b7c +0x162:  add    %eax,%eax
081c0b7e +0x164:  add    $0x1,%eax
081c0b81 +0x167:  mov    &_ZL20CREATECHARACTEREQUIP(,%eax,4),%eax
081c0b88 +0x16e:  mov    %eax,-0x90(%ebp)
081c0b8e +0x174:  mov    -0x14(%ebp),%eax
081c0b91 +0x177:  mov    (%eax),%eax
081c0b93 +0x179:  add    $0x8,%eax
081c0b96 +0x17c:  mov    (%eax),%edx
081c0b98 +0x17e:  lea    -0x92(%ebp),%eax
081c0b9e +0x184:  mov    %eax,0x4(%esp)
081c0ba2 +0x188:  mov    -0x14(%ebp),%eax
081c0ba5 +0x18b:  mov    %eax,(%esp)
081c0ba8 +0x18e:  call   *%edx
081c0baa +0x190:  mov    0x10(%ebp),%eax
081c0bad +0x193:  mov    -0x92(%ebp),%edx
081c0bb3 +0x199:  mov    %edx,0x4ef5(%eax)
081c0bb9 +0x19f:  mov    -0x8e(%ebp),%edx
081c0bbf +0x1a5:  mov    %edx,0x4ef9(%eax)
081c0bc5 +0x1ab:  mov    -0x8a(%ebp),%edx
081c0bcb +0x1b1:  mov    %edx,0x4efd(%eax)
081c0bd1 +0x1b7:  mov    -0x86(%ebp),%edx
081c0bd7 +0x1bd:  mov    %edx,0x4f01(%eax)
081c0bdd +0x1c3:  mov    -0x82(%ebp),%edx
081c0be3 +0x1c9:  mov    %edx,0x4f05(%eax)
081c0be9 +0x1cf:  mov    -0x7e(%ebp),%edx
081c0bec +0x1d2:  mov    %edx,0x4f09(%eax)
081c0bf2 +0x1d8:  mov    -0x7a(%ebp),%edx
081c0bf5 +0x1db:  mov    %edx,0x4f0d(%eax)
081c0bfb +0x1e1:  mov    -0x76(%ebp),%edx
081c0bfe +0x1e4:  mov    %edx,0x4f11(%eax)
081c0c04 +0x1ea:  mov    -0x72(%ebp),%edx
081c0c07 +0x1ed:  mov    %edx,0x4f15(%eax)
081c0c0d +0x1f3:  mov    -0x6e(%ebp),%edx
081c0c10 +0x1f6:  mov    %edx,0x4f19(%eax)
081c0c16 +0x1fc:  mov    -0x6a(%ebp),%edx
081c0c19 +0x1ff:  mov    %edx,0x4f1d(%eax)
081c0c1f +0x205:  mov    -0x66(%ebp),%edx
081c0c22 +0x208:  mov    %edx,0x4f21(%eax)
081c0c28 +0x20e:  mov    -0x62(%ebp),%edx
081c0c2b +0x211:  mov    %edx,0x4f25(%eax)
081c0c31 +0x217:  mov    -0x5e(%ebp),%edx
081c0c34 +0x21a:  mov    %edx,0x4f29(%eax)
081c0c3a +0x220:  mov    -0x5a(%ebp),%edx
081c0c3d +0x223:  mov    %edx,0x4f2d(%eax)
081c0c43 +0x229:  movzbl -0x56(%ebp),%edx
081c0c47 +0x22d:  mov    %dl,0x4f31(%eax)
081c0c4d +0x233:  movl   $0x0,-0x10(%ebp)
081c0c54 +0x23a:  mov    0x10(%ebp),%eax
081c0c57 +0x23d:  movzbl 0x22(%eax),%eax
081c0c5b +0x241:  movsbl %al,%eax
081c0c5e +0x244:  cmp    $0xa,%eax
081c0c61 +0x247:  ja     081c0def <+0x3d5>
081c0c67 +0x24d:  mov    &data#11752ea1(.rodata)(,%eax,4),%eax
081c0c6e +0x254:  jmp    *%eax
081c0c70 +0x256:  movl   $0x6bd0,-0x10(%ebp)
081c0c77 +0x25d:  jmp    081c0cc0 <+0x2a6>
081c0c79 +0x25f:  movl   $0x74cc,-0x10(%ebp)
081c0c80 +0x266:  jmp    081c0cc0 <+0x2a6>
081c0c82 +0x268:  movl   $0x7a44,-0x10(%ebp)
081c0c89 +0x26f:  jmp    081c0cc0 <+0x2a6>
081c0c8b +0x271:  movl   $0x8340,-0x10(%ebp)
081c0c92 +0x278:  jmp    081c0cc0 <+0x2a6>
081c0c94 +0x27a:  movl   $0x88b9,-0x10(%ebp)
081c0c9b +0x281:  jmp    081c0cc0 <+0x2a6>
081c0c9d +0x283:  movl   $0x908a,-0x10(%ebp)
081c0ca4 +0x28a:  jmp    081c0cc0 <+0x2a6>
081c0ca6 +0x28c:  movl   $0x8340,-0x10(%ebp)
081c0cad +0x293:  jmp    081c0cc0 <+0x2a6>
081c0caf +0x295:  movl   $0x6bd0,-0x10(%ebp)
081c0cb6 +0x29c:  jmp    081c0cc0 <+0x2a6>
081c0cb8 +0x29e:  movl   $0x6520aea,-0x10(%ebp)
081c0cbf +0x2a5:  nop
081c0cc0 +0x2a6:  mov    -0x10(%ebp),%ebx
081c0cc3 +0x2a9:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081c0cc8 +0x2ae:  mov    %ebx,0x4(%esp)
081c0ccc +0x2b2:  mov    %eax,(%esp)
081c0ccf +0x2b5:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
081c0cd4 +0x2ba:  mov    %eax,-0xc(%ebp)
081c0cd7 +0x2bd:  cmpl   $0x0,-0xc(%ebp)
081c0cdb +0x2c1:  jne    081c0cec <+0x2d2>
081c0cdd +0x2c3:  mov    0x10(%ebp),%eax
081c0ce0 +0x2c6:  movb   $0x0,0x533f(%eax)
081c0ce7 +0x2cd:  jmp    081c0df0 <+0x3d6>
081c0cec +0x2d2:  mov    0x10(%ebp),%eax
081c0cef +0x2d5:  movb   $0x1,0x533f(%eax)
081c0cf6 +0x2dc:  lea    -0xcf(%ebp),%eax
081c0cfc +0x2e2:  mov    %eax,(%esp)
081c0cff +0x2e5:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
081c0d04 +0x2ea:  mov    -0x10(%ebp),%eax
081c0d07 +0x2ed:  mov    %eax,-0xcd(%ebp)
081c0d0d +0x2f3:  mov    -0xc(%ebp),%eax
081c0d10 +0x2f6:  mov    (%eax),%eax
081c0d12 +0x2f8:  add    $0x8,%eax
081c0d15 +0x2fb:  mov    (%eax),%edx
081c0d17 +0x2fd:  lea    -0xcf(%ebp),%eax
081c0d1d +0x303:  mov    %eax,0x4(%esp)
081c0d21 +0x307:  mov    -0xc(%ebp),%eax
081c0d24 +0x30a:  mov    %eax,(%esp)
081c0d27 +0x30d:  call   *%edx
081c0d29 +0x30f:  mov    0x10(%ebp),%eax
081c0d2c +0x312:  mov    -0xcf(%ebp),%edx
081c0d32 +0x318:  mov    %edx,0x4e01(%eax)
081c0d38 +0x31e:  mov    -0xcb(%ebp),%edx
081c0d3e +0x324:  mov    %edx,0x4e05(%eax)
081c0d44 +0x32a:  mov    -0xc7(%ebp),%edx
081c0d4a +0x330:  mov    %edx,0x4e09(%eax)
081c0d50 +0x336:  mov    -0xc3(%ebp),%edx
081c0d56 +0x33c:  mov    %edx,0x4e0d(%eax)
081c0d5c +0x342:  mov    -0xbf(%ebp),%edx
081c0d62 +0x348:  mov    %edx,0x4e11(%eax)
081c0d68 +0x34e:  mov    -0xbb(%ebp),%edx
081c0d6e +0x354:  mov    %edx,0x4e15(%eax)
081c0d74 +0x35a:  mov    -0xb7(%ebp),%edx
081c0d7a +0x360:  mov    %edx,0x4e19(%eax)
081c0d80 +0x366:  mov    -0xb3(%ebp),%edx
081c0d86 +0x36c:  mov    %edx,0x4e1d(%eax)
081c0d8c +0x372:  mov    -0xaf(%ebp),%edx
081c0d92 +0x378:  mov    %edx,0x4e21(%eax)
081c0d98 +0x37e:  mov    -0xab(%ebp),%edx
081c0d9e +0x384:  mov    %edx,0x4e25(%eax)
081c0da4 +0x38a:  mov    -0xa7(%ebp),%edx
081c0daa +0x390:  mov    %edx,0x4e29(%eax)
081c0db0 +0x396:  mov    -0xa3(%ebp),%edx
081c0db6 +0x39c:  mov    %edx,0x4e2d(%eax)
081c0dbc +0x3a2:  mov    -0x9f(%ebp),%edx
081c0dc2 +0x3a8:  mov    %edx,0x4e31(%eax)
081c0dc8 +0x3ae:  mov    -0x9b(%ebp),%edx
081c0dce +0x3b4:  mov    %edx,0x4e35(%eax)
081c0dd4 +0x3ba:  mov    -0x97(%ebp),%edx
081c0dda +0x3c0:  mov    %edx,0x4e39(%eax)
081c0de0 +0x3c6:  movzbl -0x93(%ebp),%edx
081c0de7 +0x3cd:  mov    %dl,0x4e3d(%eax)
081c0ded +0x3d3:  jmp    081c0df0 <+0x3d6>
081c0def +0x3d5:  nop
081c0df0 +0x3d6:  add    $0xe4,%esp
081c0df6 +0x3dc:  pop    %ebx
081c0df7 +0x3dd:  pop    %ebp
081c0df8 +0x3de:  ret
081c0df9 +0x3df:  nop
```

## 反编译 C

```c
// DisPatcher_CreateCharac::makeGift @ 0x81c0a1a

/* DisPatcher_CreateCharac::makeGift(CUser*, SIG_CREATE_CHARAC*) */

void __thiscall
DisPatcher_CreateCharac::makeGift
          (DisPatcher_CreateCharac *this,CUser *param_1,SIG_CREATE_CHARAC *param_2)

{
  int iVar1;
  CDataManager *pCVar2;
  undefined2 local_d3;
  undefined2 uStack_d1;
  undefined2 uStack_cf;
  undefined2 uStack_cd;
  undefined4 local_cb;
  undefined4 local_c7;
  undefined4 local_c3;
  undefined4 local_bf;
  undefined4 local_bb;
  undefined4 local_b7;
  undefined4 local_b3;
  undefined4 local_af;
  undefined4 local_ab;
  undefined4 local_a7;
  undefined4 local_a3;
  undefined4 local_9f;
  undefined4 local_9b;
  SIG_CREATE_CHARAC local_97;
  undefined2 local_96;
  undefined2 uStack_94;
  undefined2 uStack_92;
  undefined2 uStack_90;
  undefined4 local_8e;
  undefined4 local_8a;
  undefined4 local_86;
  undefined4 local_82;
  undefined4 local_7e;
  undefined4 local_7a;
  undefined4 local_76;
  undefined4 local_72;
  undefined4 local_6e;
  undefined4 local_6a;
  undefined4 local_66;
  undefined4 local_62;
  undefined4 local_5e;
  SIG_CREATE_CHARAC local_5a;
  undefined2 local_59;
  undefined2 uStack_57;
  undefined2 uStack_55;
  undefined2 uStack_53;
  undefined4 local_51;
  undefined4 local_4d;
  undefined4 local_49;
  undefined4 local_45;
  undefined4 local_41;
  undefined4 local_3d;
  undefined4 local_39;
  undefined4 local_35;
  undefined4 local_31;
  undefined4 local_2d;
  undefined4 local_29;
  undefined4 local_25;
  undefined4 local_21;
  SIG_CREATE_CHARAC local_1d;
  int *local_1c;
  int *local_18;
  int local_14;
  int *local_10;
  
  iVar1 = *(int *)(CREATECHARACTEREQUIP + (char)param_2[0x22] * 8);
  pCVar2 = (CDataManager *)G_CDataManager();
  local_1c = (int *)CDataManager::find_item(pCVar2,iVar1);
  iVar1 = *(int *)(CREATECHARACTEREQUIP + ((char)param_2[0x22] * 2 + 1) * 4);
  pCVar2 = (CDataManager *)G_CDataManager();
  local_18 = (int *)CDataManager::find_item(pCVar2,iVar1);
  if ((local_1c == (int *)0x0) || (local_18 == (int *)0x0)) {
    param_2[0x5340] = (SIG_CREATE_CHARAC)0x0;
  }
  else {
    param_2[0x5340] = (SIG_CREATE_CHARAC)0x1;
    Inven_Item::Inven_Item((Inven_Item *)&local_59);
    Inven_Item::Inven_Item((Inven_Item *)&local_96);
    uStack_57 = (undefined2)*(undefined4 *)(CREATECHARACTEREQUIP + (char)param_2[0x22] * 8);
    uStack_55 = (undefined2)
                ((uint)*(undefined4 *)(CREATECHARACTEREQUIP + (char)param_2[0x22] * 8) >> 0x10);
    (**(code **)(*local_1c + 8))(local_1c,&local_59);
    *(uint *)(param_2 + 0x4e7b) = CONCAT22(uStack_57,local_59);
    *(uint *)(param_2 + 0x4e7f) = CONCAT22(uStack_53,uStack_55);
    *(undefined4 *)(param_2 + 0x4e83) = local_51;
    *(undefined4 *)(param_2 + 0x4e87) = local_4d;
    *(undefined4 *)(param_2 + 0x4e8b) = local_49;
    *(undefined4 *)(param_2 + 0x4e8f) = local_45;
    *(undefined4 *)(param_2 + 0x4e93) = local_41;
    *(undefined4 *)(param_2 + 0x4e97) = local_3d;
    *(undefined4 *)(param_2 + 0x4e9b) = local_39;
    *(undefined4 *)(param_2 + 0x4e9f) = local_35;
    *(undefined4 *)(param_2 + 0x4ea3) = local_31;
    *(undefined4 *)(param_2 + 0x4ea7) = local_2d;
    *(undefined4 *)(param_2 + 0x4eab) = local_29;
    *(undefined4 *)(param_2 + 0x4eaf) = local_25;
    *(undefined4 *)(param_2 + 0x4eb3) = local_21;
    param_2[0x4eb7] = local_1d;
    uStack_94 = (undefined2)
                *(undefined4 *)(CREATECHARACTEREQUIP + ((char)param_2[0x22] * 2 + 1) * 4);
    uStack_92 = (undefined2)
                ((uint)*(undefined4 *)(CREATECHARACTEREQUIP + ((char)param_2[0x22] * 2 + 1) * 4) >>
                0x10);
    (**(code **)(*local_18 + 8))(local_18,&local_96);
    *(uint *)(param_2 + 0x4ef5) = CONCAT22(uStack_94,local_96);
    *(uint *)(param_2 + 0x4ef9) = CONCAT22(uStack_90,uStack_92);
    *(undefined4 *)(param_2 + 0x4efd) = local_8e;
    *(undefined4 *)(param_2 + 0x4f01) = local_8a;
    *(undefined4 *)(param_2 + 0x4f05) = local_86;
    *(undefined4 *)(param_2 + 0x4f09) = local_82;
    *(undefined4 *)(param_2 + 0x4f0d) = local_7e;
    *(undefined4 *)(param_2 + 0x4f11) = local_7a;
    *(undefined4 *)(param_2 + 0x4f15) = local_76;
    *(undefined4 *)(param_2 + 0x4f19) = local_72;
    *(undefined4 *)(param_2 + 0x4f1d) = local_6e;
    *(undefined4 *)(param_2 + 0x4f21) = local_6a;
    *(undefined4 *)(param_2 + 0x4f25) = local_66;
    *(undefined4 *)(param_2 + 0x4f29) = local_62;
    *(undefined4 *)(param_2 + 0x4f2d) = local_5e;
    param_2[0x4f31] = local_5a;
  }
  switch(param_2[0x22]) {
  case (SIG_CREATE_CHARAC)0x0:
    local_14 = 0x6bd0;
    break;
  case (SIG_CREATE_CHARAC)0x1:
  case (SIG_CREATE_CHARAC)0x7:
    local_14 = 0x74cc;
    break;
  case (SIG_CREATE_CHARAC)0x2:
  case (SIG_CREATE_CHARAC)0x5:
    local_14 = 0x7a44;
    break;
  case (SIG_CREATE_CHARAC)0x3:
    local_14 = 0x8340;
    break;
  case (SIG_CREATE_CHARAC)0x4:
    local_14 = 0x88b9;
    break;
  case (SIG_CREATE_CHARAC)0x6:
    local_14 = 0x908a;
    break;
  case (SIG_CREATE_CHARAC)0x8:
    local_14 = 0x8340;
    break;
  case (SIG_CREATE_CHARAC)0x9:
    local_14 = 0x6bd0;
    break;
  case (SIG_CREATE_CHARAC)0xa:
    local_14 = 0x6520aea;
    break;
  default:
    goto switchD_081c0c6e_default;
  }
  iVar1 = local_14;
  pCVar2 = (CDataManager *)G_CDataManager();
  local_10 = (int *)CDataManager::find_item(pCVar2,iVar1);
  if (local_10 == (int *)0x0) {
    param_2[0x533f] = (SIG_CREATE_CHARAC)0x0;
  }
  else {
    param_2[0x533f] = (SIG_CREATE_CHARAC)0x1;
    Inven_Item::Inven_Item((Inven_Item *)&local_d3);
    uStack_d1 = (undefined2)local_14;
    uStack_cf = (undefined2)((uint)local_14 >> 0x10);
    (**(code **)(*local_10 + 8))(local_10,&local_d3);
    *(uint *)(param_2 + 0x4e01) = CONCAT22(uStack_d1,local_d3);
    *(uint *)(param_2 + 0x4e05) = CONCAT22(uStack_cd,uStack_cf);
    *(undefined4 *)(param_2 + 0x4e09) = local_cb;
    *(undefined4 *)(param_2 + 0x4e0d) = local_c7;
    *(undefined4 *)(param_2 + 0x4e11) = local_c3;
    *(undefined4 *)(param_2 + 0x4e15) = local_bf;
    *(undefined4 *)(param_2 + 0x4e19) = local_bb;
    *(undefined4 *)(param_2 + 0x4e1d) = local_b7;
    *(undefined4 *)(param_2 + 0x4e21) = local_b3;
    *(undefined4 *)(param_2 + 0x4e25) = local_af;
    *(undefined4 *)(param_2 + 0x4e29) = local_ab;
    *(undefined4 *)(param_2 + 0x4e2d) = local_a7;
    *(undefined4 *)(param_2 + 0x4e31) = local_a3;
    *(undefined4 *)(param_2 + 0x4e35) = local_9f;
    *(undefined4 *)(param_2 + 0x4e39) = local_9b;
    param_2[0x4e3d] = local_97;
  }
switchD_081c0c6e_default:
  return;
}
```
