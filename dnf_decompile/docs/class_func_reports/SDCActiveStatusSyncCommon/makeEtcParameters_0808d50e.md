# makeEtcParameters

`_ZN25SDCActiveStatusSyncCommon17makeEtcParametersE17ENUM_ACTIVESTATUSiRSt6vectorIiSaIiEE`

`SDCActiveStatusSyncCommon::makeEtcParameters(ENUM_ACTIVESTATUS, int, std::vector<int, std::allocator<int> >&)`

| 类 | 地址 |
|---|---|
| `SDCActiveStatusSyncCommon` | `0x0808d50e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0808d50e  _ZN25SDCActiveStatusSyncCommon17makeEtcParametersE17ENUM_ACTIVESTATUSiRSt6vectorIiSaIiEE
#           SDCActiveStatusSyncCommon::makeEtcParameters(ENUM_ACTIVESTATUS, int, std::vector<int, std::allocator<int> >&)
# range [0x0808d50e, 0x0808dc79]
0808d50e +0x000:  push   %ebp
0808d50f +0x001:  mov    %esp,%ebp
0808d511 +0x003:  sub    $0x98,%esp
0808d517 +0x009:  mov    0xc(%ebp),%eax
0808d51a +0x00c:  cmp    $0x11,%eax
0808d51d +0x00f:  ja     0808dc77 <+0x769>
0808d523 +0x015:  mov    &data#d898221a(.rodata)(,%eax,4),%eax
0808d52a +0x01c:  jmp    *%eax
0808d52c +0x01e:  mov    0xc(%ebp),%eax
0808d52f +0x021:  movl   $0x0,0xc(%esp)
0808d537 +0x029:  mov    0x10(%ebp),%edx
0808d53a +0x02c:  mov    %edx,0x8(%esp)
0808d53e +0x030:  mov    %eax,0x4(%esp)
0808d542 +0x034:  mov    0x8(%ebp),%eax
0808d545 +0x037:  mov    %eax,(%esp)
0808d548 +0x03a:  call   0808d43e <_ZN25SDCActiveStatusSyncCommon27getActiveStatusEtcParameterEiii>  ; SDCActiveStatusSyncCommon::getActiveStatusEtcParameter(int, int, int)
0808d54d +0x03f:  fnstcw -0x7a(%ebp)
0808d550 +0x042:  movzwl -0x7a(%ebp),%eax
0808d554 +0x046:  mov    $0xc,%ah
0808d556 +0x048:  mov    %ax,-0x7c(%ebp)
0808d55a +0x04c:  fldcw  -0x7c(%ebp)
0808d55d +0x04f:  fistpl -0x80(%ebp)
0808d560 +0x052:  fldcw  -0x7a(%ebp)
0808d563 +0x055:  mov    -0x80(%ebp),%eax
0808d566 +0x058:  mov    %eax,-0x6c(%ebp)
0808d569 +0x05b:  lea    -0x6c(%ebp),%eax
0808d56c +0x05e:  mov    %eax,0x4(%esp)
0808d570 +0x062:  mov    0x14(%ebp),%eax
0808d573 +0x065:  mov    %eax,(%esp)
0808d576 +0x068:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
0808d57b +0x06d:  mov    0xc(%ebp),%eax
0808d57e +0x070:  movl   $0x1,0xc(%esp)
0808d586 +0x078:  mov    0x10(%ebp),%edx
0808d589 +0x07b:  mov    %edx,0x8(%esp)
0808d58d +0x07f:  mov    %eax,0x4(%esp)
0808d591 +0x083:  mov    0x8(%ebp),%eax
0808d594 +0x086:  mov    %eax,(%esp)
0808d597 +0x089:  call   0808d43e <_ZN25SDCActiveStatusSyncCommon27getActiveStatusEtcParameterEiii>  ; SDCActiveStatusSyncCommon::getActiveStatusEtcParameter(int, int, int)
0808d59c +0x08e:  fnstcw -0x7a(%ebp)
0808d59f +0x091:  movzwl -0x7a(%ebp),%eax
0808d5a3 +0x095:  mov    $0xc,%ah
0808d5a5 +0x097:  mov    %ax,-0x7c(%ebp)
0808d5a9 +0x09b:  fldcw  -0x7c(%ebp)
0808d5ac +0x09e:  fistpl -0x80(%ebp)
0808d5af +0x0a1:  fldcw  -0x7a(%ebp)
0808d5b2 +0x0a4:  mov    -0x80(%ebp),%eax
0808d5b5 +0x0a7:  mov    %eax,-0x68(%ebp)
0808d5b8 +0x0aa:  lea    -0x68(%ebp),%eax
0808d5bb +0x0ad:  mov    %eax,0x4(%esp)
0808d5bf +0x0b1:  mov    0x14(%ebp),%eax
0808d5c2 +0x0b4:  mov    %eax,(%esp)
0808d5c5 +0x0b7:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
0808d5ca +0x0bc:  jmp    0808dc77 <+0x769>
0808d5cf +0x0c1:  mov    0xc(%ebp),%eax
0808d5d2 +0x0c4:  movl   $0x0,0xc(%esp)
0808d5da +0x0cc:  mov    0x10(%ebp),%edx
0808d5dd +0x0cf:  mov    %edx,0x8(%esp)
0808d5e1 +0x0d3:  mov    %eax,0x4(%esp)
0808d5e5 +0x0d7:  mov    0x8(%ebp),%eax
0808d5e8 +0x0da:  mov    %eax,(%esp)
0808d5eb +0x0dd:  call   0808d43e <_ZN25SDCActiveStatusSyncCommon27getActiveStatusEtcParameterEiii>  ; SDCActiveStatusSyncCommon::getActiveStatusEtcParameter(int, int, int)
0808d5f0 +0x0e2:  fnstcw -0x7a(%ebp)
0808d5f3 +0x0e5:  movzwl -0x7a(%ebp),%eax
0808d5f7 +0x0e9:  mov    $0xc,%ah
0808d5f9 +0x0eb:  mov    %ax,-0x7c(%ebp)
0808d5fd +0x0ef:  fldcw  -0x7c(%ebp)
0808d600 +0x0f2:  fistpl -0x80(%ebp)
0808d603 +0x0f5:  fldcw  -0x7a(%ebp)
0808d606 +0x0f8:  mov    -0x80(%ebp),%eax
0808d609 +0x0fb:  mov    %eax,-0x64(%ebp)
0808d60c +0x0fe:  lea    -0x64(%ebp),%eax
0808d60f +0x101:  mov    %eax,0x4(%esp)
0808d613 +0x105:  mov    0x14(%ebp),%eax
0808d616 +0x108:  mov    %eax,(%esp)
0808d619 +0x10b:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
0808d61e +0x110:  jmp    0808dc77 <+0x769>
0808d623 +0x115:  mov    0xc(%ebp),%eax
0808d626 +0x118:  movl   $0x0,0xc(%esp)
0808d62e +0x120:  mov    0x10(%ebp),%edx
0808d631 +0x123:  mov    %edx,0x8(%esp)
0808d635 +0x127:  mov    %eax,0x4(%esp)
0808d639 +0x12b:  mov    0x8(%ebp),%eax
0808d63c +0x12e:  mov    %eax,(%esp)
0808d63f +0x131:  call   0808d43e <_ZN25SDCActiveStatusSyncCommon27getActiveStatusEtcParameterEiii>  ; SDCActiveStatusSyncCommon::getActiveStatusEtcParameter(int, int, int)
0808d644 +0x136:  fnstcw -0x7a(%ebp)
0808d647 +0x139:  movzwl -0x7a(%ebp),%eax
0808d64b +0x13d:  mov    $0xc,%ah
0808d64d +0x13f:  mov    %ax,-0x7c(%ebp)
0808d651 +0x143:  fldcw  -0x7c(%ebp)
0808d654 +0x146:  fistpl -0x80(%ebp)
0808d657 +0x149:  fldcw  -0x7a(%ebp)
0808d65a +0x14c:  mov    -0x80(%ebp),%eax
0808d65d +0x14f:  mov    %eax,-0x60(%ebp)
0808d660 +0x152:  lea    -0x60(%ebp),%eax
0808d663 +0x155:  mov    %eax,0x4(%esp)
0808d667 +0x159:  mov    0x14(%ebp),%eax
0808d66a +0x15c:  mov    %eax,(%esp)
0808d66d +0x15f:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
0808d672 +0x164:  mov    0xc(%ebp),%eax
0808d675 +0x167:  movl   $0x1,0xc(%esp)
0808d67d +0x16f:  mov    0x10(%ebp),%edx
0808d680 +0x172:  mov    %edx,0x8(%esp)
0808d684 +0x176:  mov    %eax,0x4(%esp)
0808d688 +0x17a:  mov    0x8(%ebp),%eax
0808d68b +0x17d:  mov    %eax,(%esp)
0808d68e +0x180:  call   0808d43e <_ZN25SDCActiveStatusSyncCommon27getActiveStatusEtcParameterEiii>  ; SDCActiveStatusSyncCommon::getActiveStatusEtcParameter(int, int, int)
0808d693 +0x185:  fnstcw -0x7a(%ebp)
0808d696 +0x188:  movzwl -0x7a(%ebp),%eax
0808d69a +0x18c:  mov    $0xc,%ah
0808d69c +0x18e:  mov    %ax,-0x7c(%ebp)
0808d6a0 +0x192:  fldcw  -0x7c(%ebp)
0808d6a3 +0x195:  fistpl -0x80(%ebp)
0808d6a6 +0x198:  fldcw  -0x7a(%ebp)
0808d6a9 +0x19b:  mov    -0x80(%ebp),%eax
0808d6ac +0x19e:  mov    %eax,-0x5c(%ebp)
0808d6af +0x1a1:  lea    -0x5c(%ebp),%eax
0808d6b2 +0x1a4:  mov    %eax,0x4(%esp)
0808d6b6 +0x1a8:  mov    0x14(%ebp),%eax
0808d6b9 +0x1ab:  mov    %eax,(%esp)
0808d6bc +0x1ae:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
0808d6c1 +0x1b3:  mov    0xc(%ebp),%eax
0808d6c4 +0x1b6:  movl   $0x2,0xc(%esp)
0808d6cc +0x1be:  mov    0x10(%ebp),%edx
0808d6cf +0x1c1:  mov    %edx,0x8(%esp)
0808d6d3 +0x1c5:  mov    %eax,0x4(%esp)
0808d6d7 +0x1c9:  mov    0x8(%ebp),%eax
0808d6da +0x1cc:  mov    %eax,(%esp)
0808d6dd +0x1cf:  call   0808d43e <_ZN25SDCActiveStatusSyncCommon27getActiveStatusEtcParameterEiii>  ; SDCActiveStatusSyncCommon::getActiveStatusEtcParameter(int, int, int)
0808d6e2 +0x1d4:  fnstcw -0x7a(%ebp)
0808d6e5 +0x1d7:  movzwl -0x7a(%ebp),%eax
0808d6e9 +0x1db:  mov    $0xc,%ah
0808d6eb +0x1dd:  mov    %ax,-0x7c(%ebp)
0808d6ef +0x1e1:  fldcw  -0x7c(%ebp)
0808d6f2 +0x1e4:  fistpl -0x80(%ebp)
0808d6f5 +0x1e7:  fldcw  -0x7a(%ebp)
0808d6f8 +0x1ea:  mov    -0x80(%ebp),%eax
0808d6fb +0x1ed:  mov    %eax,-0x58(%ebp)
0808d6fe +0x1f0:  lea    -0x58(%ebp),%eax
0808d701 +0x1f3:  mov    %eax,0x4(%esp)
0808d705 +0x1f7:  mov    0x14(%ebp),%eax
0808d708 +0x1fa:  mov    %eax,(%esp)
0808d70b +0x1fd:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
0808d710 +0x202:  mov    0xc(%ebp),%eax
0808d713 +0x205:  movl   $0x3,0xc(%esp)
0808d71b +0x20d:  mov    0x10(%ebp),%edx
0808d71e +0x210:  mov    %edx,0x8(%esp)
0808d722 +0x214:  mov    %eax,0x4(%esp)
0808d726 +0x218:  mov    0x8(%ebp),%eax
0808d729 +0x21b:  mov    %eax,(%esp)
0808d72c +0x21e:  call   0808d43e <_ZN25SDCActiveStatusSyncCommon27getActiveStatusEtcParameterEiii>  ; SDCActiveStatusSyncCommon::getActiveStatusEtcParameter(int, int, int)
0808d731 +0x223:  fnstcw -0x7a(%ebp)
0808d734 +0x226:  movzwl -0x7a(%ebp),%eax
0808d738 +0x22a:  mov    $0xc,%ah
0808d73a +0x22c:  mov    %ax,-0x7c(%ebp)
0808d73e +0x230:  fldcw  -0x7c(%ebp)
0808d741 +0x233:  fistpl -0x80(%ebp)
0808d744 +0x236:  fldcw  -0x7a(%ebp)
0808d747 +0x239:  mov    -0x80(%ebp),%eax
0808d74a +0x23c:  mov    %eax,-0x54(%ebp)
0808d74d +0x23f:  lea    -0x54(%ebp),%eax
0808d750 +0x242:  mov    %eax,0x4(%esp)
0808d754 +0x246:  mov    0x14(%ebp),%eax
0808d757 +0x249:  mov    %eax,(%esp)
0808d75a +0x24c:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
0808d75f +0x251:  jmp    0808dc77 <+0x769>
0808d764 +0x256:  mov    0xc(%ebp),%eax
0808d767 +0x259:  movl   $0x0,0xc(%esp)
0808d76f +0x261:  mov    0x10(%ebp),%edx
0808d772 +0x264:  mov    %edx,0x8(%esp)
0808d776 +0x268:  mov    %eax,0x4(%esp)
0808d77a +0x26c:  mov    0x8(%ebp),%eax
0808d77d +0x26f:  mov    %eax,(%esp)
0808d780 +0x272:  call   0808d43e <_ZN25SDCActiveStatusSyncCommon27getActiveStatusEtcParameterEiii>  ; SDCActiveStatusSyncCommon::getActiveStatusEtcParameter(int, int, int)
0808d785 +0x277:  fnstcw -0x7a(%ebp)
0808d788 +0x27a:  movzwl -0x7a(%ebp),%eax
0808d78c +0x27e:  mov    $0xc,%ah
0808d78e +0x280:  mov    %ax,-0x7c(%ebp)
0808d792 +0x284:  fldcw  -0x7c(%ebp)
0808d795 +0x287:  fistpl -0x80(%ebp)
0808d798 +0x28a:  fldcw  -0x7a(%ebp)
0808d79b +0x28d:  mov    -0x80(%ebp),%eax
0808d79e +0x290:  mov    %eax,-0x50(%ebp)
0808d7a1 +0x293:  lea    -0x50(%ebp),%eax
0808d7a4 +0x296:  mov    %eax,0x4(%esp)
0808d7a8 +0x29a:  mov    0x14(%ebp),%eax
0808d7ab +0x29d:  mov    %eax,(%esp)
0808d7ae +0x2a0:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
0808d7b3 +0x2a5:  mov    0xc(%ebp),%eax
0808d7b6 +0x2a8:  movl   $0x1,0xc(%esp)
0808d7be +0x2b0:  mov    0x10(%ebp),%edx
0808d7c1 +0x2b3:  mov    %edx,0x8(%esp)
0808d7c5 +0x2b7:  mov    %eax,0x4(%esp)
0808d7c9 +0x2bb:  mov    0x8(%ebp),%eax
0808d7cc +0x2be:  mov    %eax,(%esp)
0808d7cf +0x2c1:  call   0808d43e <_ZN25SDCActiveStatusSyncCommon27getActiveStatusEtcParameterEiii>  ; SDCActiveStatusSyncCommon::getActiveStatusEtcParameter(int, int, int)
0808d7d4 +0x2c6:  fnstcw -0x7a(%ebp)
0808d7d7 +0x2c9:  movzwl -0x7a(%ebp),%eax
0808d7db +0x2cd:  mov    $0xc,%ah
0808d7dd +0x2cf:  mov    %ax,-0x7c(%ebp)
0808d7e1 +0x2d3:  fldcw  -0x7c(%ebp)
0808d7e4 +0x2d6:  fistpl -0x80(%ebp)
0808d7e7 +0x2d9:  fldcw  -0x7a(%ebp)
0808d7ea +0x2dc:  mov    -0x80(%ebp),%eax
0808d7ed +0x2df:  mov    %eax,-0x4c(%ebp)
0808d7f0 +0x2e2:  lea    -0x4c(%ebp),%eax
0808d7f3 +0x2e5:  mov    %eax,0x4(%esp)
0808d7f7 +0x2e9:  mov    0x14(%ebp),%eax
0808d7fa +0x2ec:  mov    %eax,(%esp)
0808d7fd +0x2ef:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
0808d802 +0x2f4:  jmp    0808dc77 <+0x769>
0808d807 +0x2f9:  mov    0xc(%ebp),%eax
0808d80a +0x2fc:  movl   $0x0,0xc(%esp)
0808d812 +0x304:  mov    0x10(%ebp),%edx
0808d815 +0x307:  mov    %edx,0x8(%esp)
0808d819 +0x30b:  mov    %eax,0x4(%esp)
0808d81d +0x30f:  mov    0x8(%ebp),%eax
0808d820 +0x312:  mov    %eax,(%esp)
0808d823 +0x315:  call   0808d43e <_ZN25SDCActiveStatusSyncCommon27getActiveStatusEtcParameterEiii>  ; SDCActiveStatusSyncCommon::getActiveStatusEtcParameter(int, int, int)
0808d828 +0x31a:  fnstcw -0x7a(%ebp)
0808d82b +0x31d:  movzwl -0x7a(%ebp),%eax
0808d82f +0x321:  mov    $0xc,%ah
0808d831 +0x323:  mov    %ax,-0x7c(%ebp)
0808d835 +0x327:  fldcw  -0x7c(%ebp)
0808d838 +0x32a:  fistpl -0x80(%ebp)
0808d83b +0x32d:  fldcw  -0x7a(%ebp)
0808d83e +0x330:  mov    -0x80(%ebp),%eax
0808d841 +0x333:  mov    %eax,-0x48(%ebp)
0808d844 +0x336:  lea    -0x48(%ebp),%eax
0808d847 +0x339:  mov    %eax,0x4(%esp)
0808d84b +0x33d:  mov    0x14(%ebp),%eax
0808d84e +0x340:  mov    %eax,(%esp)
0808d851 +0x343:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
0808d856 +0x348:  jmp    0808dc77 <+0x769>
0808d85b +0x34d:  mov    0xc(%ebp),%eax
0808d85e +0x350:  movl   $0x0,0xc(%esp)
0808d866 +0x358:  mov    0x10(%ebp),%edx
0808d869 +0x35b:  mov    %edx,0x8(%esp)
0808d86d +0x35f:  mov    %eax,0x4(%esp)
0808d871 +0x363:  mov    0x8(%ebp),%eax
0808d874 +0x366:  mov    %eax,(%esp)
0808d877 +0x369:  call   0808d43e <_ZN25SDCActiveStatusSyncCommon27getActiveStatusEtcParameterEiii>  ; SDCActiveStatusSyncCommon::getActiveStatusEtcParameter(int, int, int)
0808d87c +0x36e:  fnstcw -0x7a(%ebp)
0808d87f +0x371:  movzwl -0x7a(%ebp),%eax
0808d883 +0x375:  mov    $0xc,%ah
0808d885 +0x377:  mov    %ax,-0x7c(%ebp)
0808d889 +0x37b:  fldcw  -0x7c(%ebp)
0808d88c +0x37e:  fistpl -0x80(%ebp)
0808d88f +0x381:  fldcw  -0x7a(%ebp)
0808d892 +0x384:  mov    -0x80(%ebp),%eax
0808d895 +0x387:  mov    %eax,-0x44(%ebp)
0808d898 +0x38a:  lea    -0x44(%ebp),%eax
0808d89b +0x38d:  mov    %eax,0x4(%esp)
0808d89f +0x391:  mov    0x14(%ebp),%eax
0808d8a2 +0x394:  mov    %eax,(%esp)
0808d8a5 +0x397:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
0808d8aa +0x39c:  jmp    0808dc77 <+0x769>
0808d8af +0x3a1:  mov    0xc(%ebp),%eax
0808d8b2 +0x3a4:  movl   $0x0,0xc(%esp)
0808d8ba +0x3ac:  mov    0x10(%ebp),%edx
0808d8bd +0x3af:  mov    %edx,0x8(%esp)
0808d8c1 +0x3b3:  mov    %eax,0x4(%esp)
0808d8c5 +0x3b7:  mov    0x8(%ebp),%eax
0808d8c8 +0x3ba:  mov    %eax,(%esp)
0808d8cb +0x3bd:  call   0808d43e <_ZN25SDCActiveStatusSyncCommon27getActiveStatusEtcParameterEiii>  ; SDCActiveStatusSyncCommon::getActiveStatusEtcParameter(int, int, int)
0808d8d0 +0x3c2:  fnstcw -0x7a(%ebp)
0808d8d3 +0x3c5:  movzwl -0x7a(%ebp),%eax
0808d8d7 +0x3c9:  mov    $0xc,%ah
0808d8d9 +0x3cb:  mov    %ax,-0x7c(%ebp)
0808d8dd +0x3cf:  fldcw  -0x7c(%ebp)
0808d8e0 +0x3d2:  fistpl -0x80(%ebp)
0808d8e3 +0x3d5:  fldcw  -0x7a(%ebp)
0808d8e6 +0x3d8:  mov    -0x80(%ebp),%eax
0808d8e9 +0x3db:  mov    %eax,-0x40(%ebp)
0808d8ec +0x3de:  lea    -0x40(%ebp),%eax
0808d8ef +0x3e1:  mov    %eax,0x4(%esp)
0808d8f3 +0x3e5:  mov    0x14(%ebp),%eax
0808d8f6 +0x3e8:  mov    %eax,(%esp)
0808d8f9 +0x3eb:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
0808d8fe +0x3f0:  mov    0xc(%ebp),%eax
0808d901 +0x3f3:  movl   $0x1,0xc(%esp)
0808d909 +0x3fb:  mov    0x10(%ebp),%edx
0808d90c +0x3fe:  mov    %edx,0x8(%esp)
0808d910 +0x402:  mov    %eax,0x4(%esp)
0808d914 +0x406:  mov    0x8(%ebp),%eax
0808d917 +0x409:  mov    %eax,(%esp)
0808d91a +0x40c:  call   0808d43e <_ZN25SDCActiveStatusSyncCommon27getActiveStatusEtcParameterEiii>  ; SDCActiveStatusSyncCommon::getActiveStatusEtcParameter(int, int, int)
0808d91f +0x411:  fnstcw -0x7a(%ebp)
0808d922 +0x414:  movzwl -0x7a(%ebp),%eax
0808d926 +0x418:  mov    $0xc,%ah
0808d928 +0x41a:  mov    %ax,-0x7c(%ebp)
0808d92c +0x41e:  fldcw  -0x7c(%ebp)
0808d92f +0x421:  fistpl -0x80(%ebp)
0808d932 +0x424:  fldcw  -0x7a(%ebp)
0808d935 +0x427:  mov    -0x80(%ebp),%eax
0808d938 +0x42a:  mov    %eax,-0x3c(%ebp)
0808d93b +0x42d:  lea    -0x3c(%ebp),%eax
0808d93e +0x430:  mov    %eax,0x4(%esp)
0808d942 +0x434:  mov    0x14(%ebp),%eax
0808d945 +0x437:  mov    %eax,(%esp)
0808d948 +0x43a:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
0808d94d +0x43f:  movl   $0x1,-0x38(%ebp)
0808d954 +0x446:  lea    -0x38(%ebp),%eax
0808d957 +0x449:  mov    %eax,0x4(%esp)
0808d95b +0x44d:  mov    0x14(%ebp),%eax
0808d95e +0x450:  mov    %eax,(%esp)
0808d961 +0x453:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
0808d966 +0x458:  movl   $0xbb8,-0x34(%ebp)
0808d96d +0x45f:  lea    -0x34(%ebp),%eax
0808d970 +0x462:  mov    %eax,0x4(%esp)
0808d974 +0x466:  mov    0x14(%ebp),%eax
0808d977 +0x469:  mov    %eax,(%esp)
0808d97a +0x46c:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
0808d97f +0x471:  jmp    0808dc77 <+0x769>
0808d984 +0x476:  mov    0xc(%ebp),%eax
0808d987 +0x479:  movl   $0x0,0xc(%esp)
0808d98f +0x481:  mov    0x10(%ebp),%edx
0808d992 +0x484:  mov    %edx,0x8(%esp)
0808d996 +0x488:  mov    %eax,0x4(%esp)
0808d99a +0x48c:  mov    0x8(%ebp),%eax
0808d99d +0x48f:  mov    %eax,(%esp)
0808d9a0 +0x492:  call   0808d43e <_ZN25SDCActiveStatusSyncCommon27getActiveStatusEtcParameterEiii>  ; SDCActiveStatusSyncCommon::getActiveStatusEtcParameter(int, int, int)
0808d9a5 +0x497:  fnstcw -0x7a(%ebp)
0808d9a8 +0x49a:  movzwl -0x7a(%ebp),%eax
0808d9ac +0x49e:  mov    $0xc,%ah
0808d9ae +0x4a0:  mov    %ax,-0x7c(%ebp)
0808d9b2 +0x4a4:  fldcw  -0x7c(%ebp)
0808d9b5 +0x4a7:  fistpl -0x80(%ebp)
0808d9b8 +0x4aa:  fldcw  -0x7a(%ebp)
0808d9bb +0x4ad:  mov    -0x80(%ebp),%eax
0808d9be +0x4b0:  mov    %eax,-0x30(%ebp)
0808d9c1 +0x4b3:  lea    -0x30(%ebp),%eax
0808d9c4 +0x4b6:  mov    %eax,0x4(%esp)
0808d9c8 +0x4ba:  mov    0x14(%ebp),%eax
0808d9cb +0x4bd:  mov    %eax,(%esp)
0808d9ce +0x4c0:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
0808d9d3 +0x4c5:  jmp    0808dc77 <+0x769>
0808d9d8 +0x4ca:  mov    0xc(%ebp),%eax
0808d9db +0x4cd:  movl   $0x0,0xc(%esp)
0808d9e3 +0x4d5:  mov    0x10(%ebp),%edx
0808d9e6 +0x4d8:  mov    %edx,0x8(%esp)
0808d9ea +0x4dc:  mov    %eax,0x4(%esp)
0808d9ee +0x4e0:  mov    0x8(%ebp),%eax
0808d9f1 +0x4e3:  mov    %eax,(%esp)
0808d9f4 +0x4e6:  call   0808d43e <_ZN25SDCActiveStatusSyncCommon27getActiveStatusEtcParameterEiii>  ; SDCActiveStatusSyncCommon::getActiveStatusEtcParameter(int, int, int)
0808d9f9 +0x4eb:  fnstcw -0x7a(%ebp)
0808d9fc +0x4ee:  movzwl -0x7a(%ebp),%eax
0808da00 +0x4f2:  mov    $0xc,%ah
0808da02 +0x4f4:  mov    %ax,-0x7c(%ebp)
0808da06 +0x4f8:  fldcw  -0x7c(%ebp)
0808da09 +0x4fb:  fistpl -0x80(%ebp)
0808da0c +0x4fe:  fldcw  -0x7a(%ebp)
0808da0f +0x501:  mov    -0x80(%ebp),%eax
0808da12 +0x504:  mov    %eax,-0x2c(%ebp)
0808da15 +0x507:  lea    -0x2c(%ebp),%eax
0808da18 +0x50a:  mov    %eax,0x4(%esp)
0808da1c +0x50e:  mov    0x14(%ebp),%eax
0808da1f +0x511:  mov    %eax,(%esp)
0808da22 +0x514:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
0808da27 +0x519:  jmp    0808dc77 <+0x769>
0808da2c +0x51e:  mov    0xc(%ebp),%eax
0808da2f +0x521:  movl   $0x0,0xc(%esp)
0808da37 +0x529:  mov    0x10(%ebp),%edx
0808da3a +0x52c:  mov    %edx,0x8(%esp)
0808da3e +0x530:  mov    %eax,0x4(%esp)
0808da42 +0x534:  mov    0x8(%ebp),%eax
0808da45 +0x537:  mov    %eax,(%esp)
0808da48 +0x53a:  call   0808d43e <_ZN25SDCActiveStatusSyncCommon27getActiveStatusEtcParameterEiii>  ; SDCActiveStatusSyncCommon::getActiveStatusEtcParameter(int, int, int)
0808da4d +0x53f:  fnstcw -0x7a(%ebp)
0808da50 +0x542:  movzwl -0x7a(%ebp),%eax
0808da54 +0x546:  mov    $0xc,%ah
0808da56 +0x548:  mov    %ax,-0x7c(%ebp)
0808da5a +0x54c:  fldcw  -0x7c(%ebp)
0808da5d +0x54f:  fistpl -0x80(%ebp)
0808da60 +0x552:  fldcw  -0x7a(%ebp)
0808da63 +0x555:  mov    -0x80(%ebp),%eax
0808da66 +0x558:  mov    %eax,-0x28(%ebp)
0808da69 +0x55b:  lea    -0x28(%ebp),%eax
0808da6c +0x55e:  mov    %eax,0x4(%esp)
0808da70 +0x562:  mov    0x14(%ebp),%eax
0808da73 +0x565:  mov    %eax,(%esp)
0808da76 +0x568:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
0808da7b +0x56d:  mov    0xc(%ebp),%eax
0808da7e +0x570:  movl   $0x1,0xc(%esp)
0808da86 +0x578:  mov    0x10(%ebp),%edx
0808da89 +0x57b:  mov    %edx,0x8(%esp)
0808da8d +0x57f:  mov    %eax,0x4(%esp)
0808da91 +0x583:  mov    0x8(%ebp),%eax
0808da94 +0x586:  mov    %eax,(%esp)
0808da97 +0x589:  call   0808d43e <_ZN25SDCActiveStatusSyncCommon27getActiveStatusEtcParameterEiii>  ; SDCActiveStatusSyncCommon::getActiveStatusEtcParameter(int, int, int)
0808da9c +0x58e:  fnstcw -0x7a(%ebp)
0808da9f +0x591:  movzwl -0x7a(%ebp),%eax
0808daa3 +0x595:  mov    $0xc,%ah
0808daa5 +0x597:  mov    %ax,-0x7c(%ebp)
0808daa9 +0x59b:  fldcw  -0x7c(%ebp)
0808daac +0x59e:  fistpl -0x80(%ebp)
0808daaf +0x5a1:  fldcw  -0x7a(%ebp)
0808dab2 +0x5a4:  mov    -0x80(%ebp),%eax
0808dab5 +0x5a7:  mov    %eax,-0x24(%ebp)
0808dab8 +0x5aa:  lea    -0x24(%ebp),%eax
0808dabb +0x5ad:  mov    %eax,0x4(%esp)
0808dabf +0x5b1:  mov    0x14(%ebp),%eax
0808dac2 +0x5b4:  mov    %eax,(%esp)
0808dac5 +0x5b7:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
0808daca +0x5bc:  jmp    0808dc77 <+0x769>
0808dacf +0x5c1:  mov    0xc(%ebp),%eax
0808dad2 +0x5c4:  movl   $0x0,0xc(%esp)
0808dada +0x5cc:  mov    0x10(%ebp),%edx
0808dadd +0x5cf:  mov    %edx,0x8(%esp)
0808dae1 +0x5d3:  mov    %eax,0x4(%esp)
0808dae5 +0x5d7:  mov    0x8(%ebp),%eax
0808dae8 +0x5da:  mov    %eax,(%esp)
0808daeb +0x5dd:  call   0808d43e <_ZN25SDCActiveStatusSyncCommon27getActiveStatusEtcParameterEiii>  ; SDCActiveStatusSyncCommon::getActiveStatusEtcParameter(int, int, int)
0808daf0 +0x5e2:  fnstcw -0x7a(%ebp)
0808daf3 +0x5e5:  movzwl -0x7a(%ebp),%eax
0808daf7 +0x5e9:  mov    $0xc,%ah
0808daf9 +0x5eb:  mov    %ax,-0x7c(%ebp)
0808dafd +0x5ef:  fldcw  -0x7c(%ebp)
0808db00 +0x5f2:  fistpl -0x80(%ebp)
0808db03 +0x5f5:  fldcw  -0x7a(%ebp)
0808db06 +0x5f8:  mov    -0x80(%ebp),%eax
0808db09 +0x5fb:  mov    %eax,-0x20(%ebp)
0808db0c +0x5fe:  lea    -0x20(%ebp),%eax
0808db0f +0x601:  mov    %eax,0x4(%esp)
0808db13 +0x605:  mov    0x14(%ebp),%eax
0808db16 +0x608:  mov    %eax,(%esp)
0808db19 +0x60b:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
0808db1e +0x610:  mov    0xc(%ebp),%eax
0808db21 +0x613:  movl   $0x1,0xc(%esp)
0808db29 +0x61b:  mov    0x10(%ebp),%edx
0808db2c +0x61e:  mov    %edx,0x8(%esp)
0808db30 +0x622:  mov    %eax,0x4(%esp)
0808db34 +0x626:  mov    0x8(%ebp),%eax
0808db37 +0x629:  mov    %eax,(%esp)
0808db3a +0x62c:  call   0808d43e <_ZN25SDCActiveStatusSyncCommon27getActiveStatusEtcParameterEiii>  ; SDCActiveStatusSyncCommon::getActiveStatusEtcParameter(int, int, int)
0808db3f +0x631:  fnstcw -0x7a(%ebp)
0808db42 +0x634:  movzwl -0x7a(%ebp),%eax
0808db46 +0x638:  mov    $0xc,%ah
0808db48 +0x63a:  mov    %ax,-0x7c(%ebp)
0808db4c +0x63e:  fldcw  -0x7c(%ebp)
0808db4f +0x641:  fistpl -0x80(%ebp)
0808db52 +0x644:  fldcw  -0x7a(%ebp)
0808db55 +0x647:  mov    -0x80(%ebp),%eax
0808db58 +0x64a:  mov    %eax,-0x1c(%ebp)
0808db5b +0x64d:  lea    -0x1c(%ebp),%eax
0808db5e +0x650:  mov    %eax,0x4(%esp)
0808db62 +0x654:  mov    0x14(%ebp),%eax
0808db65 +0x657:  mov    %eax,(%esp)
0808db68 +0x65a:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
0808db6d +0x65f:  mov    0xc(%ebp),%eax
0808db70 +0x662:  movl   $0x2,0xc(%esp)
0808db78 +0x66a:  mov    0x10(%ebp),%edx
0808db7b +0x66d:  mov    %edx,0x8(%esp)
0808db7f +0x671:  mov    %eax,0x4(%esp)
0808db83 +0x675:  mov    0x8(%ebp),%eax
0808db86 +0x678:  mov    %eax,(%esp)
0808db89 +0x67b:  call   0808d43e <_ZN25SDCActiveStatusSyncCommon27getActiveStatusEtcParameterEiii>  ; SDCActiveStatusSyncCommon::getActiveStatusEtcParameter(int, int, int)
0808db8e +0x680:  fnstcw -0x7a(%ebp)
0808db91 +0x683:  movzwl -0x7a(%ebp),%eax
0808db95 +0x687:  mov    $0xc,%ah
0808db97 +0x689:  mov    %ax,-0x7c(%ebp)
0808db9b +0x68d:  fldcw  -0x7c(%ebp)
0808db9e +0x690:  fistpl -0x80(%ebp)
0808dba1 +0x693:  fldcw  -0x7a(%ebp)
0808dba4 +0x696:  mov    -0x80(%ebp),%eax
0808dba7 +0x699:  mov    %eax,-0x18(%ebp)
0808dbaa +0x69c:  lea    -0x18(%ebp),%eax
0808dbad +0x69f:  mov    %eax,0x4(%esp)
0808dbb1 +0x6a3:  mov    0x14(%ebp),%eax
0808dbb4 +0x6a6:  mov    %eax,(%esp)
0808dbb7 +0x6a9:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
0808dbbc +0x6ae:  mov    0xc(%ebp),%eax
0808dbbf +0x6b1:  movl   $0x3,0xc(%esp)
0808dbc7 +0x6b9:  mov    0x10(%ebp),%edx
0808dbca +0x6bc:  mov    %edx,0x8(%esp)
0808dbce +0x6c0:  mov    %eax,0x4(%esp)
0808dbd2 +0x6c4:  mov    0x8(%ebp),%eax
0808dbd5 +0x6c7:  mov    %eax,(%esp)
0808dbd8 +0x6ca:  call   0808d43e <_ZN25SDCActiveStatusSyncCommon27getActiveStatusEtcParameterEiii>  ; SDCActiveStatusSyncCommon::getActiveStatusEtcParameter(int, int, int)
0808dbdd +0x6cf:  fnstcw -0x7a(%ebp)
0808dbe0 +0x6d2:  movzwl -0x7a(%ebp),%eax
0808dbe4 +0x6d6:  mov    $0xc,%ah
0808dbe6 +0x6d8:  mov    %ax,-0x7c(%ebp)
0808dbea +0x6dc:  fldcw  -0x7c(%ebp)
0808dbed +0x6df:  fistpl -0x80(%ebp)
0808dbf0 +0x6e2:  fldcw  -0x7a(%ebp)
0808dbf3 +0x6e5:  mov    -0x80(%ebp),%eax
0808dbf6 +0x6e8:  mov    %eax,-0x14(%ebp)
0808dbf9 +0x6eb:  lea    -0x14(%ebp),%eax
0808dbfc +0x6ee:  mov    %eax,0x4(%esp)
0808dc00 +0x6f2:  mov    0x14(%ebp),%eax
0808dc03 +0x6f5:  mov    %eax,(%esp)
0808dc06 +0x6f8:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
0808dc0b +0x6fd:  jmp    0808dc77 <+0x769>
0808dc0d +0x6ff:  movl   $0x1,-0x10(%ebp)
0808dc14 +0x706:  lea    -0x10(%ebp),%eax
0808dc17 +0x709:  mov    %eax,0x4(%esp)
0808dc1b +0x70d:  mov    0x14(%ebp),%eax
0808dc1e +0x710:  mov    %eax,(%esp)
0808dc21 +0x713:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
0808dc26 +0x718:  jmp    0808dc77 <+0x769>
0808dc28 +0x71a:  mov    0xc(%ebp),%eax
0808dc2b +0x71d:  movl   $0x0,0xc(%esp)
0808dc33 +0x725:  mov    0x10(%ebp),%edx
0808dc36 +0x728:  mov    %edx,0x8(%esp)
0808dc3a +0x72c:  mov    %eax,0x4(%esp)
0808dc3e +0x730:  mov    0x8(%ebp),%eax
0808dc41 +0x733:  mov    %eax,(%esp)
0808dc44 +0x736:  call   0808d43e <_ZN25SDCActiveStatusSyncCommon27getActiveStatusEtcParameterEiii>  ; SDCActiveStatusSyncCommon::getActiveStatusEtcParameter(int, int, int)
0808dc49 +0x73b:  fnstcw -0x7a(%ebp)
0808dc4c +0x73e:  movzwl -0x7a(%ebp),%eax
0808dc50 +0x742:  mov    $0xc,%ah
0808dc52 +0x744:  mov    %ax,-0x7c(%ebp)
0808dc56 +0x748:  fldcw  -0x7c(%ebp)
0808dc59 +0x74b:  fistpl -0x80(%ebp)
0808dc5c +0x74e:  fldcw  -0x7a(%ebp)
0808dc5f +0x751:  mov    -0x80(%ebp),%eax
0808dc62 +0x754:  mov    %eax,-0xc(%ebp)
0808dc65 +0x757:  lea    -0xc(%ebp),%eax
0808dc68 +0x75a:  mov    %eax,0x4(%esp)
0808dc6c +0x75e:  mov    0x14(%ebp),%eax
0808dc6f +0x761:  mov    %eax,(%esp)
0808dc72 +0x764:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
0808dc77 +0x769:  leave
0808dc78 +0x76a:  ret
0808dc79 +0x76b:  nop
```

