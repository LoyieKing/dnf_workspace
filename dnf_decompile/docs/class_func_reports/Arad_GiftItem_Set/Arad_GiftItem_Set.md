# Arad_GiftItem_Set

`_ZN17Arad_GiftItem_SetC1Ev`

`Arad_GiftItem_Set::Arad_GiftItem_Set()`

| 类 | 地址 |
|---|---|
| `Arad_GiftItem_Set` | `0x081a2a68` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081a2a68  _ZN17Arad_GiftItem_SetC1Ev
#           Arad_GiftItem_Set::Arad_GiftItem_Set()
# range [0x081a2a68, 0x081a2de9]
081a2a68 +0x000:  push   %ebp
081a2a69 +0x001:  mov    %esp,%ebp
081a2a6b +0x003:  push   %esi
081a2a6c +0x004:  push   %ebx
081a2a6d +0x005:  sub    $0xc0,%esp
081a2a73 +0x00b:  mov    0x8(%ebp),%eax
081a2a76 +0x00e:  mov    %eax,(%esp)
081a2a79 +0x011:  call   08188b42 <_GLOBAL__I__ZN4ARAD16Arad_DataManagerC2Ev+0x47>  ; global constructors keyed to ARAD::Arad_DataManager::Arad_DataManager()+0x47
081a2a7e +0x016:  mov    0x8(%ebp),%eax
081a2a81 +0x019:  movl   $&_ZTV17Arad_GiftItem_Set+0x8,(%eax)
081a2a87 +0x01f:  mov    0x8(%ebp),%eax
081a2a8a +0x022:  add    $0x4,%eax
081a2a8d +0x025:  mov    %eax,(%esp)
081a2a90 +0x028:  call   081a463e <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0x699>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0x699
081a2a95 +0x02d:  mov    0x8(%ebp),%eax
081a2a98 +0x030:  add    $0x1c,%eax
081a2a9b +0x033:  mov    %eax,(%esp)
081a2a9e +0x036:  call   0817cbea <_GLOBAL__I__ZN11Arad_ScriptC2Ev+0x31>  ; global constructors keyed to Arad_Script::Arad_Script()+0x31
081a2aa3 +0x03b:  movl   $0x1,-0x98(%ebp)
081a2aad +0x045:  lea    -0xa0(%ebp),%eax
081a2ab3 +0x04b:  lea    -0x98(%ebp),%edx
081a2ab9 +0x051:  mov    %edx,0x8(%esp)
081a2abd +0x055:  movl   $"ST_EVENT_GIFT_ITEM",0x4(%esp)
081a2ac5 +0x05d:  mov    %eax,(%esp)
081a2ac8 +0x060:  call   081a46b7 <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0x712>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0x712
081a2acd +0x065:  sub    $0x4,%esp
081a2ad0 +0x068:  lea    -0xa0(%ebp),%eax
081a2ad6 +0x06e:  mov    %eax,0x4(%esp)
081a2ada +0x072:  lea    -0xa8(%ebp),%eax
081a2ae0 +0x078:  mov    %eax,(%esp)
081a2ae3 +0x07b:  call   081a46fa <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0x755>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0x755
081a2ae8 +0x080:  mov    0x8(%ebp),%eax
081a2aeb +0x083:  lea    0x1c(%eax),%ecx
081a2aee +0x086:  lea    -0xb0(%ebp),%eax
081a2af4 +0x08c:  lea    -0xa8(%ebp),%edx
081a2afa +0x092:  mov    %edx,0x8(%esp)
081a2afe +0x096:  mov    %ecx,0x4(%esp)
081a2b02 +0x09a:  mov    %eax,(%esp)
081a2b05 +0x09d:  call   081a4778 <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0x7d3>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0x7d3
081a2b0a +0x0a2:  sub    $0x4,%esp
081a2b0d +0x0a5:  lea    -0xa8(%ebp),%eax
081a2b13 +0x0ab:  mov    %eax,(%esp)
081a2b16 +0x0ae:  call   0817cc78 <_GLOBAL__I__ZN11Arad_ScriptC2Ev+0xbf>  ; global constructors keyed to Arad_Script::Arad_Script()+0xbf
081a2b1b +0x0b3:  jmp    081a2b38 <+0xd0>
081a2b1d +0x0b5:  mov    %edx,%ebx
081a2b1f +0x0b7:  mov    %eax,%esi
081a2b21 +0x0b9:  lea    -0xa8(%ebp),%eax
081a2b27 +0x0bf:  mov    %eax,(%esp)
081a2b2a +0x0c2:  call   0817cc78 <_GLOBAL__I__ZN11Arad_ScriptC2Ev+0xbf>  ; global constructors keyed to Arad_Script::Arad_Script()+0xbf
081a2b2f +0x0c7:  mov    %esi,%eax
081a2b31 +0x0c9:  mov    %ebx,%edx
081a2b33 +0x0cb:  jmp    081a2da9 <+0x341>
081a2b38 +0x0d0:  movl   $0x2,-0x7c(%ebp)
081a2b3f +0x0d7:  lea    -0x84(%ebp),%eax
081a2b45 +0x0dd:  lea    -0x7c(%ebp),%edx
081a2b48 +0x0e0:  mov    %edx,0x8(%esp)
081a2b4c +0x0e4:  movl   $"ST_EVENT_GIFT_ITEM2",0x4(%esp)
081a2b54 +0x0ec:  mov    %eax,(%esp)
081a2b57 +0x0ef:  call   081a47a4 <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0x7ff>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0x7ff
081a2b5c +0x0f4:  sub    $0x4,%esp
081a2b5f +0x0f7:  lea    -0x84(%ebp),%eax
081a2b65 +0x0fd:  mov    %eax,0x4(%esp)
081a2b69 +0x101:  lea    -0x8c(%ebp),%eax
081a2b6f +0x107:  mov    %eax,(%esp)
081a2b72 +0x10a:  call   081a46fa <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0x755>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0x755
081a2b77 +0x10f:  mov    0x8(%ebp),%eax
081a2b7a +0x112:  lea    0x1c(%eax),%ecx
081a2b7d +0x115:  lea    -0x94(%ebp),%eax
081a2b83 +0x11b:  lea    -0x8c(%ebp),%edx
081a2b89 +0x121:  mov    %edx,0x8(%esp)
081a2b8d +0x125:  mov    %ecx,0x4(%esp)
081a2b91 +0x129:  mov    %eax,(%esp)
081a2b94 +0x12c:  call   081a4778 <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0x7d3>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0x7d3
081a2b99 +0x131:  sub    $0x4,%esp
081a2b9c +0x134:  lea    -0x8c(%ebp),%eax
081a2ba2 +0x13a:  mov    %eax,(%esp)
081a2ba5 +0x13d:  call   0817cc78 <_GLOBAL__I__ZN11Arad_ScriptC2Ev+0xbf>  ; global constructors keyed to Arad_Script::Arad_Script()+0xbf
081a2baa +0x142:  jmp    081a2bc7 <+0x15f>
081a2bac +0x144:  mov    %edx,%ebx
081a2bae +0x146:  mov    %eax,%esi
081a2bb0 +0x148:  lea    -0x8c(%ebp),%eax
081a2bb6 +0x14e:  mov    %eax,(%esp)
081a2bb9 +0x151:  call   0817cc78 <_GLOBAL__I__ZN11Arad_ScriptC2Ev+0xbf>  ; global constructors keyed to Arad_Script::Arad_Script()+0xbf
081a2bbe +0x156:  mov    %esi,%eax
081a2bc0 +0x158:  mov    %ebx,%edx
081a2bc2 +0x15a:  jmp    081a2da9 <+0x341>
081a2bc7 +0x15f:  movl   $0x3,-0x60(%ebp)
081a2bce +0x166:  lea    -0x68(%ebp),%eax
081a2bd1 +0x169:  lea    -0x60(%ebp),%edx
081a2bd4 +0x16c:  mov    %edx,0x8(%esp)
081a2bd8 +0x170:  movl   $"ST_EVENT_GIFT_ITEM3",0x4(%esp)
081a2be0 +0x178:  mov    %eax,(%esp)
081a2be3 +0x17b:  call   081a47a4 <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0x7ff>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0x7ff
081a2be8 +0x180:  sub    $0x4,%esp
081a2beb +0x183:  lea    -0x68(%ebp),%eax
081a2bee +0x186:  mov    %eax,0x4(%esp)
081a2bf2 +0x18a:  lea    -0x70(%ebp),%eax
081a2bf5 +0x18d:  mov    %eax,(%esp)
081a2bf8 +0x190:  call   081a46fa <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0x755>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0x755
081a2bfd +0x195:  mov    0x8(%ebp),%eax
081a2c00 +0x198:  lea    0x1c(%eax),%ecx
081a2c03 +0x19b:  lea    -0x78(%ebp),%eax
081a2c06 +0x19e:  lea    -0x70(%ebp),%edx
081a2c09 +0x1a1:  mov    %edx,0x8(%esp)
081a2c0d +0x1a5:  mov    %ecx,0x4(%esp)
081a2c11 +0x1a9:  mov    %eax,(%esp)
081a2c14 +0x1ac:  call   081a4778 <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0x7d3>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0x7d3
081a2c19 +0x1b1:  sub    $0x4,%esp
081a2c1c +0x1b4:  lea    -0x70(%ebp),%eax
081a2c1f +0x1b7:  mov    %eax,(%esp)
081a2c22 +0x1ba:  call   0817cc78 <_GLOBAL__I__ZN11Arad_ScriptC2Ev+0xbf>  ; global constructors keyed to Arad_Script::Arad_Script()+0xbf
081a2c27 +0x1bf:  jmp    081a2c41 <+0x1d9>
081a2c29 +0x1c1:  mov    %edx,%ebx
081a2c2b +0x1c3:  mov    %eax,%esi
081a2c2d +0x1c5:  lea    -0x70(%ebp),%eax
081a2c30 +0x1c8:  mov    %eax,(%esp)
081a2c33 +0x1cb:  call   0817cc78 <_GLOBAL__I__ZN11Arad_ScriptC2Ev+0xbf>  ; global constructors keyed to Arad_Script::Arad_Script()+0xbf
081a2c38 +0x1d0:  mov    %esi,%eax
081a2c3a +0x1d2:  mov    %ebx,%edx
081a2c3c +0x1d4:  jmp    081a2da9 <+0x341>
081a2c41 +0x1d9:  movl   $0x4,-0x44(%ebp)
081a2c48 +0x1e0:  lea    -0x4c(%ebp),%eax
081a2c4b +0x1e3:  lea    -0x44(%ebp),%edx
081a2c4e +0x1e6:  mov    %edx,0x8(%esp)
081a2c52 +0x1ea:  movl   $"ST_EVENT_GIFT_ITEM4",0x4(%esp)
081a2c5a +0x1f2:  mov    %eax,(%esp)
081a2c5d +0x1f5:  call   081a47a4 <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0x7ff>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0x7ff
081a2c62 +0x1fa:  sub    $0x4,%esp
081a2c65 +0x1fd:  lea    -0x4c(%ebp),%eax
081a2c68 +0x200:  mov    %eax,0x4(%esp)
081a2c6c +0x204:  lea    -0x54(%ebp),%eax
081a2c6f +0x207:  mov    %eax,(%esp)
081a2c72 +0x20a:  call   081a46fa <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0x755>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0x755
081a2c77 +0x20f:  mov    0x8(%ebp),%eax
081a2c7a +0x212:  lea    0x1c(%eax),%ecx
081a2c7d +0x215:  lea    -0x5c(%ebp),%eax
081a2c80 +0x218:  lea    -0x54(%ebp),%edx
081a2c83 +0x21b:  mov    %edx,0x8(%esp)
081a2c87 +0x21f:  mov    %ecx,0x4(%esp)
081a2c8b +0x223:  mov    %eax,(%esp)
081a2c8e +0x226:  call   081a4778 <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0x7d3>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0x7d3
081a2c93 +0x22b:  sub    $0x4,%esp
081a2c96 +0x22e:  lea    -0x54(%ebp),%eax
081a2c99 +0x231:  mov    %eax,(%esp)
081a2c9c +0x234:  call   0817cc78 <_GLOBAL__I__ZN11Arad_ScriptC2Ev+0xbf>  ; global constructors keyed to Arad_Script::Arad_Script()+0xbf
081a2ca1 +0x239:  jmp    081a2cbb <+0x253>
081a2ca3 +0x23b:  mov    %edx,%ebx
081a2ca5 +0x23d:  mov    %eax,%esi
081a2ca7 +0x23f:  lea    -0x54(%ebp),%eax
081a2caa +0x242:  mov    %eax,(%esp)
081a2cad +0x245:  call   0817cc78 <_GLOBAL__I__ZN11Arad_ScriptC2Ev+0xbf>  ; global constructors keyed to Arad_Script::Arad_Script()+0xbf
081a2cb2 +0x24a:  mov    %esi,%eax
081a2cb4 +0x24c:  mov    %ebx,%edx
081a2cb6 +0x24e:  jmp    081a2da9 <+0x341>
081a2cbb +0x253:  movl   $0x5,-0x28(%ebp)
081a2cc2 +0x25a:  lea    -0x30(%ebp),%eax
081a2cc5 +0x25d:  lea    -0x28(%ebp),%edx
081a2cc8 +0x260:  mov    %edx,0x8(%esp)
081a2ccc +0x264:  movl   $"ST_EVENT_GIFT_ITEM5",0x4(%esp)
081a2cd4 +0x26c:  mov    %eax,(%esp)
081a2cd7 +0x26f:  call   081a47a4 <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0x7ff>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0x7ff
081a2cdc +0x274:  sub    $0x4,%esp
081a2cdf +0x277:  lea    -0x30(%ebp),%eax
081a2ce2 +0x27a:  mov    %eax,0x4(%esp)
081a2ce6 +0x27e:  lea    -0x38(%ebp),%eax
081a2ce9 +0x281:  mov    %eax,(%esp)
081a2cec +0x284:  call   081a46fa <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0x755>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0x755
081a2cf1 +0x289:  mov    0x8(%ebp),%eax
081a2cf4 +0x28c:  lea    0x1c(%eax),%ecx
081a2cf7 +0x28f:  lea    -0x40(%ebp),%eax
081a2cfa +0x292:  lea    -0x38(%ebp),%edx
081a2cfd +0x295:  mov    %edx,0x8(%esp)
081a2d01 +0x299:  mov    %ecx,0x4(%esp)
081a2d05 +0x29d:  mov    %eax,(%esp)
081a2d08 +0x2a0:  call   081a4778 <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0x7d3>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0x7d3
081a2d0d +0x2a5:  sub    $0x4,%esp
081a2d10 +0x2a8:  lea    -0x38(%ebp),%eax
081a2d13 +0x2ab:  mov    %eax,(%esp)
081a2d16 +0x2ae:  call   0817cc78 <_GLOBAL__I__ZN11Arad_ScriptC2Ev+0xbf>  ; global constructors keyed to Arad_Script::Arad_Script()+0xbf
081a2d1b +0x2b3:  jmp    081a2d32 <+0x2ca>
081a2d1d +0x2b5:  mov    %edx,%ebx
081a2d1f +0x2b7:  mov    %eax,%esi
081a2d21 +0x2b9:  lea    -0x38(%ebp),%eax
081a2d24 +0x2bc:  mov    %eax,(%esp)
081a2d27 +0x2bf:  call   0817cc78 <_GLOBAL__I__ZN11Arad_ScriptC2Ev+0xbf>  ; global constructors keyed to Arad_Script::Arad_Script()+0xbf
081a2d2c +0x2c4:  mov    %esi,%eax
081a2d2e +0x2c6:  mov    %ebx,%edx
081a2d30 +0x2c8:  jmp    081a2da9 <+0x341>
081a2d32 +0x2ca:  movl   $0x6,-0xc(%ebp)
081a2d39 +0x2d1:  lea    -0x14(%ebp),%eax
081a2d3c +0x2d4:  lea    -0xc(%ebp),%edx
081a2d3f +0x2d7:  mov    %edx,0x8(%esp)
081a2d43 +0x2db:  movl   $"ST_EVENT_GIFT_ITEM6",0x4(%esp)
081a2d4b +0x2e3:  mov    %eax,(%esp)
081a2d4e +0x2e6:  call   081a47a4 <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0x7ff>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0x7ff
081a2d53 +0x2eb:  sub    $0x4,%esp
081a2d56 +0x2ee:  lea    -0x14(%ebp),%eax
081a2d59 +0x2f1:  mov    %eax,0x4(%esp)
081a2d5d +0x2f5:  lea    -0x1c(%ebp),%eax
081a2d60 +0x2f8:  mov    %eax,(%esp)
081a2d63 +0x2fb:  call   081a46fa <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0x755>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0x755
081a2d68 +0x300:  mov    0x8(%ebp),%eax
081a2d6b +0x303:  lea    0x1c(%eax),%ecx
081a2d6e +0x306:  lea    -0x24(%ebp),%eax
081a2d71 +0x309:  lea    -0x1c(%ebp),%edx
081a2d74 +0x30c:  mov    %edx,0x8(%esp)
081a2d78 +0x310:  mov    %ecx,0x4(%esp)
081a2d7c +0x314:  mov    %eax,(%esp)
081a2d7f +0x317:  call   081a4778 <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0x7d3>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0x7d3
081a2d84 +0x31c:  sub    $0x4,%esp
081a2d87 +0x31f:  lea    -0x1c(%ebp),%eax
081a2d8a +0x322:  mov    %eax,(%esp)
081a2d8d +0x325:  call   0817cc78 <_GLOBAL__I__ZN11Arad_ScriptC2Ev+0xbf>  ; global constructors keyed to Arad_Script::Arad_Script()+0xbf
081a2d92 +0x32a:  jmp    081a2ddf <+0x377>
081a2d94 +0x32c:  mov    %edx,%ebx
081a2d96 +0x32e:  mov    %eax,%esi
081a2d98 +0x330:  lea    -0x1c(%ebp),%eax
081a2d9b +0x333:  mov    %eax,(%esp)
081a2d9e +0x336:  call   0817cc78 <_GLOBAL__I__ZN11Arad_ScriptC2Ev+0xbf>  ; global constructors keyed to Arad_Script::Arad_Script()+0xbf
081a2da3 +0x33b:  mov    %esi,%eax
081a2da5 +0x33d:  mov    %ebx,%edx
081a2da7 +0x33f:  jmp    081a2da9 <+0x341>
081a2da9 +0x341:  mov    %edx,%ebx
081a2dab +0x343:  mov    %eax,%esi
081a2dad +0x345:  mov    0x8(%ebp),%eax
081a2db0 +0x348:  add    $0x1c,%eax
081a2db3 +0x34b:  mov    %eax,(%esp)
081a2db6 +0x34e:  call   0817cbd6 <_GLOBAL__I__ZN11Arad_ScriptC2Ev+0x1d>  ; global constructors keyed to Arad_Script::Arad_Script()+0x1d
081a2dbb +0x353:  mov    %esi,%eax
081a2dbd +0x355:  mov    %ebx,%edx
081a2dbf +0x357:  jmp    081a2dc1 <+0x359>
081a2dc1 +0x359:  mov    %edx,%ebx
081a2dc3 +0x35b:  mov    %eax,%esi
081a2dc5 +0x35d:  mov    0x8(%ebp),%eax
081a2dc8 +0x360:  add    $0x4,%eax
081a2dcb +0x363:  mov    %eax,(%esp)
081a2dce +0x366:  call   081a4288 <_GLOBAL__I__ZN17Arad_ScriptLoader4openEPKc+0x2e3>  ; global constructors keyed to Arad_ScriptLoader::open(char const*)+0x2e3
081a2dd3 +0x36b:  mov    %esi,%eax
081a2dd5 +0x36d:  mov    %ebx,%edx
081a2dd7 +0x36f:  mov    %eax,(%esp)
081a2dda +0x372:  call   08ae3750 <_Unwind_Resume>
081a2ddf +0x377:  lea    -0x8(%ebp),%esp
081a2de2 +0x37a:  add    $0x0,%esp
081a2de5 +0x37d:  pop    %ebx
081a2de6 +0x37e:  pop    %esi
081a2de7 +0x37f:  pop    %ebp
081a2de8 +0x380:  ret
081a2de9 +0x381:  nop
```

## 反编译 C

```c
// Arad_GiftItem_Set::Arad_GiftItem_Set @ 0x81a2a68

/* Arad_GiftItem_Set::Arad_GiftItem_Set() */

void __thiscall Arad_GiftItem_Set::Arad_GiftItem_Set(Arad_GiftItem_Set *this)

{
  pair local_b4 [8];
  pair<std::string_const,int> local_ac [8];
  char local_a4 [8];
  undefined4 local_9c;
  pair local_98 [8];
  pair<std::string_const,int> local_90 [8];
  char local_88 [8];
  undefined4 local_80;
  pair local_7c [8];
  pair<std::string_const,int> local_74 [8];
  char local_6c [8];
  undefined4 local_64;
  pair local_60 [8];
  pair<std::string_const,int> local_58 [8];
  char local_50 [8];
  undefined4 local_48;
  pair local_44 [8];
  pair<std::string_const,int> local_3c [8];
  char local_34 [8];
  undefined4 local_2c;
  pair local_28 [8];
  pair<std::string_const,int> local_20 [8];
  char local_18 [8];
  undefined4 local_10;
  
  Arad_ScriptLoader::Arad_ScriptLoader((Arad_ScriptLoader *)this);
  *(undefined ***)this = &PTR_open_08bad840;
  std::
  map<long_long,Arad_GiftItem_Set::Data,std::less<long_long>,std::allocator<std::pair<long_long_const,Arad_GiftItem_Set::Data>>>
  ::map((map<long_long,Arad_GiftItem_Set::Data,std::less<long_long>,std::allocator<std::pair<long_long_const,Arad_GiftItem_Set::Data>>>
         *)(this + 4));
                    /* try { // try from 081a2a9e to 081a2aa2 has its CatchHandler @ 081a2dc1 */
  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  ::map((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
         *)(this + 0x1c));
  local_9c = 1;
                    /* try { // try from 081a2ac8 to 081a2ae7 has its CatchHandler @ 081a2da9 */
  std::make_pair<char_const(&)[19],Arad_GiftItem_Set::ST_ITEM_KIND>
            (local_a4,(ST_ITEM_KIND *)"ST_EVENT_GIFT_ITEM");
  std::pair<std::string_const,int>::pair<char_const*,Arad_GiftItem_Set::ST_ITEM_KIND>
            (local_ac,local_a4);
                    /* try { // try from 081a2b05 to 081a2b09 has its CatchHandler @ 081a2b1d */
  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  ::insert(local_b4);
                    /* try { // try from 081a2b16 to 081a2b1a has its CatchHandler @ 081a2da9 */
  std::pair<std::string_const,int>::~pair(local_ac);
  local_80 = 2;
                    /* try { // try from 081a2b57 to 081a2b76 has its CatchHandler @ 081a2da9 */
  std::make_pair<char_const(&)[20],Arad_GiftItem_Set::ST_ITEM_KIND>
            (local_88,(ST_ITEM_KIND *)"ST_EVENT_GIFT_ITEM2");
  std::pair<std::string_const,int>::pair<char_const*,Arad_GiftItem_Set::ST_ITEM_KIND>
            (local_90,local_88);
                    /* try { // try from 081a2b94 to 081a2b98 has its CatchHandler @ 081a2bac */
  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  ::insert(local_98);
                    /* try { // try from 081a2ba5 to 081a2ba9 has its CatchHandler @ 081a2da9 */
  std::pair<std::string_const,int>::~pair(local_90);
  local_64 = 3;
                    /* try { // try from 081a2be3 to 081a2bfc has its CatchHandler @ 081a2da9 */
  std::make_pair<char_const(&)[20],Arad_GiftItem_Set::ST_ITEM_KIND>
            (local_6c,(ST_ITEM_KIND *)"ST_EVENT_GIFT_ITEM3");
  std::pair<std::string_const,int>::pair<char_const*,Arad_GiftItem_Set::ST_ITEM_KIND>
            (local_74,local_6c);
                    /* try { // try from 081a2c14 to 081a2c18 has its CatchHandler @ 081a2c29 */
  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  ::insert(local_7c);
                    /* try { // try from 081a2c22 to 081a2c26 has its CatchHandler @ 081a2da9 */
  std::pair<std::string_const,int>::~pair(local_74);
  local_48 = 4;
                    /* try { // try from 081a2c5d to 081a2c76 has its CatchHandler @ 081a2da9 */
  std::make_pair<char_const(&)[20],Arad_GiftItem_Set::ST_ITEM_KIND>
            (local_50,(ST_ITEM_KIND *)"ST_EVENT_GIFT_ITEM4");
  std::pair<std::string_const,int>::pair<char_const*,Arad_GiftItem_Set::ST_ITEM_KIND>
            (local_58,local_50);
                    /* try { // try from 081a2c8e to 081a2c92 has its CatchHandler @ 081a2ca3 */
  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  ::insert(local_60);
                    /* try { // try from 081a2c9c to 081a2ca0 has its CatchHandler @ 081a2da9 */
  std::pair<std::string_const,int>::~pair(local_58);
  local_2c = 5;
                    /* try { // try from 081a2cd7 to 081a2cf0 has its CatchHandler @ 081a2da9 */
  std::make_pair<char_const(&)[20],Arad_GiftItem_Set::ST_ITEM_KIND>
            (local_34,(ST_ITEM_KIND *)"ST_EVENT_GIFT_ITEM5");
  std::pair<std::string_const,int>::pair<char_const*,Arad_GiftItem_Set::ST_ITEM_KIND>
            (local_3c,local_34);
                    /* try { // try from 081a2d08 to 081a2d0c has its CatchHandler @ 081a2d1d */
  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  ::insert(local_44);
                    /* try { // try from 081a2d16 to 081a2d1a has its CatchHandler @ 081a2da9 */
  std::pair<std::string_const,int>::~pair(local_3c);
  local_10 = 6;
                    /* try { // try from 081a2d4e to 081a2d67 has its CatchHandler @ 081a2da9 */
  std::make_pair<char_const(&)[20],Arad_GiftItem_Set::ST_ITEM_KIND>
            (local_18,(ST_ITEM_KIND *)"ST_EVENT_GIFT_ITEM6");
  std::pair<std::string_const,int>::pair<char_const*,Arad_GiftItem_Set::ST_ITEM_KIND>
            (local_20,local_18);
                    /* try { // try from 081a2d7f to 081a2d83 has its CatchHandler @ 081a2d94 */
  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  ::insert(local_28);
                    /* try { // try from 081a2d8d to 081a2d91 has its CatchHandler @ 081a2da9 */
  std::pair<std::string_const,int>::~pair(local_20);
  return;
}
```