## 反编译 C

```c
// SDCActiveStatusSyncCommon::makeEtcParameters @ 0x808d50e

/* SDCActiveStatusSyncCommon::makeEtcParameters(ENUM_ACTIVESTATUS, int, std::vector<int,
   std::allocator<int> >&) */

void __thiscall
SDCActiveStatusSyncCommon::makeEtcParameters
          (SDCActiveStatusSyncCommon *this,int param_2,int param_3,
          vector<int,std::allocator<int>> *param_4)

{
  longdouble lVar1;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40 [4];
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18 [5];
  
  switch(param_2) {
  case 0:
    lVar1 = (longdouble)getActiveStatusEtcParameter(this,param_2,param_3,0);
    local_70 = (int)ROUND(lVar1);
    std::vector<int,std::allocator<int>>::push_back(param_4,&local_70);
    lVar1 = (longdouble)getActiveStatusEtcParameter(this,param_2,param_3,1);
    local_6c = (int)ROUND(lVar1);
    std::vector<int,std::allocator<int>>::push_back(param_4,&local_6c);
    break;
  case 2:
    lVar1 = (longdouble)getActiveStatusEtcParameter(this,param_2,param_3,0);
    local_68 = (int)ROUND(lVar1);
    std::vector<int,std::allocator<int>>::push_back(param_4,&local_68);
    break;
  case 4:
    lVar1 = (longdouble)getActiveStatusEtcParameter(this,param_2,param_3,0);
    local_64 = (int)ROUND(lVar1);
    std::vector<int,std::allocator<int>>::push_back(param_4,&local_64);
    lVar1 = (longdouble)getActiveStatusEtcParameter(this,param_2,param_3,1);
    local_60 = (int)ROUND(lVar1);
    std::vector<int,std::allocator<int>>::push_back(param_4,&local_60);
    lVar1 = (longdouble)getActiveStatusEtcParameter(this,param_2,param_3,2);
    local_5c = (int)ROUND(lVar1);
    std::vector<int,std::allocator<int>>::push_back(param_4,&local_5c);
    lVar1 = (longdouble)getActiveStatusEtcParameter(this,param_2,param_3,3);
    local_58 = (int)ROUND(lVar1);
    std::vector<int,std::allocator<int>>::push_back(param_4,&local_58);
    break;
  case 5:
    lVar1 = (longdouble)getActiveStatusEtcParameter(this,param_2,param_3,0);
    local_54 = (int)ROUND(lVar1);
    std::vector<int,std::allocator<int>>::push_back(param_4,&local_54);
    lVar1 = (longdouble)getActiveStatusEtcParameter(this,param_2,param_3,1);
    local_50 = (int)ROUND(lVar1);
    std::vector<int,std::allocator<int>>::push_back(param_4,&local_50);
    break;
  case 6:
    lVar1 = (longdouble)getActiveStatusEtcParameter(this,param_2,param_3,0);
    local_4c = (int)ROUND(lVar1);
    std::vector<int,std::allocator<int>>::push_back(param_4,&local_4c);
    break;
  case 7:
    lVar1 = (longdouble)getActiveStatusEtcParameter(this,param_2,param_3,0);
    local_48 = (int)ROUND(lVar1);
    std::vector<int,std::allocator<int>>::push_back(param_4,&local_48);
    break;
  case 9:
    lVar1 = (longdouble)getActiveStatusEtcParameter(this,param_2,param_3,0);
    local_44 = (int)ROUND(lVar1);
    std::vector<int,std::allocator<int>>::push_back(param_4,&local_44);
    lVar1 = (longdouble)getActiveStatusEtcParameter(this,param_2,param_3,1);
    local_40[0] = (int)ROUND(lVar1);
    std::vector<int,std::allocator<int>>::push_back(param_4,local_40);
    local_40[1] = 1;
    std::vector<int,std::allocator<int>>::push_back(param_4,local_40 + 1);
    local_40[2] = 3000;
    std::vector<int,std::allocator<int>>::push_back(param_4,local_40 + 2);
    break;
  case 10:
    lVar1 = (longdouble)getActiveStatusEtcParameter(this,param_2,param_3,0);
    local_40[3] = (int)ROUND(lVar1);
    std::vector<int,std::allocator<int>>::push_back(param_4,local_40 + 3);
    break;
  case 0xb:
    lVar1 = (longdouble)getActiveStatusEtcParameter(this,param_2,param_3,0);
    local_30 = (int)ROUND(lVar1);
    std::vector<int,std::allocator<int>>::push_back(param_4,&local_30);
    break;
  case 0xc:
    lVar1 = (longdouble)getActiveStatusEtcParameter(this,param_2,param_3,0);
    local_2c = (int)ROUND(lVar1);
    std::vector<int,std::allocator<int>>::push_back(param_4,&local_2c);
    lVar1 = (longdouble)getActiveStatusEtcParameter(this,param_2,param_3,1);
    local_28 = (int)ROUND(lVar1);
    std::vector<int,std::allocator<int>>::push_back(param_4,&local_28);
    break;
  case 0xd:
    lVar1 = (longdouble)getActiveStatusEtcParameter(this,param_2,param_3,0);
    local_24 = (int)ROUND(lVar1);
    std::vector<int,std::allocator<int>>::push_back(param_4,&local_24);
    lVar1 = (longdouble)getActiveStatusEtcParameter(this,param_2,param_3,1);
    local_20 = (int)ROUND(lVar1);
    std::vector<int,std::allocator<int>>::push_back(param_4,&local_20);
    lVar1 = (longdouble)getActiveStatusEtcParameter(this,param_2,param_3,2);
    local_1c = (int)ROUND(lVar1);
    std::vector<int,std::allocator<int>>::push_back(param_4,&local_1c);
    lVar1 = (longdouble)getActiveStatusEtcParameter(this,param_2,param_3,3);
    local_18[0] = (int)ROUND(lVar1);
    std::vector<int,std::allocator<int>>::push_back(param_4,local_18);
    break;
  case 0xf:
    local_18[1] = 1;
    std::vector<int,std::allocator<int>>::push_back(param_4,local_18 + 1);
    break;
  case 0x11:
    lVar1 = (longdouble)getActiveStatusEtcParameter(this,param_2,param_3,0);
    local_18[2] = (int)ROUND(lVar1);
    std::vector<int,std::allocator<int>>::push_back(param_4,local_18 + 2);
  }
  return;
}
```
