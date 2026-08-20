# PacketDispatcher

`_ZN16PacketDispatcherC1Ev`

`PacketDispatcher::PacketDispatcher()`

| 类 | 地址 |
|---|---|
| `PacketDispatcher` | `0x08590a2e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08590a2e  _ZN16PacketDispatcherC1Ev
#           PacketDispatcher::PacketDispatcher()
# range [0x08590a2e, 0x0859483b]
08590a2e +0x0000:  push   %ebp
08590a2f +0x0001:  mov    %esp,%ebp
08590a31 +0x0003:  push   %edi
08590a32 +0x0004:  push   %esi
08590a33 +0x0005:  push   %ebx
08590a34 +0x0006:  sub    $0x2c,%esp
08590a37 +0x0009:  mov    0x8(%ebp),%eax
08590a3a +0x000c:  add    $0x978,%eax
08590a3f +0x0011:  mov    %eax,(%esp)
08590a42 +0x0014:  call   08128c34 <_ZN26CLocalChinaErrorDispatcherC1Ev>  ; CLocalChinaErrorDispatcher::CLocalChinaErrorDispatcher()
08590a47 +0x0019:  movl   $0x0,-0x1c(%ebp)
08590a4e +0x0020:  jmp    08590a61 <+0x33>
08590a50 +0x0022:  mov    -0x1c(%ebp),%edx
08590a53 +0x0025:  mov    0x8(%ebp),%eax
08590a56 +0x0028:  movl   $0x0,(%eax,%edx,4)
08590a5d +0x002f:  addl   $0x1,-0x1c(%ebp)
08590a61 +0x0033:  cmpl   $0x25d,-0x1c(%ebp)
08590a68 +0x003a:  setle  %al
08590a6b +0x003d:  test   %al,%al
08590a6d +0x003f:  jne    08590a50 <+0x22>
08590a6f +0x0041:  movl   $0x4,(%esp)
08590a76 +0x0048:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08590a7b +0x004d:  mov    %eax,%ebx
08590a7d +0x004f:  mov    %ebx,%eax
08590a7f +0x0051:  mov    %eax,(%esp)
08590a82 +0x0054:  call   08595804 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x7e4>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x7e4
08590a87 +0x0059:  mov    %ebx,%eax
08590a89 +0x005b:  mov    %eax,%edx
08590a8b +0x005d:  mov    0x8(%ebp),%eax
08590a8e +0x0060:  mov    %edx,0x7ec(%eax)
08590a94 +0x0066:  movl   $0x4,(%esp)
08590a9b +0x006d:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08590aa0 +0x0072:  mov    %eax,%ebx
08590aa2 +0x0074:  mov    %ebx,%eax
08590aa4 +0x0076:  mov    %eax,(%esp)
08590aa7 +0x0079:  call   08595820 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x800>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x800
08590aac +0x007e:  mov    %ebx,%eax
08590aae +0x0080:  mov    %eax,%edx
08590ab0 +0x0082:  mov    0x8(%ebp),%eax
08590ab3 +0x0085:  mov    %edx,0x7dc(%eax)
08590ab9 +0x008b:  movl   $0x4,(%esp)
08590ac0 +0x0092:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08590ac5 +0x0097:  mov    %eax,%ebx
08590ac7 +0x0099:  mov    %ebx,%eax
08590ac9 +0x009b:  mov    %eax,(%esp)
08590acc +0x009e:  call   0859583c <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x81c>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x81c
08590ad1 +0x00a3:  mov    %ebx,%eax
08590ad3 +0x00a5:  mov    %eax,%edx
08590ad5 +0x00a7:  mov    0x8(%ebp),%eax
08590ad8 +0x00aa:  mov    %edx,0x810(%eax)
08590ade +0x00b0:  movl   $0x4,(%esp)
08590ae5 +0x00b7:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08590aea +0x00bc:  mov    %eax,%ebx
08590aec +0x00be:  mov    %ebx,%eax
08590aee +0x00c0:  mov    %eax,(%esp)
08590af1 +0x00c3:  call   08595858 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x838>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x838
08590af6 +0x00c8:  mov    %ebx,%eax
08590af8 +0x00ca:  mov    %eax,%edx
08590afa +0x00cc:  mov    0x8(%ebp),%eax
08590afd +0x00cf:  mov    %edx,0x808(%eax)
08590b03 +0x00d5:  movl   $0x4,(%esp)
08590b0a +0x00dc:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08590b0f +0x00e1:  mov    %eax,%ebx
08590b11 +0x00e3:  mov    %ebx,%eax
08590b13 +0x00e5:  mov    %eax,(%esp)
08590b16 +0x00e8:  call   08595874 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x854>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x854
08590b1b +0x00ed:  mov    %ebx,%eax
08590b1d +0x00ef:  mov    %eax,%edx
08590b1f +0x00f1:  mov    0x8(%ebp),%eax
08590b22 +0x00f4:  mov    %edx,0x80c(%eax)
08590b28 +0x00fa:  movl   $0x4,(%esp)
08590b2f +0x0101:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08590b34 +0x0106:  mov    %eax,%ebx
08590b36 +0x0108:  mov    %ebx,%eax
08590b38 +0x010a:  mov    %eax,(%esp)
08590b3b +0x010d:  call   08595890 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x870>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x870
08590b40 +0x0112:  mov    %ebx,%eax
08590b42 +0x0114:  mov    %eax,%edx
08590b44 +0x0116:  mov    0x8(%ebp),%eax
08590b47 +0x0119:  mov    %edx,0x7b0(%eax)
08590b4d +0x011f:  movl   $0x4,(%esp)
08590b54 +0x0126:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08590b59 +0x012b:  mov    %eax,%ebx
08590b5b +0x012d:  mov    %ebx,%eax
08590b5d +0x012f:  mov    %eax,(%esp)
08590b60 +0x0132:  call   085958ac <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x88c>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x88c
08590b65 +0x0137:  mov    %ebx,%eax
08590b67 +0x0139:  mov    %eax,%edx
08590b69 +0x013b:  mov    0x8(%ebp),%eax
08590b6c +0x013e:  mov    %edx,0x7a8(%eax)
08590b72 +0x0144:  movl   $0x4,(%esp)
08590b79 +0x014b:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08590b7e +0x0150:  mov    %eax,%ebx
08590b80 +0x0152:  mov    %ebx,%eax
08590b82 +0x0154:  mov    %eax,(%esp)
08590b85 +0x0157:  call   085958c8 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x8a8>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x8a8
08590b8a +0x015c:  mov    %ebx,%eax
08590b8c +0x015e:  mov    %eax,%edx
08590b8e +0x0160:  mov    0x8(%ebp),%eax
08590b91 +0x0163:  mov    %edx,0x7a4(%eax)
08590b97 +0x0169:  movl   $0x4,(%esp)
08590b9e +0x0170:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08590ba3 +0x0175:  mov    %eax,%ebx
08590ba5 +0x0177:  mov    %ebx,%eax
08590ba7 +0x0179:  mov    %eax,(%esp)
08590baa +0x017c:  call   085958e4 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x8c4>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x8c4
08590baf +0x0181:  mov    %ebx,%eax
08590bb1 +0x0183:  mov    %eax,%edx
08590bb3 +0x0185:  mov    0x8(%ebp),%eax
08590bb6 +0x0188:  mov    %edx,0x794(%eax)
08590bbc +0x018e:  movl   $0x4,(%esp)
08590bc3 +0x0195:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08590bc8 +0x019a:  mov    %eax,%ebx
08590bca +0x019c:  mov    %ebx,%eax
08590bcc +0x019e:  mov    %eax,(%esp)
08590bcf +0x01a1:  call   08595900 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x8e0>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x8e0
08590bd4 +0x01a6:  mov    %ebx,%eax
08590bd6 +0x01a8:  mov    %eax,%edx
08590bd8 +0x01aa:  mov    0x8(%ebp),%eax
08590bdb +0x01ad:  mov    %edx,0x7a0(%eax)
08590be1 +0x01b3:  movl   $0x4,(%esp)
08590be8 +0x01ba:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08590bed +0x01bf:  mov    %eax,%ebx
08590bef +0x01c1:  mov    %ebx,%eax
08590bf1 +0x01c3:  mov    %eax,(%esp)
08590bf4 +0x01c6:  call   0859591c <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x8fc>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x8fc
08590bf9 +0x01cb:  mov    %ebx,%eax
08590bfb +0x01cd:  mov    %eax,%edx
08590bfd +0x01cf:  mov    0x8(%ebp),%eax
08590c00 +0x01d2:  mov    %edx,0x730(%eax)
08590c06 +0x01d8:  movl   $0x4,(%esp)
08590c0d +0x01df:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08590c12 +0x01e4:  mov    %eax,%ebx
08590c14 +0x01e6:  mov    %ebx,%eax
08590c16 +0x01e8:  mov    %eax,(%esp)
08590c19 +0x01eb:  call   08595938 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x918>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x918
08590c1e +0x01f0:  mov    %ebx,%eax
08590c20 +0x01f2:  mov    %eax,%edx
08590c22 +0x01f4:  mov    0x8(%ebp),%eax
08590c25 +0x01f7:  mov    %edx,0x6d0(%eax)
08590c2b +0x01fd:  movl   $0x4,(%esp)
08590c32 +0x0204:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08590c37 +0x0209:  mov    %eax,%ebx
08590c39 +0x020b:  mov    %ebx,%eax
08590c3b +0x020d:  mov    %eax,(%esp)
08590c3e +0x0210:  call   08595954 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x934>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x934
08590c43 +0x0215:  mov    %ebx,%eax
08590c45 +0x0217:  mov    %eax,%edx
08590c47 +0x0219:  mov    0x8(%ebp),%eax
08590c4a +0x021c:  mov    %edx,0x6cc(%eax)
08590c50 +0x0222:  movl   $0x4,(%esp)
08590c57 +0x0229:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08590c5c +0x022e:  mov    %eax,%ebx
08590c5e +0x0230:  mov    %ebx,%eax
08590c60 +0x0232:  mov    %eax,(%esp)
08590c63 +0x0235:  call   08595970 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x950>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x950
08590c68 +0x023a:  mov    %ebx,%eax
08590c6a +0x023c:  mov    %eax,%edx
08590c6c +0x023e:  mov    0x8(%ebp),%eax
08590c6f +0x0241:  mov    %edx,0x6b4(%eax)
08590c75 +0x0247:  movl   $0x4,(%esp)
08590c7c +0x024e:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08590c81 +0x0253:  mov    %eax,%ebx
08590c83 +0x0255:  mov    %ebx,%eax
08590c85 +0x0257:  mov    %eax,(%esp)
08590c88 +0x025a:  call   0859598c <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x96c>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x96c
08590c8d +0x025f:  mov    %ebx,%eax
08590c8f +0x0261:  mov    %eax,%edx
08590c91 +0x0263:  mov    0x8(%ebp),%eax
08590c94 +0x0266:  mov    %edx,0x6ac(%eax)
08590c9a +0x026c:  movl   $0x4,(%esp)
08590ca1 +0x0273:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08590ca6 +0x0278:  mov    %eax,%ebx
08590ca8 +0x027a:  mov    %ebx,%eax
08590caa +0x027c:  mov    %eax,(%esp)
08590cad +0x027f:  call   085959a8 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x988>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x988
08590cb2 +0x0284:  mov    %ebx,%eax
08590cb4 +0x0286:  mov    %eax,%edx
08590cb6 +0x0288:  mov    0x8(%ebp),%eax
08590cb9 +0x028b:  mov    %edx,0x680(%eax)
08590cbf +0x0291:  movl   $0x8,(%esp)
08590cc6 +0x0298:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08590ccb +0x029d:  mov    %eax,%ebx
08590ccd +0x029f:  mov    %ebx,%eax
08590ccf +0x02a1:  mov    %eax,(%esp)
08590cd2 +0x02a4:  call   08595348 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x328>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x328
08590cd7 +0x02a9:  jmp    08590cee <+0x2c0>
08590cd9 +0x02ab:  mov    %edx,%esi
08590cdb +0x02ad:  mov    %eax,%edi
08590cdd +0x02af:  mov    %ebx,(%esp)
08590ce0 +0x02b2:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08590ce5 +0x02b7:  mov    %edi,%eax
08590ce7 +0x02b9:  mov    %esi,%edx
08590ce9 +0x02bb:  jmp    08594820 <+0x3df2>
08590cee +0x02c0:  mov    %ebx,%eax
08590cf0 +0x02c2:  mov    %eax,%edx
08590cf2 +0x02c4:  mov    0x8(%ebp),%eax
08590cf5 +0x02c7:  mov    %edx,0x678(%eax)
08590cfb +0x02cd:  movl   $0x4,(%esp)
08590d02 +0x02d4:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08590d07 +0x02d9:  mov    %eax,%ebx
08590d09 +0x02db:  mov    %ebx,%eax
08590d0b +0x02dd:  mov    %eax,(%esp)
08590d0e +0x02e0:  call   085959c4 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x9a4>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x9a4
08590d13 +0x02e5:  mov    %ebx,%eax
08590d15 +0x02e7:  mov    %eax,%edx
08590d17 +0x02e9:  mov    0x8(%ebp),%eax
08590d1a +0x02ec:  mov    %edx,(%eax)
08590d1c +0x02ee:  movl   $0x8,(%esp)
08590d23 +0x02f5:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08590d28 +0x02fa:  mov    %eax,%ebx
08590d2a +0x02fc:  mov    %ebx,%eax
08590d2c +0x02fe:  mov    %eax,(%esp)
08590d2f +0x0301:  call   085953d2 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x3b2>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x3b2
08590d34 +0x0306:  mov    %ebx,%eax
08590d36 +0x0308:  mov    %eax,%edx
08590d38 +0x030a:  mov    0x8(%ebp),%eax
08590d3b +0x030d:  mov    %edx,0x4(%eax)
08590d3e +0x0310:  movl   $0x4,(%esp)
08590d45 +0x0317:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08590d4a +0x031c:  mov    %eax,%ebx
08590d4c +0x031e:  mov    %ebx,%eax
08590d4e +0x0320:  mov    %eax,(%esp)
08590d51 +0x0323:  call   08595564 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x544>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x544
08590d56 +0x0328:  mov    %ebx,%eax
08590d58 +0x032a:  mov    %eax,%edx
08590d5a +0x032c:  mov    0x8(%ebp),%eax
08590d5d +0x032f:  mov    %edx,0x8(%eax)
08590d60 +0x0332:  movl   $0x4,(%esp)
08590d67 +0x0339:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08590d6c +0x033e:  mov    %eax,%ebx
08590d6e +0x0340:  mov    %ebx,%eax
08590d70 +0x0342:  mov    %eax,(%esp)
08590d73 +0x0345:  call   0859544c <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x42c>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x42c
08590d78 +0x034a:  mov    %ebx,%eax
08590d7a +0x034c:  mov    %eax,%edx
08590d7c +0x034e:  mov    0x8(%ebp),%eax
08590d7f +0x0351:  mov    %edx,0xc(%eax)
08590d82 +0x0354:  movl   $0x4,(%esp)
08590d89 +0x035b:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08590d8e +0x0360:  mov    %eax,%ebx
08590d90 +0x0362:  mov    %ebx,%eax
08590d92 +0x0364:  mov    %eax,(%esp)
08590d95 +0x0367:  call   0859524c <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x22c>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x22c
08590d9a +0x036c:  mov    %ebx,%eax
08590d9c +0x036e:  mov    %eax,%edx
08590d9e +0x0370:  mov    0x8(%ebp),%eax
08590da1 +0x0373:  mov    %edx,0x10(%eax)
08590da4 +0x0376:  movl   $0x4,(%esp)
08590dab +0x037d:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08590db0 +0x0382:  mov    %eax,%ebx
08590db2 +0x0384:  mov    %ebx,%eax
08590db4 +0x0386:  mov    %eax,(%esp)
08590db7 +0x0389:  call   085950fc <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0xdc>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0xdc
08590dbc +0x038e:  mov    %ebx,%eax
08590dbe +0x0390:  mov    %eax,%edx
08590dc0 +0x0392:  mov    0x8(%ebp),%eax
08590dc3 +0x0395:  mov    %edx,0x14(%eax)
08590dc6 +0x0398:  movl   $0x4,(%esp)
08590dcd +0x039f:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08590dd2 +0x03a4:  mov    %eax,%ebx
08590dd4 +0x03a6:  mov    %ebx,%eax
08590dd6 +0x03a8:  mov    %eax,(%esp)
08590dd9 +0x03ab:  call   08595134 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x114>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x114
08590dde +0x03b0:  mov    %ebx,%eax
08590de0 +0x03b2:  mov    %eax,%edx
08590de2 +0x03b4:  mov    0x8(%ebp),%eax
08590de5 +0x03b7:  mov    %edx,0x18(%eax)
08590de8 +0x03ba:  movl   $0x8,(%esp)
08590def +0x03c1:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08590df4 +0x03c6:  mov    %eax,%ebx
08590df6 +0x03c8:  mov    %ebx,%eax
08590df8 +0x03ca:  mov    %eax,(%esp)
08590dfb +0x03cd:  call   085959e0 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x9c0>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x9c0
08590e00 +0x03d2:  mov    %ebx,%eax
08590e02 +0x03d4:  mov    %eax,%edx
08590e04 +0x03d6:  mov    0x8(%ebp),%eax
08590e07 +0x03d9:  mov    %edx,0x1c(%eax)
08590e0a +0x03dc:  movl   $0x4,(%esp)
08590e11 +0x03e3:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08590e16 +0x03e8:  mov    %eax,%ebx
08590e18 +0x03ea:  mov    %ebx,%eax
08590e1a +0x03ec:  mov    %eax,(%esp)
08590e1d +0x03ef:  call   085951a4 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x184>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x184
08590e22 +0x03f4:  mov    %ebx,%eax
08590e24 +0x03f6:  mov    %eax,%edx
08590e26 +0x03f8:  mov    0x8(%ebp),%eax
08590e29 +0x03fb:  mov    %edx,0x20(%eax)
08590e2c +0x03fe:  movl   $0x4,(%esp)
08590e33 +0x0405:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08590e38 +0x040a:  mov    %eax,%ebx
08590e3a +0x040c:  mov    %ebx,%eax
08590e3c +0x040e:  mov    %eax,(%esp)
08590e3f +0x0411:  call   085951c0 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1a0>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x1a0
08590e44 +0x0416:  mov    %ebx,%eax
08590e46 +0x0418:  mov    %eax,%edx
08590e48 +0x041a:  mov    0x8(%ebp),%eax
08590e4b +0x041d:  mov    %edx,0x24(%eax)
08590e4e +0x0420:  movl   $0x4,(%esp)
08590e55 +0x0427:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08590e5a +0x042c:  mov    %eax,%ebx
08590e5c +0x042e:  mov    %ebx,%eax
08590e5e +0x0430:  mov    %eax,(%esp)
08590e61 +0x0433:  call   085954d8 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x4b8>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x4b8
08590e66 +0x0438:  mov    %ebx,%eax
08590e68 +0x043a:  mov    %eax,%edx
08590e6a +0x043c:  mov    0x8(%ebp),%eax
08590e6d +0x043f:  mov    %edx,0x28(%eax)
08590e70 +0x0442:  movl   $0x4,(%esp)
08590e77 +0x0449:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08590e7c +0x044e:  mov    %eax,%ebx
08590e7e +0x0450:  mov    %ebx,%eax
08590e80 +0x0452:  mov    %eax,(%esp)
08590e83 +0x0455:  call   08595510 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x4f0>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x4f0
08590e88 +0x045a:  mov    %ebx,%eax
08590e8a +0x045c:  mov    %eax,%edx
08590e8c +0x045e:  mov    0x8(%ebp),%eax
08590e8f +0x0461:  mov    %edx,0x2c(%eax)
08590e92 +0x0464:  movl   $0x4,(%esp)
08590e99 +0x046b:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08590e9e +0x0470:  mov    %eax,%ebx
08590ea0 +0x0472:  mov    %ebx,%eax
08590ea2 +0x0474:  mov    %eax,(%esp)
08590ea5 +0x0477:  call   085959fc <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x9dc>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x9dc
08590eaa +0x047c:  mov    %ebx,%eax
08590eac +0x047e:  mov    %eax,%edx
08590eae +0x0480:  mov    0x8(%ebp),%eax
08590eb1 +0x0483:  mov    %edx,0x30(%eax)
08590eb4 +0x0486:  movl   $0x4,(%esp)
08590ebb +0x048d:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08590ec0 +0x0492:  mov    %eax,%ebx
08590ec2 +0x0494:  mov    %ebx,%eax
08590ec4 +0x0496:  mov    %eax,(%esp)
08590ec7 +0x0499:  call   08595a18 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x9f8>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x9f8
08590ecc +0x049e:  mov    %ebx,%eax
08590ece +0x04a0:  mov    %eax,%edx
08590ed0 +0x04a2:  mov    0x8(%ebp),%eax
08590ed3 +0x04a5:  mov    %edx,0x34(%eax)
08590ed6 +0x04a8:  movl   $0x4,(%esp)
08590edd +0x04af:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08590ee2 +0x04b4:  mov    %eax,%ebx
08590ee4 +0x04b6:  mov    %ebx,%eax
08590ee6 +0x04b8:  mov    %eax,(%esp)
08590ee9 +0x04bb:  call   0859532c <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x30c>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x30c
08590eee +0x04c0:  mov    %ebx,%eax
08590ef0 +0x04c2:  mov    %eax,%edx
08590ef2 +0x04c4:  mov    0x8(%ebp),%eax
08590ef5 +0x04c7:  mov    %edx,0x38(%eax)
08590ef8 +0x04ca:  movl   $0x4,(%esp)
08590eff +0x04d1:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08590f04 +0x04d6:  mov    %eax,%ebx
08590f06 +0x04d8:  mov    %ebx,%eax
08590f08 +0x04da:  mov    %eax,(%esp)
08590f0b +0x04dd:  call   08595a34 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0xa14>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0xa14
08590f10 +0x04e2:  mov    %ebx,%eax
08590f12 +0x04e4:  mov    %eax,%edx
08590f14 +0x04e6:  mov    0x8(%ebp),%eax
08590f17 +0x04e9:  mov    %edx,0x3c(%eax)
08590f1a +0x04ec:  movl   $0x4,(%esp)
08590f21 +0x04f3:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08590f26 +0x04f8:  mov    %eax,%ebx
08590f28 +0x04fa:  mov    %ebx,%eax
08590f2a +0x04fc:  mov    %eax,(%esp)
08590f2d +0x04ff:  call   08595268 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x248>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x248
08590f32 +0x0504:  mov    %ebx,%eax
08590f34 +0x0506:  mov    %eax,%edx
08590f36 +0x0508:  mov    0x8(%ebp),%eax
08590f39 +0x050b:  mov    %edx,0x40(%eax)
08590f3c +0x050e:  movl   $0x4,(%esp)
08590f43 +0x0515:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08590f48 +0x051a:  mov    %eax,%ebx
08590f4a +0x051c:  mov    %ebx,%eax
08590f4c +0x051e:  mov    %eax,(%esp)
08590f4f +0x0521:  call   08595548 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x528>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x528
08590f54 +0x0526:  mov    %ebx,%eax
08590f56 +0x0528:  mov    %eax,%edx
08590f58 +0x052a:  mov    0x8(%ebp),%eax
08590f5b +0x052d:  mov    %edx,0x44(%eax)
08590f5e +0x0530:  movl   $0x4,(%esp)
08590f65 +0x0537:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08590f6a +0x053c:  mov    %eax,%ebx
08590f6c +0x053e:  mov    %ebx,%eax
08590f6e +0x0540:  mov    %eax,(%esp)
08590f71 +0x0543:  call   08595150 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x130>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x130
08590f76 +0x0548:  mov    %ebx,%eax
08590f78 +0x054a:  mov    %eax,%edx
08590f7a +0x054c:  mov    0x8(%ebp),%eax
08590f7d +0x054f:  mov    %edx,0x48(%eax)
08590f80 +0x0552:  movl   $0x4,(%esp)
08590f87 +0x0559:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08590f8c +0x055e:  mov    %eax,%ebx
08590f8e +0x0560:  mov    %ebx,%eax
08590f90 +0x0562:  mov    %eax,(%esp)
08590f93 +0x0565:  call   085951dc <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1bc>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x1bc
08590f98 +0x056a:  mov    %ebx,%eax
08590f9a +0x056c:  mov    %eax,%edx
08590f9c +0x056e:  mov    0x8(%ebp),%eax
08590f9f +0x0571:  mov    %edx,0x4c(%eax)
08590fa2 +0x0574:  movl   $0x4,(%esp)
08590fa9 +0x057b:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08590fae +0x0580:  mov    %eax,%ebx
08590fb0 +0x0582:  mov    %ebx,%eax
08590fb2 +0x0584:  mov    %eax,(%esp)
08590fb5 +0x0587:  call   085952d8 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x2b8>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x2b8
08590fba +0x058c:  mov    %ebx,%eax
08590fbc +0x058e:  mov    %eax,%edx
08590fbe +0x0590:  mov    0x8(%ebp),%eax
08590fc1 +0x0593:  mov    %edx,0x50(%eax)
08590fc4 +0x0596:  movl   $0x4,(%esp)
08590fcb +0x059d:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08590fd0 +0x05a2:  mov    %eax,%ebx
08590fd2 +0x05a4:  mov    %ebx,%eax
08590fd4 +0x05a6:  mov    %eax,(%esp)
08590fd7 +0x05a9:  call   085950a8 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x88>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x88
08590fdc +0x05ae:  mov    %ebx,%eax
08590fde +0x05b0:  mov    %eax,%edx
08590fe0 +0x05b2:  mov    0x8(%ebp),%eax
08590fe3 +0x05b5:  mov    %edx,0x54(%eax)
08590fe6 +0x05b8:  movl   $0x4,(%esp)
08590fed +0x05bf:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08590ff2 +0x05c4:  mov    %eax,%ebx
08590ff4 +0x05c6:  mov    %ebx,%eax
08590ff6 +0x05c8:  mov    %eax,(%esp)
08590ff9 +0x05cb:  call   085954bc <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x49c>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x49c
08590ffe +0x05d0:  mov    %ebx,%eax
08591000 +0x05d2:  mov    %eax,%edx
08591002 +0x05d4:  mov    0x8(%ebp),%eax
08591005 +0x05d7:  mov    %edx,0x58(%eax)
08591008 +0x05da:  movl   $0x4,(%esp)
0859100f +0x05e1:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08591014 +0x05e6:  mov    %eax,%ebx
08591016 +0x05e8:  mov    %ebx,%eax
08591018 +0x05ea:  mov    %eax,(%esp)
0859101b +0x05ed:  call   08595468 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x448>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x448
08591020 +0x05f2:  mov    %ebx,%eax
08591022 +0x05f4:  mov    %eax,%edx
08591024 +0x05f6:  mov    0x8(%ebp),%eax
08591027 +0x05f9:  mov    %edx,0x5c(%eax)
0859102a +0x05fc:  movl   $0x4,(%esp)
08591031 +0x0603:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08591036 +0x0608:  mov    %eax,%ebx
08591038 +0x060a:  mov    %ebx,%eax
0859103a +0x060c:  mov    %eax,(%esp)
0859103d +0x060f:  call   0859552c <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x50c>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x50c
08591042 +0x0614:  mov    %ebx,%eax
08591044 +0x0616:  mov    %eax,%edx
08591046 +0x0618:  mov    0x8(%ebp),%eax
08591049 +0x061b:  mov    %edx,0x60(%eax)
0859104c +0x061e:  movl   $0x4,(%esp)
08591053 +0x0625:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08591058 +0x062a:  mov    %eax,%ebx
0859105a +0x062c:  mov    %ebx,%eax
0859105c +0x062e:  mov    %eax,(%esp)
0859105f +0x0631:  call   08595230 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x210>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x210
08591064 +0x0636:  mov    %ebx,%eax
08591066 +0x0638:  mov    %eax,%edx
08591068 +0x063a:  mov    0x8(%ebp),%eax
0859106b +0x063d:  mov    %edx,0x64(%eax)
0859106e +0x0640:  movl   $0x4,(%esp)
08591075 +0x0647:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0859107a +0x064c:  mov    %eax,%ebx
0859107c +0x064e:  mov    %ebx,%eax
0859107e +0x0650:  mov    %eax,(%esp)
08591081 +0x0653:  call   085955d4 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x5b4>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x5b4
08591086 +0x0658:  mov    %ebx,%eax
08591088 +0x065a:  mov    %eax,%edx
0859108a +0x065c:  mov    0x8(%ebp),%eax
0859108d +0x065f:  mov    %edx,0x68(%eax)
08591090 +0x0662:  movl   $0x4,(%esp)
08591097 +0x0669:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0859109c +0x066e:  mov    %eax,%ebx
0859109e +0x0670:  mov    %ebx,%eax
085910a0 +0x0672:  mov    %eax,(%esp)
085910a3 +0x0675:  call   085953f8 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x3d8>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x3d8
085910a8 +0x067a:  mov    %ebx,%eax
085910aa +0x067c:  mov    %eax,%edx
085910ac +0x067e:  mov    0x8(%ebp),%eax
085910af +0x0681:  mov    %edx,0x6c(%eax)
085910b2 +0x0684:  movl   $0x4,(%esp)
085910b9 +0x068b:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085910be +0x0690:  mov    %eax,%ebx
085910c0 +0x0692:  mov    %ebx,%eax
085910c2 +0x0694:  mov    %eax,(%esp)
085910c5 +0x0697:  call   0859567c <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x65c>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x65c
085910ca +0x069c:  mov    %ebx,%eax
085910cc +0x069e:  mov    %eax,%edx
085910ce +0x06a0:  mov    0x8(%ebp),%eax
085910d1 +0x06a3:  mov    %edx,0x70(%eax)
085910d4 +0x06a6:  movl   $0x4,(%esp)
085910db +0x06ad:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085910e0 +0x06b2:  mov    %eax,%ebx
085910e2 +0x06b4:  mov    %ebx,%eax
085910e4 +0x06b6:  mov    %eax,(%esp)
085910e7 +0x06b9:  call   08595628 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x608>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x608
085910ec +0x06be:  mov    %ebx,%eax
085910ee +0x06c0:  mov    %eax,%edx
085910f0 +0x06c2:  mov    0x8(%ebp),%eax
085910f3 +0x06c5:  mov    %edx,0x74(%eax)
085910f6 +0x06c8:  movl   $0x4,(%esp)
085910fd +0x06cf:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08591102 +0x06d4:  mov    %eax,%ebx
08591104 +0x06d6:  mov    %ebx,%eax
08591106 +0x06d8:  mov    %eax,(%esp)
08591109 +0x06db:  call   085950e0 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0xc0>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0xc0
0859110e +0x06e0:  mov    %ebx,%eax
08591110 +0x06e2:  mov    %eax,%edx
08591112 +0x06e4:  mov    0x8(%ebp),%eax
08591115 +0x06e7:  mov    %edx,0x78(%eax)
08591118 +0x06ea:  movl   $0x4,(%esp)
0859111f +0x06f1:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08591124 +0x06f6:  mov    %eax,%ebx
08591126 +0x06f8:  mov    %ebx,%eax
08591128 +0x06fa:  mov    %eax,(%esp)
0859112b +0x06fd:  call   085950c4 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0xa4>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0xa4
08591130 +0x0702:  mov    %ebx,%eax
08591132 +0x0704:  mov    %eax,%edx
08591134 +0x0706:  mov    0x8(%ebp),%eax
08591137 +0x0709:  mov    %edx,0x7c(%eax)
0859113a +0x070c:  movl   $0x4,(%esp)
08591141 +0x0713:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08591146 +0x0718:  mov    %eax,%ebx
08591148 +0x071a:  mov    %ebx,%eax
0859114a +0x071c:  mov    %eax,(%esp)
0859114d +0x071f:  call   08595484 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x464>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x464
08591152 +0x0724:  mov    %ebx,%eax
08591154 +0x0726:  mov    %eax,%edx
08591156 +0x0728:  mov    0x8(%ebp),%eax
08591159 +0x072b:  mov    %edx,0x80(%eax)
0859115f +0x0731:  movl   $0x4,(%esp)
08591166 +0x0738:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0859116b +0x073d:  mov    %eax,%ebx
0859116d +0x073f:  mov    %ebx,%eax
0859116f +0x0741:  mov    %eax,(%esp)
08591172 +0x0744:  call   085954a0 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x480>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x480
08591177 +0x0749:  mov    %ebx,%eax
08591179 +0x074b:  mov    %eax,%edx
0859117b +0x074d:  mov    0x8(%ebp),%eax
0859117e +0x0750:  mov    %edx,0x84(%eax)
08591184 +0x0756:  movl   $0x4,(%esp)
0859118b +0x075d:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08591190 +0x0762:  mov    %eax,%ebx
08591192 +0x0764:  mov    %ebx,%eax
08591194 +0x0766:  mov    %eax,(%esp)
08591197 +0x0769:  call   085954a0 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x480>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x480
0859119c +0x076e:  mov    %ebx,%eax
0859119e +0x0770:  mov    %eax,%edx
085911a0 +0x0772:  mov    0x8(%ebp),%eax
085911a3 +0x0775:  mov    %edx,0x88(%eax)
085911a9 +0x077b:  movl   $0x4,(%esp)
085911b0 +0x0782:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085911b5 +0x0787:  mov    %eax,%ebx
085911b7 +0x0789:  mov    %ebx,%eax
085911b9 +0x078b:  mov    %eax,(%esp)
085911bc +0x078e:  call   085954a0 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x480>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x480
085911c1 +0x0793:  mov    %ebx,%eax
085911c3 +0x0795:  mov    %eax,%edx
085911c5 +0x0797:  mov    0x8(%ebp),%eax
085911c8 +0x079a:  mov    %edx,0x8c(%eax)
085911ce +0x07a0:  movl   $0x4,(%esp)
085911d5 +0x07a7:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085911da +0x07ac:  mov    %eax,%ebx
085911dc +0x07ae:  mov    %ebx,%eax
085911de +0x07b0:  mov    %eax,(%esp)
085911e1 +0x07b3:  call   085954a0 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x480>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x480
085911e6 +0x07b8:  mov    %ebx,%eax
085911e8 +0x07ba:  mov    %eax,%edx
085911ea +0x07bc:  mov    0x8(%ebp),%eax
085911ed +0x07bf:  mov    %edx,0x90(%eax)
085911f3 +0x07c5:  movl   $0x4,(%esp)
085911fa +0x07cc:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085911ff +0x07d1:  mov    %eax,%ebx
08591201 +0x07d3:  mov    %ebx,%eax
08591203 +0x07d5:  mov    %eax,(%esp)
08591206 +0x07d8:  call   085952a0 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x280>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x280
0859120b +0x07dd:  mov    %ebx,%eax
0859120d +0x07df:  mov    %eax,%edx
0859120f +0x07e1:  mov    0x8(%ebp),%eax
08591212 +0x07e4:  mov    %edx,0x94(%eax)
08591218 +0x07ea:  movl   $0x4,(%esp)
0859121f +0x07f1:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08591224 +0x07f6:  mov    %eax,%ebx
08591226 +0x07f8:  mov    %ebx,%eax
08591228 +0x07fa:  mov    %eax,(%esp)
0859122b +0x07fd:  call   08595284 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x264>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x264
08591230 +0x0802:  mov    %ebx,%eax
08591232 +0x0804:  mov    %eax,%edx
08591234 +0x0806:  mov    0x8(%ebp),%eax
08591237 +0x0809:  mov    %edx,0x98(%eax)
0859123d +0x080f:  movl   $0x4,(%esp)
08591244 +0x0816:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08591249 +0x081b:  mov    %eax,%ebx
0859124b +0x081d:  mov    %ebx,%eax
0859124d +0x081f:  mov    %eax,(%esp)
08591250 +0x0822:  call   08595a50 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0xa30>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0xa30
08591255 +0x0827:  mov    %ebx,%eax
08591257 +0x0829:  mov    %eax,%edx
08591259 +0x082b:  mov    0x8(%ebp),%eax
0859125c +0x082e:  mov    %edx,0x9c(%eax)
08591262 +0x0834:  movl   $0x4,(%esp)
08591269 +0x083b:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0859126e +0x0840:  mov    %eax,%ebx
08591270 +0x0842:  mov    %ebx,%eax
08591272 +0x0844:  mov    %eax,(%esp)
08591275 +0x0847:  call   08595a6c <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0xa4c>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0xa4c
0859127a +0x084c:  mov    %ebx,%eax
0859127c +0x084e:  mov    %eax,%edx
0859127e +0x0850:  mov    0x8(%ebp),%eax
08591281 +0x0853:  mov    %edx,0xa0(%eax)
08591287 +0x0859:  movl   $0x4,(%esp)
0859128e +0x0860:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08591293 +0x0865:  mov    %eax,%ebx
08591295 +0x0867:  mov    %ebx,%eax
08591297 +0x0869:  mov    %eax,(%esp)
0859129a +0x086c:  call   08595310 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x2f0>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x2f0
0859129f +0x0871:  mov    %ebx,%eax
085912a1 +0x0873:  mov    %eax,%edx
085912a3 +0x0875:  mov    0x8(%ebp),%eax
085912a6 +0x0878:  mov    %edx,0xa4(%eax)
085912ac +0x087e:  movl   $0x4,(%esp)
085912b3 +0x0885:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085912b8 +0x088a:  mov    %eax,%ebx
085912ba +0x088c:  mov    %ebx,%eax
085912bc +0x088e:  mov    %eax,(%esp)
085912bf +0x0891:  call   08595414 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x3f4>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x3f4
085912c4 +0x0896:  mov    %ebx,%eax
085912c6 +0x0898:  mov    %eax,%edx
085912c8 +0x089a:  mov    0x8(%ebp),%eax
085912cb +0x089d:  mov    %edx,0xa8(%eax)
085912d1 +0x08a3:  movl   $0x4,(%esp)
085912d8 +0x08aa:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085912dd +0x08af:  mov    %eax,%ebx
085912df +0x08b1:  mov    %ebx,%eax
085912e1 +0x08b3:  mov    %eax,(%esp)
085912e4 +0x08b6:  call   08595a88 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0xa68>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0xa68
085912e9 +0x08bb:  mov    %ebx,%eax
085912eb +0x08bd:  mov    %eax,%edx
085912ed +0x08bf:  mov    0x8(%ebp),%eax
085912f0 +0x08c2:  mov    %edx,0xac(%eax)
085912f6 +0x08c8:  movl   $0x4,(%esp)
085912fd +0x08cf:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08591302 +0x08d4:  mov    %eax,%ebx
08591304 +0x08d6:  mov    %ebx,%eax
08591306 +0x08d8:  mov    %eax,(%esp)
08591309 +0x08db:  call   085952f4 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x2d4>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x2d4
0859130e +0x08e0:  mov    %ebx,%eax
08591310 +0x08e2:  mov    %eax,%edx
08591312 +0x08e4:  mov    0x8(%ebp),%eax
08591315 +0x08e7:  mov    %edx,0xb0(%eax)
0859131b +0x08ed:  movl   $0x4,(%esp)
08591322 +0x08f4:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08591327 +0x08f9:  mov    %eax,%ebx
08591329 +0x08fb:  mov    %ebx,%eax
0859132b +0x08fd:  mov    %eax,(%esp)
0859132e +0x0900:  call   08595aa4 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0xa84>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0xa84
08591333 +0x0905:  mov    %ebx,%eax
08591335 +0x0907:  mov    %eax,%edx
08591337 +0x0909:  mov    0x8(%ebp),%eax
0859133a +0x090c:  mov    %edx,0xb4(%eax)
08591340 +0x0912:  movl   $0x4,(%esp)
08591347 +0x0919:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0859134c +0x091e:  mov    %eax,%ebx
0859134e +0x0920:  mov    %ebx,%eax
08591350 +0x0922:  mov    %eax,(%esp)
08591353 +0x0925:  call   08595188 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x168>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x168
08591358 +0x092a:  mov    %ebx,%eax
0859135a +0x092c:  mov    %eax,%edx
0859135c +0x092e:  mov    0x8(%ebp),%eax
0859135f +0x0931:  mov    %edx,0xb8(%eax)
08591365 +0x0937:  movl   $0x4,(%esp)
0859136c +0x093e:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08591371 +0x0943:  mov    %eax,%ebx
08591373 +0x0945:  mov    %ebx,%eax
08591375 +0x0947:  mov    %eax,(%esp)
08591378 +0x094a:  call   085955f0 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x5d0>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x5d0
0859137d +0x094f:  mov    %ebx,%eax
0859137f +0x0951:  mov    %eax,%edx
08591381 +0x0953:  mov    0x8(%ebp),%eax
08591384 +0x0956:  mov    %edx,0xbc(%eax)
0859138a +0x095c:  movl   $0x4,(%esp)
08591391 +0x0963:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08591396 +0x0968:  mov    %eax,%ebx
08591398 +0x096a:  mov    %ebx,%eax
0859139a +0x096c:  mov    %eax,(%esp)
0859139d +0x096f:  call   085951f8 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1d8>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x1d8
085913a2 +0x0974:  mov    %ebx,%eax
085913a4 +0x0976:  mov    %eax,%edx
085913a6 +0x0978:  mov    0x8(%ebp),%eax
085913a9 +0x097b:  mov    %edx,0xc0(%eax)
085913af +0x0981:  movl   $0x4,(%esp)
085913b6 +0x0988:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085913bb +0x098d:  mov    %eax,%ebx
085913bd +0x098f:  mov    %ebx,%eax
085913bf +0x0991:  mov    %eax,(%esp)
085913c2 +0x0994:  call   08595580 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x560>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x560
085913c7 +0x0999:  mov    %ebx,%eax
085913c9 +0x099b:  mov    %eax,%edx
085913cb +0x099d:  mov    0x8(%ebp),%eax
085913ce +0x09a0:  mov    %edx,0xc4(%eax)
085913d4 +0x09a6:  movl   $0x4,(%esp)
085913db +0x09ad:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085913e0 +0x09b2:  mov    %eax,%ebx
085913e2 +0x09b4:  mov    %ebx,%eax
085913e4 +0x09b6:  mov    %eax,(%esp)
085913e7 +0x09b9:  call   0859516c <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x14c>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x14c
085913ec +0x09be:  mov    %ebx,%eax
085913ee +0x09c0:  mov    %eax,%edx
085913f0 +0x09c2:  mov    0x8(%ebp),%eax
085913f3 +0x09c5:  mov    %edx,0xc8(%eax)
085913f9 +0x09cb:  movl   $0x4,(%esp)
08591400 +0x09d2:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08591405 +0x09d7:  mov    %eax,%ebx
08591407 +0x09d9:  mov    %ebx,%eax
08591409 +0x09db:  mov    %eax,(%esp)
0859140c +0x09de:  call   08595118 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0xf8>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0xf8
08591411 +0x09e3:  mov    %ebx,%eax
08591413 +0x09e5:  mov    %eax,%edx
08591415 +0x09e7:  mov    0x8(%ebp),%eax
08591418 +0x09ea:  mov    %edx,0xcc(%eax)
0859141e +0x09f0:  movl   $0x4,(%esp)
08591425 +0x09f7:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0859142a +0x09fc:  mov    %eax,%ebx
0859142c +0x09fe:  mov    %ebx,%eax
0859142e +0x0a00:  mov    %eax,(%esp)
08591431 +0x0a03:  call   08595ac0 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0xaa0>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0xaa0
08591436 +0x0a08:  mov    %ebx,%eax
08591438 +0x0a0a:  mov    %eax,%edx
0859143a +0x0a0c:  mov    0x8(%ebp),%eax
0859143d +0x0a0f:  mov    %edx,0xd0(%eax)
08591443 +0x0a15:  movl   $0x4,(%esp)
0859144a +0x0a1c:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0859144f +0x0a21:  mov    %eax,%ebx
08591451 +0x0a23:  mov    %ebx,%eax
08591453 +0x0a25:  mov    %eax,(%esp)
08591456 +0x0a28:  call   0859560c <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x5ec>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x5ec
0859145b +0x0a2d:  mov    %ebx,%eax
0859145d +0x0a2f:  mov    %eax,%edx
0859145f +0x0a31:  mov    0x8(%ebp),%eax
08591462 +0x0a34:  mov    %edx,0xd4(%eax)
08591468 +0x0a3a:  movl   $0x4,(%esp)
0859146f +0x0a41:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08591474 +0x0a46:  mov    %eax,%ebx
08591476 +0x0a48:  mov    %ebx,%eax
08591478 +0x0a4a:  mov    %eax,(%esp)
0859147b +0x0a4d:  call   08595430 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x410>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x410
08591480 +0x0a52:  mov    %ebx,%eax
08591482 +0x0a54:  mov    %eax,%edx
08591484 +0x0a56:  mov    0x8(%ebp),%eax
08591487 +0x0a59:  mov    %edx,0xd8(%eax)
0859148d +0x0a5f:  movl   $0x4,(%esp)
08591494 +0x0a66:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08591499 +0x0a6b:  mov    %eax,%ebx
0859149b +0x0a6d:  mov    %ebx,%eax
0859149d +0x0a6f:  mov    %eax,(%esp)
085914a0 +0x0a72:  call   0859559c <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x57c>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x57c
085914a5 +0x0a77:  mov    %ebx,%eax
085914a7 +0x0a79:  mov    %eax,%edx
085914a9 +0x0a7b:  mov    0x8(%ebp),%eax
085914ac +0x0a7e:  mov    %edx,0xdc(%eax)
085914b2 +0x0a84:  movl   $0x4,(%esp)
085914b9 +0x0a8b:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085914be +0x0a90:  mov    %eax,%ebx
085914c0 +0x0a92:  mov    %ebx,%eax
085914c2 +0x0a94:  mov    %eax,(%esp)
085914c5 +0x0a97:  call   085952bc <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x29c>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x29c
085914ca +0x0a9c:  mov    %ebx,%eax
085914cc +0x0a9e:  mov    %eax,%edx
085914ce +0x0aa0:  mov    0x8(%ebp),%eax
085914d1 +0x0aa3:  mov    %edx,0xe0(%eax)
085914d7 +0x0aa9:  movl   $0x4,(%esp)
085914de +0x0ab0:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085914e3 +0x0ab5:  mov    %eax,%ebx
085914e5 +0x0ab7:  mov    %ebx,%eax
085914e7 +0x0ab9:  mov    %eax,(%esp)
085914ea +0x0abc:  call   085955b8 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x598>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x598
085914ef +0x0ac1:  mov    %ebx,%eax
085914f1 +0x0ac3:  mov    %eax,%edx
085914f3 +0x0ac5:  mov    0x8(%ebp),%eax
085914f6 +0x0ac8:  mov    %edx,0xe4(%eax)
085914fc +0x0ace:  movl   $0x4,(%esp)
08591503 +0x0ad5:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08591508 +0x0ada:  mov    %eax,%ebx
0859150a +0x0adc:  mov    %ebx,%eax
0859150c +0x0ade:  mov    %eax,(%esp)
0859150f +0x0ae1:  call   08595adc <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0xabc>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0xabc
08591514 +0x0ae6:  mov    %ebx,%eax
08591516 +0x0ae8:  mov    %eax,%edx
08591518 +0x0aea:  mov    0x8(%ebp),%eax
0859151b +0x0aed:  mov    %edx,0xe8(%eax)
08591521 +0x0af3:  movl   $0x4,(%esp)
08591528 +0x0afa:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0859152d +0x0aff:  mov    %eax,%ebx
0859152f +0x0b01:  mov    %ebx,%eax
08591531 +0x0b03:  mov    %eax,(%esp)
08591534 +0x0b06:  call   08595214 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1f4>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x1f4
08591539 +0x0b0b:  mov    %ebx,%eax
0859153b +0x0b0d:  mov    %eax,%edx
0859153d +0x0b0f:  mov    0x8(%ebp),%eax
08591540 +0x0b12:  mov    %edx,0xec(%eax)
08591546 +0x0b18:  movl   $0x4,(%esp)
0859154d +0x0b1f:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08591552 +0x0b24:  mov    %eax,%ebx
08591554 +0x0b26:  mov    %ebx,%eax
08591556 +0x0b28:  mov    %eax,(%esp)
08591559 +0x0b2b:  call   08595660 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x640>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x640
0859155e +0x0b30:  mov    %ebx,%eax
08591560 +0x0b32:  mov    %eax,%edx
08591562 +0x0b34:  mov    0x8(%ebp),%eax
08591565 +0x0b37:  mov    %edx,0xf0(%eax)
0859156b +0x0b3d:  movl   $0x4,(%esp)
08591572 +0x0b44:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08591577 +0x0b49:  mov    %eax,%ebx
08591579 +0x0b4b:  mov    %ebx,%eax
0859157b +0x0b4d:  mov    %eax,(%esp)
0859157e +0x0b50:  call   085954f4 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x4d4>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x4d4
08591583 +0x0b55:  mov    %ebx,%eax
08591585 +0x0b57:  mov    %eax,%edx
08591587 +0x0b59:  mov    0x8(%ebp),%eax
0859158a +0x0b5c:  mov    %edx,0xf4(%eax)
08591590 +0x0b62:  movl   $0x4,(%esp)
08591597 +0x0b69:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0859159c +0x0b6e:  mov    %eax,%ebx
0859159e +0x0b70:  mov    %ebx,%eax
085915a0 +0x0b72:  mov    %eax,(%esp)
085915a3 +0x0b75:  call   08595644 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x624>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x624
085915a8 +0x0b7a:  mov    %ebx,%eax
085915aa +0x0b7c:  mov    %eax,%edx
085915ac +0x0b7e:  mov    0x8(%ebp),%eax
085915af +0x0b81:  mov    %edx,0xf8(%eax)
085915b5 +0x0b87:  movl   $0x4,(%esp)
085915bc +0x0b8e:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085915c1 +0x0b93:  mov    %eax,%ebx
085915c3 +0x0b95:  mov    %ebx,%eax
085915c5 +0x0b97:  mov    %eax,(%esp)
085915c8 +0x0b9a:  call   08233412 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x8abc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x8abc
085915cd +0x0b9f:  mov    %ebx,%eax
085915cf +0x0ba1:  mov    %eax,%edx
085915d1 +0x0ba3:  mov    0x8(%ebp),%eax
085915d4 +0x0ba6:  mov    %edx,0x104(%eax)
085915da +0x0bac:  movl   $0x4,(%esp)
085915e1 +0x0bb3:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085915e6 +0x0bb8:  mov    %eax,%ebx
085915e8 +0x0bba:  mov    %ebx,%eax
085915ea +0x0bbc:  mov    %eax,(%esp)
085915ed +0x0bbf:  call   08595af8 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0xad8>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0xad8
085915f2 +0x0bc4:  mov    %ebx,%eax
085915f4 +0x0bc6:  mov    %eax,%edx
085915f6 +0x0bc8:  mov    0x8(%ebp),%eax
085915f9 +0x0bcb:  mov    %edx,0xfc(%eax)
085915ff +0x0bd1:  movl   $0x4,(%esp)
08591606 +0x0bd8:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0859160b +0x0bdd:  mov    %eax,%ebx
0859160d +0x0bdf:  mov    %ebx,%eax
0859160f +0x0be1:  mov    %eax,(%esp)
08591612 +0x0be4:  call   08595b14 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0xaf4>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0xaf4
08591617 +0x0be9:  mov    %ebx,%eax
08591619 +0x0beb:  mov    %eax,%edx
0859161b +0x0bed:  mov    0x8(%ebp),%eax
0859161e +0x0bf0:  mov    %edx,0x100(%eax)
08591624 +0x0bf6:  movl   $0x4,(%esp)
0859162b +0x0bfd:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08591630 +0x0c02:  mov    %eax,%ebx
08591632 +0x0c04:  mov    %ebx,%eax
08591634 +0x0c06:  mov    %eax,(%esp)
08591637 +0x0c09:  call   08595b30 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0xb10>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0xb10
0859163c +0x0c0e:  mov    %ebx,%eax
0859163e +0x0c10:  mov    %eax,%edx
08591640 +0x0c12:  mov    0x8(%ebp),%eax
08591643 +0x0c15:  mov    %edx,0x108(%eax)
08591649 +0x0c1b:  movl   $0x4,(%esp)
08591650 +0x0c22:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08591655 +0x0c27:  mov    %eax,%ebx
08591657 +0x0c29:  mov    %ebx,%eax
08591659 +0x0c2b:  mov    %eax,(%esp)
0859165c +0x0c2e:  call   08595b4c <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0xb2c>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0xb2c
08591661 +0x0c33:  mov    %ebx,%eax
08591663 +0x0c35:  mov    %eax,%edx
08591665 +0x0c37:  mov    0x8(%ebp),%eax
08591668 +0x0c3a:  mov    %edx,0x10c(%eax)
0859166e +0x0c40:  movl   $0x4,(%esp)
08591675 +0x0c47:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0859167a +0x0c4c:  mov    %eax,%ebx
0859167c +0x0c4e:  mov    %ebx,%eax
0859167e +0x0c50:  mov    %eax,(%esp)
08591681 +0x0c53:  call   08595b68 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0xb48>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0xb48
08591686 +0x0c58:  mov    %ebx,%eax
08591688 +0x0c5a:  mov    %eax,%edx
0859168a +0x0c5c:  mov    0x8(%ebp),%eax
0859168d +0x0c5f:  mov    %edx,0x110(%eax)
08591693 +0x0c65:  movl   $0x4,(%esp)
0859169a +0x0c6c:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0859169f +0x0c71:  mov    %eax,%ebx
085916a1 +0x0c73:  mov    %ebx,%eax
085916a3 +0x0c75:  mov    %eax,(%esp)
085916a6 +0x0c78:  call   08595b84 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0xb64>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0xb64
085916ab +0x0c7d:  mov    %ebx,%eax
085916ad +0x0c7f:  mov    %eax,%edx
085916af +0x0c81:  mov    0x8(%ebp),%eax
085916b2 +0x0c84:  mov    %edx,0x114(%eax)
085916b8 +0x0c8a:  movl   $0x4,(%esp)
085916bf +0x0c91:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085916c4 +0x0c96:  mov    %eax,%ebx
085916c6 +0x0c98:  mov    %ebx,%eax
085916c8 +0x0c9a:  mov    %eax,(%esp)
085916cb +0x0c9d:  call   08595ba0 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0xb80>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0xb80
085916d0 +0x0ca2:  mov    %ebx,%eax
085916d2 +0x0ca4:  mov    %eax,%edx
085916d4 +0x0ca6:  mov    0x8(%ebp),%eax
085916d7 +0x0ca9:  mov    %edx,0x12c(%eax)
085916dd +0x0caf:  movl   $0x4,(%esp)
085916e4 +0x0cb6:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085916e9 +0x0cbb:  mov    %eax,%ebx
085916eb +0x0cbd:  mov    %ebx,%eax
085916ed +0x0cbf:  mov    %eax,(%esp)
085916f0 +0x0cc2:  call   08595bbc <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0xb9c>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0xb9c
085916f5 +0x0cc7:  mov    %ebx,%eax
085916f7 +0x0cc9:  mov    %eax,%edx
085916f9 +0x0ccb:  mov    0x8(%ebp),%eax
085916fc +0x0cce:  mov    %edx,0x120(%eax)
08591702 +0x0cd4:  movl   $0x4,(%esp)
08591709 +0x0cdb:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0859170e +0x0ce0:  mov    %eax,%ebx
08591710 +0x0ce2:  mov    %ebx,%eax
08591712 +0x0ce4:  mov    %eax,(%esp)
08591715 +0x0ce7:  call   08595bd8 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0xbb8>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0xbb8
0859171a +0x0cec:  mov    %ebx,%eax
0859171c +0x0cee:  mov    %eax,%edx
0859171e +0x0cf0:  mov    0x8(%ebp),%eax
08591721 +0x0cf3:  mov    %edx,0x124(%eax)
08591727 +0x0cf9:  movl   $0x4,(%esp)
0859172e +0x0d00:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08591733 +0x0d05:  mov    %eax,%ebx
08591735 +0x0d07:  mov    %ebx,%eax
08591737 +0x0d09:  mov    %eax,(%esp)
0859173a +0x0d0c:  call   08595bf4 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0xbd4>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0xbd4
0859173f +0x0d11:  mov    %ebx,%eax
08591741 +0x0d13:  mov    %eax,%edx
08591743 +0x0d15:  mov    0x8(%ebp),%eax
08591746 +0x0d18:  mov    %edx,0x128(%eax)
0859174c +0x0d1e:  movl   $0x4,(%esp)
08591753 +0x0d25:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08591758 +0x0d2a:  mov    %eax,%ebx
0859175a +0x0d2c:  mov    %ebx,%eax
0859175c +0x0d2e:  mov    %eax,(%esp)
0859175f +0x0d31:  call   08595c10 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0xbf0>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0xbf0
08591764 +0x0d36:  mov    %ebx,%eax
08591766 +0x0d38:  mov    %eax,%edx
08591768 +0x0d3a:  mov    0x8(%ebp),%eax
0859176b +0x0d3d:  mov    %edx,0x118(%eax)
08591771 +0x0d43:  movl   $0x4,(%esp)
08591778 +0x0d4a:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0859177d +0x0d4f:  mov    %eax,%ebx
0859177f +0x0d51:  mov    %ebx,%eax
08591781 +0x0d53:  mov    %eax,(%esp)
08591784 +0x0d56:  call   08595c2c <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0xc0c>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0xc0c
08591789 +0x0d5b:  mov    %ebx,%eax
0859178b +0x0d5d:  mov    %eax,%edx
0859178d +0x0d5f:  mov    0x8(%ebp),%eax
08591790 +0x0d62:  mov    %edx,0x11c(%eax)
08591796 +0x0d68:  movl   $0x4,(%esp)
0859179d +0x0d6f:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085917a2 +0x0d74:  mov    %eax,%ebx
085917a4 +0x0d76:  mov    %ebx,%eax
085917a6 +0x0d78:  mov    %eax,(%esp)
085917a9 +0x0d7b:  call   08595c48 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0xc28>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0xc28
085917ae +0x0d80:  mov    %ebx,%eax
085917b0 +0x0d82:  mov    %eax,%edx
085917b2 +0x0d84:  mov    0x8(%ebp),%eax
085917b5 +0x0d87:  mov    %edx,0x130(%eax)
085917bb +0x0d8d:  movl   $0x4,(%esp)
085917c2 +0x0d94:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085917c7 +0x0d99:  mov    %eax,%ebx
085917c9 +0x0d9b:  mov    %ebx,%eax
085917cb +0x0d9d:  mov    %eax,(%esp)
085917ce +0x0da0:  call   08595c64 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0xc44>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0xc44
085917d3 +0x0da5:  mov    %ebx,%eax
085917d5 +0x0da7:  mov    %eax,%edx
085917d7 +0x0da9:  mov    0x8(%ebp),%eax
085917da +0x0dac:  mov    %edx,0x134(%eax)
085917e0 +0x0db2:  movl   $0x4,(%esp)
085917e7 +0x0db9:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085917ec +0x0dbe:  mov    %eax,%ebx
085917ee +0x0dc0:  mov    %ebx,%eax
085917f0 +0x0dc2:  mov    %eax,(%esp)
085917f3 +0x0dc5:  call   08595c80 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0xc60>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0xc60
085917f8 +0x0dca:  mov    %ebx,%eax
085917fa +0x0dcc:  mov    %eax,%edx
085917fc +0x0dce:  mov    0x8(%ebp),%eax
085917ff +0x0dd1:  mov    %edx,0x13c(%eax)
08591805 +0x0dd7:  movl   $0x4,(%esp)
0859180c +0x0dde:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08591811 +0x0de3:  mov    %eax,%ebx
08591813 +0x0de5:  mov    %ebx,%eax
08591815 +0x0de7:  mov    %eax,(%esp)
08591818 +0x0dea:  call   08595c9c <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0xc7c>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0xc7c
0859181d +0x0def:  mov    %ebx,%eax
0859181f +0x0df1:  mov    %eax,%edx
08591821 +0x0df3:  mov    0x8(%ebp),%eax
08591824 +0x0df6:  mov    %edx,0x140(%eax)
0859182a +0x0dfc:  movl   $0x4,(%esp)
08591831 +0x0e03:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08591836 +0x0e08:  mov    %eax,%ebx
08591838 +0x0e0a:  mov    %ebx,%eax
0859183a +0x0e0c:  mov    %eax,(%esp)
0859183d +0x0e0f:  call   08595cb8 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0xc98>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0xc98
08591842 +0x0e14:  mov    %ebx,%eax
08591844 +0x0e16:  mov    %eax,%edx
08591846 +0x0e18:  mov    0x8(%ebp),%eax
08591849 +0x0e1b:  mov    %edx,0x144(%eax)
0859184f +0x0e21:  movl   $0x4,(%esp)
08591856 +0x0e28:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0859185b +0x0e2d:  mov    %eax,%ebx
0859185d +0x0e2f:  mov    %ebx,%eax
0859185f +0x0e31:  mov    %eax,(%esp)
08591862 +0x0e34:  call   08595cd4 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0xcb4>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0xcb4
08591867 +0x0e39:  mov    %ebx,%eax
08591869 +0x0e3b:  mov    %eax,%edx
0859186b +0x0e3d:  mov    0x8(%ebp),%eax
0859186e +0x0e40:  mov    %edx,0x148(%eax)
08591874 +0x0e46:  movl   $0x4,(%esp)
0859187b +0x0e4d:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08591880 +0x0e52:  mov    %eax,%ebx
08591882 +0x0e54:  mov    %ebx,%eax
08591884 +0x0e56:  mov    %eax,(%esp)
08591887 +0x0e59:  call   08595cf0 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0xcd0>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0xcd0
0859188c +0x0e5e:  mov    %ebx,%eax
0859188e +0x0e60:  mov    %eax,%edx
08591890 +0x0e62:  mov    0x8(%ebp),%eax
08591893 +0x0e65:  mov    %edx,0x14c(%eax)
08591899 +0x0e6b:  movl   $0x4,(%esp)
085918a0 +0x0e72:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085918a5 +0x0e77:  mov    %eax,%ebx
085918a7 +0x0e79:  mov    %ebx,%eax
085918a9 +0x0e7b:  mov    %eax,(%esp)
085918ac +0x0e7e:  call   08595d0c <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0xcec>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0xcec
085918b1 +0x0e83:  mov    %ebx,%eax
085918b3 +0x0e85:  mov    %eax,%edx
085918b5 +0x0e87:  mov    0x8(%ebp),%eax
085918b8 +0x0e8a:  mov    %edx,0x6dc(%eax)
085918be +0x0e90:  movl   $0x4,(%esp)
085918c5 +0x0e97:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085918ca +0x0e9c:  mov    %eax,%ebx
085918cc +0x0e9e:  mov    %ebx,%eax
085918ce +0x0ea0:  mov    %eax,(%esp)
085918d1 +0x0ea3:  call   08595d28 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0xd08>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0xd08
085918d6 +0x0ea8:  mov    %ebx,%eax
085918d8 +0x0eaa:  mov    %eax,%edx
085918da +0x0eac:  mov    0x8(%ebp),%eax
085918dd +0x0eaf:  mov    %edx,0x150(%eax)
085918e3 +0x0eb5:  movl   $0x4,(%esp)
085918ea +0x0ebc:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085918ef +0x0ec1:  mov    %eax,%ebx
085918f1 +0x0ec3:  mov    %ebx,%eax
085918f3 +0x0ec5:  mov    %eax,(%esp)
085918f6 +0x0ec8:  call   08595d44 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0xd24>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0xd24
085918fb +0x0ecd:  mov    %ebx,%eax
085918fd +0x0ecf:  mov    %eax,%edx
085918ff +0x0ed1:  mov    0x8(%ebp),%eax
08591902 +0x0ed4:  mov    %edx,0x174(%eax)
08591908 +0x0eda:  movl   $0x4,(%esp)
0859190f +0x0ee1:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08591914 +0x0ee6:  mov    %eax,%ebx
08591916 +0x0ee8:  mov    %ebx,%eax
08591918 +0x0eea:  mov    %eax,(%esp)
0859191b +0x0eed:  call   08595d60 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0xd40>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0xd40
08591920 +0x0ef2:  mov    %ebx,%eax
08591922 +0x0ef4:  mov    %eax,%edx
08591924 +0x0ef6:  mov    0x8(%ebp),%eax
08591927 +0x0ef9:  mov    %edx,0x178(%eax)
0859192d +0x0eff:  movl   $0x4,(%esp)
08591934 +0x0f06:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08591939 +0x0f0b:  mov    %eax,%ebx
0859193b +0x0f0d:  mov    %ebx,%eax
0859193d +0x0f0f:  mov    %eax,(%esp)
08591940 +0x0f12:  call   08595d7c <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0xd5c>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0xd5c
08591945 +0x0f17:  mov    %ebx,%eax
08591947 +0x0f19:  mov    %eax,%edx
08591949 +0x0f1b:  mov    0x8(%ebp),%eax
0859194c +0x0f1e:  mov    %edx,0x17c(%eax)
08591952 +0x0f24:  movl   $0x4,(%esp)
08591959 +0x0f2b:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0859195e +0x0f30:  mov    %eax,%ebx
08591960 +0x0f32:  mov    %ebx,%eax
08591962 +0x0f34:  mov    %eax,(%esp)
08591965 +0x0f37:  call   08595d98 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0xd78>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0xd78
0859196a +0x0f3c:  mov    %ebx,%eax
0859196c +0x0f3e:  mov    %eax,%edx
0859196e +0x0f40:  mov    0x8(%ebp),%eax
08591971 +0x0f43:  mov    %edx,0x180(%eax)
08591977 +0x0f49:  movl   $0x4,(%esp)
0859197e +0x0f50:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08591983 +0x0f55:  mov    %eax,%ebx
08591985 +0x0f57:  mov    %ebx,%eax
08591987 +0x0f59:  mov    %eax,(%esp)
0859198a +0x0f5c:  call   08595db4 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0xd94>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0xd94
0859198f +0x0f61:  mov    %ebx,%eax
08591991 +0x0f63:  mov    %eax,%edx
08591993 +0x0f65:  mov    0x8(%ebp),%eax
08591996 +0x0f68:  mov    %edx,0x154(%eax)
0859199c +0x0f6e:  movl   $0x4,(%esp)
085919a3 +0x0f75:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085919a8 +0x0f7a:  mov    %eax,%ebx
085919aa +0x0f7c:  mov    %ebx,%eax
085919ac +0x0f7e:  mov    %eax,(%esp)
085919af +0x0f81:  call   08595dd0 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0xdb0>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0xdb0
085919b4 +0x0f86:  mov    %ebx,%eax
085919b6 +0x0f88:  mov    %eax,%edx
085919b8 +0x0f8a:  mov    0x8(%ebp),%eax
085919bb +0x0f8d:  mov    %edx,0x158(%eax)
085919c1 +0x0f93:  movl   $0x4,(%esp)
085919c8 +0x0f9a:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085919cd +0x0f9f:  mov    %eax,%ebx
085919cf +0x0fa1:  mov    %ebx,%eax
085919d1 +0x0fa3:  mov    %eax,(%esp)
085919d4 +0x0fa6:  call   08595dec <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0xdcc>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0xdcc
085919d9 +0x0fab:  mov    %ebx,%eax
085919db +0x0fad:  mov    %eax,%edx
085919dd +0x0faf:  mov    0x8(%ebp),%eax
085919e0 +0x0fb2:  mov    %edx,0x15c(%eax)
085919e6 +0x0fb8:  movl   $0x4,(%esp)
085919ed +0x0fbf:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085919f2 +0x0fc4:  mov    %eax,%ebx
085919f4 +0x0fc6:  mov    %ebx,%eax
085919f6 +0x0fc8:  mov    %eax,(%esp)
085919f9 +0x0fcb:  call   08595e08 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0xde8>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0xde8
085919fe +0x0fd0:  mov    %ebx,%eax
08591a00 +0x0fd2:  mov    %eax,%edx
08591a02 +0x0fd4:  mov    0x8(%ebp),%eax
08591a05 +0x0fd7:  mov    %edx,0x160(%eax)
08591a0b +0x0fdd:  movl   $0x4,(%esp)
08591a12 +0x0fe4:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08591a17 +0x0fe9:  mov    %eax,%ebx
08591a19 +0x0feb:  mov    %ebx,%eax
08591a1b +0x0fed:  mov    %eax,(%esp)
08591a1e +0x0ff0:  call   08595e24 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0xe04>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0xe04
08591a23 +0x0ff5:  mov    %ebx,%eax
08591a25 +0x0ff7:  mov    %eax,%edx
08591a27 +0x0ff9:  mov    0x8(%ebp),%eax
08591a2a +0x0ffc:  mov    %edx,0x164(%eax)
08591a30 +0x1002:  movl   $0x4,(%esp)
08591a37 +0x1009:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08591a3c +0x100e:  mov    %eax,%ebx
08591a3e +0x1010:  mov    %ebx,%eax
08591a40 +0x1012:  mov    %eax,(%esp)
08591a43 +0x1015:  call   08595e40 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0xe20>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0xe20
08591a48 +0x101a:  mov    %ebx,%eax
08591a4a +0x101c:  mov    %eax,%edx
08591a4c +0x101e:  mov    0x8(%ebp),%eax
08591a4f +0x1021:  mov    %edx,0x168(%eax)
08591a55 +0x1027:  movl   $0x4,(%esp)
08591a5c +0x102e:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08591a61 +0x1033:  mov    %eax,%ebx
08591a63 +0x1035:  mov    %ebx,%eax
08591a65 +0x1037:  mov    %eax,(%esp)
08591a68 +0x103a:  call   08595e5c <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0xe3c>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0xe3c
08591a6d +0x103f:  mov    %ebx,%eax
08591a6f +0x1041:  mov    %eax,%edx
08591a71 +0x1043:  mov    0x8(%ebp),%eax
08591a74 +0x1046:  mov    %edx,0x16c(%eax)
08591a7a +0x104c:  movl   $0x4,(%esp)
08591a81 +0x1053:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08591a86 +0x1058:  mov    %eax,%ebx
08591a88 +0x105a:  mov    %ebx,%eax
08591a8a +0x105c:  mov    %eax,(%esp)
08591a8d +0x105f:  call   08595e78 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0xe58>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0xe58
08591a92 +0x1064:  mov    %ebx,%eax
08591a94 +0x1066:  mov    %eax,%edx
08591a96 +0x1068:  mov    0x8(%ebp),%eax
08591a99 +0x106b:  mov    %edx,0x190(%eax)
08591a9f +0x1071:  movl   $0x4,(%esp)
08591aa6 +0x1078:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08591aab +0x107d:  mov    %eax,%ebx
08591aad +0x107f:  mov    %ebx,%eax
08591aaf +0x1081:  mov    %eax,(%esp)
08591ab2 +0x1084:  call   08595e94 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0xe74>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0xe74
08591ab7 +0x1089:  mov    %ebx,%eax
08591ab9 +0x108b:  mov    %eax,%edx
08591abb +0x108d:  mov    0x8(%ebp),%eax
08591abe +0x1090:  mov    %edx,0x194(%eax)
08591ac4 +0x1096:  movl   $0x4,(%esp)
08591acb +0x109d:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08591ad0 +0x10a2:  mov    %eax,%ebx
08591ad2 +0x10a4:  mov    %ebx,%eax
08591ad4 +0x10a6:  mov    %eax,(%esp)
08591ad7 +0x10a9:  call   08595eb0 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0xe90>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0xe90
08591adc +0x10ae:  mov    %ebx,%eax
08591ade +0x10b0:  mov    %eax,%edx
08591ae0 +0x10b2:  mov    0x8(%ebp),%eax
08591ae3 +0x10b5:  mov    %edx,0x18c(%eax)
08591ae9 +0x10bb:  movl   $0x4,(%esp)
08591af0 +0x10c2:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08591af5 +0x10c7:  mov    %eax,%ebx
08591af7 +0x10c9:  mov    %ebx,%eax
08591af9 +0x10cb:  mov    %eax,(%esp)
08591afc +0x10ce:  call   08595ecc <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0xeac>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0xeac
08591b01 +0x10d3:  mov    %ebx,%eax
08591b03 +0x10d5:  mov    %eax,%edx
08591b05 +0x10d7:  mov    0x8(%ebp),%eax
08591b08 +0x10da:  mov    %edx,0x184(%eax)
08591b0e +0x10e0:  movl   $0x4,(%esp)
08591b15 +0x10e7:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08591b1a +0x10ec:  mov    %eax,%ebx
08591b1c +0x10ee:  mov    %ebx,%eax
08591b1e +0x10f0:  mov    %eax,(%esp)
08591b21 +0x10f3:  call   08595ee8 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0xec8>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0xec8
08591b26 +0x10f8:  mov    %ebx,%eax
08591b28 +0x10fa:  mov    %eax,%edx
08591b2a +0x10fc:  mov    0x8(%ebp),%eax
08591b2d +0x10ff:  mov    %edx,0x188(%eax)
08591b33 +0x1105:  movl   $0x4,(%esp)
08591b3a +0x110c:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08591b3f +0x1111:  mov    %eax,%ebx
08591b41 +0x1113:  mov    %ebx,%eax
08591b43 +0x1115:  mov    %eax,(%esp)
08591b46 +0x1118:  call   08595f04 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0xee4>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0xee4
08591b4b +0x111d:  mov    %ebx,%eax
08591b4d +0x111f:  mov    %eax,%edx
08591b4f +0x1121:  mov    0x8(%ebp),%eax
08591b52 +0x1124:  mov    %edx,0x198(%eax)
08591b58 +0x112a:  movl   $0x4,(%esp)
08591b5f +0x1131:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08591b64 +0x1136:  mov    %eax,%ebx
08591b66 +0x1138:  mov    %ebx,%eax
08591b68 +0x113a:  mov    %eax,(%esp)
08591b6b +0x113d:  call   08595f20 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0xf00>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0xf00
08591b70 +0x1142:  mov    %ebx,%eax
08591b72 +0x1144:  mov    %eax,%edx
08591b74 +0x1146:  mov    0x8(%ebp),%eax
08591b77 +0x1149:  mov    %edx,0x19c(%eax)
08591b7d +0x114f:  movl   $0x4,(%esp)
08591b84 +0x1156:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08591b89 +0x115b:  mov    %eax,%ebx
08591b8b +0x115d:  mov    %ebx,%eax
08591b8d +0x115f:  mov    %eax,(%esp)
08591b90 +0x1162:  call   08595f3c <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0xf1c>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0xf1c
08591b95 +0x1167:  mov    %ebx,%eax
08591b97 +0x1169:  mov    %eax,%edx
08591b99 +0x116b:  mov    0x8(%ebp),%eax
08591b9c +0x116e:  mov    %edx,0x1a0(%eax)
08591ba2 +0x1174:  movl   $0x4,(%esp)
08591ba9 +0x117b:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08591bae +0x1180:  mov    %eax,%ebx
08591bb0 +0x1182:  mov    %ebx,%eax
08591bb2 +0x1184:  mov    %eax,(%esp)
08591bb5 +0x1187:  call   08595f58 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0xf38>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0xf38
08591bba +0x118c:  mov    %ebx,%eax
08591bbc +0x118e:  mov    %eax,%edx
08591bbe +0x1190:  mov    0x8(%ebp),%eax
08591bc1 +0x1193:  mov    %edx,0x1a4(%eax)
08591bc7 +0x1199:  movl   $0x4,(%esp)
08591bce +0x11a0:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08591bd3 +0x11a5:  mov    %eax,%ebx
08591bd5 +0x11a7:  mov    %ebx,%eax
08591bd7 +0x11a9:  mov    %eax,(%esp)
08591bda +0x11ac:  call   08595f74 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0xf54>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0xf54
08591bdf +0x11b1:  mov    %ebx,%eax
08591be1 +0x11b3:  mov    %eax,%edx
08591be3 +0x11b5:  mov    0x8(%ebp),%eax
08591be6 +0x11b8:  mov    %edx,0x1b0(%eax)
08591bec +0x11be:  movl   $0x4,(%esp)
08591bf3 +0x11c5:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08591bf8 +0x11ca:  mov    %eax,%ebx
08591bfa +0x11cc:  mov    %ebx,%eax
08591bfc +0x11ce:  mov    %eax,(%esp)
08591bff +0x11d1:  call   08595698 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x678>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x678
08591c04 +0x11d6:  mov    %ebx,%eax
08591c06 +0x11d8:  mov    %eax,%edx
08591c08 +0x11da:  mov    0x8(%ebp),%eax
08591c0b +0x11dd:  mov    %edx,0x1b8(%eax)
08591c11 +0x11e3:  movl   $0x4,(%esp)
08591c18 +0x11ea:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08591c1d +0x11ef:  mov    %eax,%ebx
08591c1f +0x11f1:  mov    %ebx,%eax
08591c21 +0x11f3:  mov    %eax,(%esp)
08591c24 +0x11f6:  call   08595f90 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0xf70>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0xf70
08591c29 +0x11fb:  mov    %ebx,%eax
08591c2b +0x11fd:  mov    %eax,%edx
08591c2d +0x11ff:  mov    0x8(%ebp),%eax
08591c30 +0x1202:  mov    %edx,0x1bc(%eax)
08591c36 +0x1208:  movl   $0x4,(%esp)
08591c3d +0x120f:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08591c42 +0x1214:  mov    %eax,%ebx
08591c44 +0x1216:  mov    %ebx,%eax
08591c46 +0x1218:  mov    %eax,(%esp)
08591c49 +0x121b:  call   08595fac <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0xf8c>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0xf8c
08591c4e +0x1220:  mov    %ebx,%eax
08591c50 +0x1222:  mov    %eax,%edx
08591c52 +0x1224:  mov    0x8(%ebp),%eax
08591c55 +0x1227:  mov    %edx,0x1c0(%eax)
08591c5b +0x122d:  movl   $0x4,(%esp)
08591c62 +0x1234:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08591c67 +0x1239:  mov    %eax,%ebx
08591c69 +0x123b:  mov    %ebx,%eax
08591c6b +0x123d:  mov    %eax,(%esp)
08591c6e +0x1240:  call   08595fc8 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0xfa8>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0xfa8
08591c73 +0x1245:  mov    %ebx,%eax
08591c75 +0x1247:  mov    %eax,%edx
08591c77 +0x1249:  mov    0x8(%ebp),%eax
08591c7a +0x124c:  mov    %edx,0x1c4(%eax)
08591c80 +0x1252:  movl   $0x4,(%esp)
08591c87 +0x1259:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08591c8c +0x125e:  mov    %eax,%ebx
08591c8e +0x1260:  mov    %ebx,%eax
08591c90 +0x1262:  mov    %eax,(%esp)
08591c93 +0x1265:  call   08595fe4 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0xfc4>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0xfc4
08591c98 +0x126a:  mov    %ebx,%eax
08591c9a +0x126c:  mov    %eax,%edx
08591c9c +0x126e:  mov    0x8(%ebp),%eax
08591c9f +0x1271:  mov    %edx,0x1c8(%eax)
08591ca5 +0x1277:  movl   $0x4,(%esp)
08591cac +0x127e:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08591cb1 +0x1283:  mov    %eax,%ebx
08591cb3 +0x1285:  mov    %ebx,%eax
08591cb5 +0x1287:  mov    %eax,(%esp)
08591cb8 +0x128a:  call   08596000 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0xfe0>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0xfe0
08591cbd +0x128f:  mov    %ebx,%eax
08591cbf +0x1291:  mov    %eax,%edx
08591cc1 +0x1293:  mov    0x8(%ebp),%eax
08591cc4 +0x1296:  mov    %edx,0x1cc(%eax)
08591cca +0x129c:  movl   $0x4,(%esp)
08591cd1 +0x12a3:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08591cd6 +0x12a8:  mov    %eax,%ebx
08591cd8 +0x12aa:  mov    %ebx,%eax
08591cda +0x12ac:  mov    %eax,(%esp)
08591cdd +0x12af:  call   0859601c <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0xffc>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0xffc
08591ce2 +0x12b4:  mov    %ebx,%eax
08591ce4 +0x12b6:  mov    %eax,%edx
08591ce6 +0x12b8:  mov    0x8(%ebp),%eax
08591ce9 +0x12bb:  mov    %edx,0x1d4(%eax)
08591cef +0x12c1:  movl   $0x4,(%esp)
08591cf6 +0x12c8:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08591cfb +0x12cd:  mov    %eax,%ebx
08591cfd +0x12cf:  mov    %ebx,%eax
08591cff +0x12d1:  mov    %eax,(%esp)
08591d02 +0x12d4:  call   08596038 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1018>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x1018
08591d07 +0x12d9:  mov    %ebx,%eax
08591d09 +0x12db:  mov    %eax,%edx
08591d0b +0x12dd:  mov    0x8(%ebp),%eax
08591d0e +0x12e0:  mov    %edx,0x1d8(%eax)
08591d14 +0x12e6:  movl   $0x4,(%esp)
08591d1b +0x12ed:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08591d20 +0x12f2:  mov    %eax,%ebx
08591d22 +0x12f4:  mov    %ebx,%eax
08591d24 +0x12f6:  mov    %eax,(%esp)
08591d27 +0x12f9:  call   08596054 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1034>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x1034
08591d2c +0x12fe:  mov    %ebx,%eax
08591d2e +0x1300:  mov    %eax,%edx
08591d30 +0x1302:  mov    0x8(%ebp),%eax
08591d33 +0x1305:  mov    %edx,0x1d0(%eax)
08591d39 +0x130b:  movl   $0x4,(%esp)
08591d40 +0x1312:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08591d45 +0x1317:  mov    %eax,%ebx
08591d47 +0x1319:  mov    %ebx,%eax
08591d49 +0x131b:  mov    %eax,(%esp)
08591d4c +0x131e:  call   08596070 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1050>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x1050
08591d51 +0x1323:  mov    %ebx,%eax
08591d53 +0x1325:  mov    %eax,%edx
08591d55 +0x1327:  mov    0x8(%ebp),%eax
08591d58 +0x132a:  mov    %edx,0x1e0(%eax)
08591d5e +0x1330:  movl   $0x4,(%esp)
08591d65 +0x1337:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08591d6a +0x133c:  mov    %eax,%ebx
08591d6c +0x133e:  mov    %ebx,%eax
08591d6e +0x1340:  mov    %eax,(%esp)
08591d71 +0x1343:  call   0859608c <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x106c>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x106c
08591d76 +0x1348:  mov    %ebx,%eax
08591d78 +0x134a:  mov    %eax,%edx
08591d7a +0x134c:  mov    0x8(%ebp),%eax
08591d7d +0x134f:  mov    %edx,0x1e4(%eax)
08591d83 +0x1355:  movl   $0x4,(%esp)
08591d8a +0x135c:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08591d8f +0x1361:  mov    %eax,%ebx
08591d91 +0x1363:  mov    %ebx,%eax
08591d93 +0x1365:  mov    %eax,(%esp)
08591d96 +0x1368:  call   085960a8 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1088>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x1088
08591d9b +0x136d:  mov    %ebx,%eax
08591d9d +0x136f:  mov    %eax,%edx
08591d9f +0x1371:  mov    0x8(%ebp),%eax
08591da2 +0x1374:  mov    %edx,0x1e8(%eax)
08591da8 +0x137a:  movl   $0x4,(%esp)
08591daf +0x1381:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08591db4 +0x1386:  mov    %eax,%ebx
08591db6 +0x1388:  mov    %ebx,%eax
08591db8 +0x138a:  mov    %eax,(%esp)
08591dbb +0x138d:  call   085960c4 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x10a4>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x10a4
08591dc0 +0x1392:  mov    %ebx,%eax
08591dc2 +0x1394:  mov    %eax,%edx
08591dc4 +0x1396:  mov    0x8(%ebp),%eax
08591dc7 +0x1399:  mov    %edx,0x1ec(%eax)
08591dcd +0x139f:  movl   $0x4,(%esp)
08591dd4 +0x13a6:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08591dd9 +0x13ab:  mov    %eax,%ebx
08591ddb +0x13ad:  mov    %ebx,%eax
08591ddd +0x13af:  mov    %eax,(%esp)
08591de0 +0x13b2:  call   085960e0 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x10c0>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x10c0
08591de5 +0x13b7:  mov    %ebx,%eax
08591de7 +0x13b9:  mov    %eax,%edx
08591de9 +0x13bb:  mov    0x8(%ebp),%eax
08591dec +0x13be:  mov    %edx,0x1f0(%eax)
08591df2 +0x13c4:  movl   $0x4,(%esp)
08591df9 +0x13cb:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08591dfe +0x13d0:  mov    %eax,%ebx
08591e00 +0x13d2:  mov    %ebx,%eax
08591e02 +0x13d4:  mov    %eax,(%esp)
08591e05 +0x13d7:  call   085960fc <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x10dc>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x10dc
08591e0a +0x13dc:  mov    %ebx,%eax
08591e0c +0x13de:  mov    %eax,%edx
08591e0e +0x13e0:  mov    0x8(%ebp),%eax
08591e11 +0x13e3:  mov    %edx,0x1f4(%eax)
08591e17 +0x13e9:  movl   $0x4,(%esp)
08591e1e +0x13f0:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08591e23 +0x13f5:  mov    %eax,%ebx
08591e25 +0x13f7:  mov    %ebx,%eax
08591e27 +0x13f9:  mov    %eax,(%esp)
08591e2a +0x13fc:  call   08596118 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x10f8>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x10f8
08591e2f +0x1401:  mov    %ebx,%eax
08591e31 +0x1403:  mov    %eax,%edx
08591e33 +0x1405:  mov    0x8(%ebp),%eax
08591e36 +0x1408:  mov    %edx,0x1f8(%eax)
08591e3c +0x140e:  movl   $0x4,(%esp)
08591e43 +0x1415:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08591e48 +0x141a:  mov    %eax,%ebx
08591e4a +0x141c:  mov    %ebx,%eax
08591e4c +0x141e:  mov    %eax,(%esp)
08591e4f +0x1421:  call   08596134 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1114>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x1114
08591e54 +0x1426:  mov    %ebx,%eax
08591e56 +0x1428:  mov    %eax,%edx
08591e58 +0x142a:  mov    0x8(%ebp),%eax
08591e5b +0x142d:  mov    %edx,0x204(%eax)
08591e61 +0x1433:  movl   $0x4,(%esp)
08591e68 +0x143a:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08591e6d +0x143f:  mov    %eax,%ebx
08591e6f +0x1441:  mov    %ebx,%eax
08591e71 +0x1443:  mov    %eax,(%esp)
08591e74 +0x1446:  call   08596150 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1130>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x1130
08591e79 +0x144b:  mov    %ebx,%eax
08591e7b +0x144d:  mov    %eax,%edx
08591e7d +0x144f:  mov    0x8(%ebp),%eax
08591e80 +0x1452:  mov    %edx,0x21c(%eax)
08591e86 +0x1458:  movl   $0x4,(%esp)
08591e8d +0x145f:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08591e92 +0x1464:  mov    %eax,%ebx
08591e94 +0x1466:  mov    %ebx,%eax
08591e96 +0x1468:  mov    %eax,(%esp)
08591e99 +0x146b:  call   0859616c <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x114c>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x114c
08591e9e +0x1470:  mov    %ebx,%eax
08591ea0 +0x1472:  mov    %eax,%edx
08591ea2 +0x1474:  mov    0x8(%ebp),%eax
08591ea5 +0x1477:  mov    %edx,0x1a8(%eax)
08591eab +0x147d:  movl   $0x4,(%esp)
08591eb2 +0x1484:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08591eb7 +0x1489:  mov    %eax,%ebx
08591eb9 +0x148b:  mov    %ebx,%eax
08591ebb +0x148d:  mov    %eax,(%esp)
08591ebe +0x1490:  call   08596188 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1168>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x1168
08591ec3 +0x1495:  mov    %ebx,%eax
08591ec5 +0x1497:  mov    %eax,%edx
08591ec7 +0x1499:  mov    0x8(%ebp),%eax
08591eca +0x149c:  mov    %edx,0x224(%eax)
08591ed0 +0x14a2:  movl   $0x4,(%esp)
08591ed7 +0x14a9:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08591edc +0x14ae:  mov    %eax,%ebx
08591ede +0x14b0:  mov    %ebx,%eax
08591ee0 +0x14b2:  mov    %eax,(%esp)
08591ee3 +0x14b5:  call   085961a4 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1184>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x1184
08591ee8 +0x14ba:  mov    %ebx,%eax
08591eea +0x14bc:  mov    %eax,%edx
08591eec +0x14be:  mov    0x8(%ebp),%eax
08591eef +0x14c1:  mov    %edx,0x228(%eax)
08591ef5 +0x14c7:  movl   $0x4,(%esp)
08591efc +0x14ce:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08591f01 +0x14d3:  mov    %eax,%ebx
08591f03 +0x14d5:  mov    %ebx,%eax
08591f05 +0x14d7:  mov    %eax,(%esp)
08591f08 +0x14da:  call   085961c0 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x11a0>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x11a0
08591f0d +0x14df:  mov    %ebx,%eax
08591f0f +0x14e1:  mov    %eax,%edx
08591f11 +0x14e3:  mov    0x8(%ebp),%eax
08591f14 +0x14e6:  mov    %edx,0x22c(%eax)
08591f1a +0x14ec:  movl   $0x4,(%esp)
08591f21 +0x14f3:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08591f26 +0x14f8:  mov    %eax,%ebx
08591f28 +0x14fa:  mov    %ebx,%eax
08591f2a +0x14fc:  mov    %eax,(%esp)
08591f2d +0x14ff:  call   085961dc <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x11bc>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x11bc
08591f32 +0x1504:  mov    %ebx,%eax
08591f34 +0x1506:  mov    %eax,%edx
08591f36 +0x1508:  mov    0x8(%ebp),%eax
08591f39 +0x150b:  mov    %edx,0x230(%eax)
08591f3f +0x1511:  movl   $0x4,(%esp)
08591f46 +0x1518:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08591f4b +0x151d:  mov    %eax,%ebx
08591f4d +0x151f:  mov    %ebx,%eax
08591f4f +0x1521:  mov    %eax,(%esp)
08591f52 +0x1524:  call   085961f8 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x11d8>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x11d8
08591f57 +0x1529:  mov    %ebx,%eax
08591f59 +0x152b:  mov    %eax,%edx
08591f5b +0x152d:  mov    0x8(%ebp),%eax
08591f5e +0x1530:  mov    %edx,0x234(%eax)
08591f64 +0x1536:  movl   $0x4,(%esp)
08591f6b +0x153d:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08591f70 +0x1542:  mov    %eax,%ebx
08591f72 +0x1544:  mov    %ebx,%eax
08591f74 +0x1546:  mov    %eax,(%esp)
08591f77 +0x1549:  call   08596214 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x11f4>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x11f4
08591f7c +0x154e:  mov    %ebx,%eax
08591f7e +0x1550:  mov    %eax,%edx
08591f80 +0x1552:  mov    0x8(%ebp),%eax
08591f83 +0x1555:  mov    %edx,0x23c(%eax)
08591f89 +0x155b:  movl   $0x4,(%esp)
08591f90 +0x1562:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08591f95 +0x1567:  mov    %eax,%ebx
08591f97 +0x1569:  mov    %ebx,%eax
08591f99 +0x156b:  mov    %eax,(%esp)
08591f9c +0x156e:  call   08596230 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1210>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x1210
08591fa1 +0x1573:  mov    %ebx,%eax
08591fa3 +0x1575:  mov    %eax,%edx
08591fa5 +0x1577:  mov    0x8(%ebp),%eax
08591fa8 +0x157a:  mov    %edx,0x244(%eax)
08591fae +0x1580:  movl   $0x4,(%esp)
08591fb5 +0x1587:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08591fba +0x158c:  mov    %eax,%ebx
08591fbc +0x158e:  mov    %ebx,%eax
08591fbe +0x1590:  mov    %eax,(%esp)
08591fc1 +0x1593:  call   0859624c <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x122c>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x122c
08591fc6 +0x1598:  mov    %ebx,%eax
08591fc8 +0x159a:  mov    %eax,%edx
08591fca +0x159c:  mov    0x8(%ebp),%eax
08591fcd +0x159f:  mov    %edx,0x248(%eax)
08591fd3 +0x15a5:  movl   $0x4,(%esp)
08591fda +0x15ac:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08591fdf +0x15b1:  mov    %eax,%ebx
08591fe1 +0x15b3:  mov    %ebx,%eax
08591fe3 +0x15b5:  mov    %eax,(%esp)
08591fe6 +0x15b8:  call   08596268 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1248>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x1248
08591feb +0x15bd:  mov    %ebx,%eax
08591fed +0x15bf:  mov    %eax,%edx
08591fef +0x15c1:  mov    0x8(%ebp),%eax
08591ff2 +0x15c4:  mov    %edx,0x250(%eax)
08591ff8 +0x15ca:  movl   $0x4,(%esp)
08591fff +0x15d1:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08592004 +0x15d6:  mov    %eax,%ebx
08592006 +0x15d8:  mov    %ebx,%eax
08592008 +0x15da:  mov    %eax,(%esp)
0859200b +0x15dd:  call   08596284 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1264>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x1264
08592010 +0x15e2:  mov    %ebx,%eax
08592012 +0x15e4:  mov    %eax,%edx
08592014 +0x15e6:  mov    0x8(%ebp),%eax
08592017 +0x15e9:  mov    %edx,0x254(%eax)
0859201d +0x15ef:  movl   $0x4,(%esp)
08592024 +0x15f6:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08592029 +0x15fb:  mov    %eax,%ebx
0859202b +0x15fd:  mov    %ebx,%eax
0859202d +0x15ff:  mov    %eax,(%esp)
08592030 +0x1602:  call   085962a0 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1280>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x1280
08592035 +0x1607:  mov    %ebx,%eax
08592037 +0x1609:  mov    %eax,%edx
08592039 +0x160b:  mov    0x8(%ebp),%eax
0859203c +0x160e:  mov    %edx,0x258(%eax)
08592042 +0x1614:  movl   $0x4,(%esp)
08592049 +0x161b:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0859204e +0x1620:  mov    %eax,%ebx
08592050 +0x1622:  mov    %ebx,%eax
08592052 +0x1624:  mov    %eax,(%esp)
08592055 +0x1627:  call   085962bc <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x129c>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x129c
0859205a +0x162c:  mov    %ebx,%eax
0859205c +0x162e:  mov    %eax,%edx
0859205e +0x1630:  mov    0x8(%ebp),%eax
08592061 +0x1633:  mov    %edx,0x260(%eax)
08592067 +0x1639:  movl   $0x4,(%esp)
0859206e +0x1640:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08592073 +0x1645:  mov    %eax,%ebx
08592075 +0x1647:  mov    %ebx,%eax
08592077 +0x1649:  mov    %eax,(%esp)
0859207a +0x164c:  call   085962d8 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x12b8>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x12b8
0859207f +0x1651:  mov    %ebx,%eax
08592081 +0x1653:  mov    %eax,%edx
08592083 +0x1655:  mov    0x8(%ebp),%eax
08592086 +0x1658:  mov    %edx,0x3e0(%eax)
0859208c +0x165e:  movl   $0x4,(%esp)
08592093 +0x1665:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08592098 +0x166a:  mov    %eax,%ebx
0859209a +0x166c:  mov    %ebx,%eax
0859209c +0x166e:  mov    %eax,(%esp)
0859209f +0x1671:  call   085962f4 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x12d4>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x12d4
085920a4 +0x1676:  mov    %ebx,%eax
085920a6 +0x1678:  mov    %eax,%edx
085920a8 +0x167a:  mov    0x8(%ebp),%eax
085920ab +0x167d:  mov    %edx,0x3e4(%eax)
085920b1 +0x1683:  movl   $0x4,(%esp)
085920b8 +0x168a:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085920bd +0x168f:  mov    %eax,%ebx
085920bf +0x1691:  mov    %ebx,%eax
085920c1 +0x1693:  mov    %eax,(%esp)
085920c4 +0x1696:  call   08596310 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x12f0>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x12f0
085920c9 +0x169b:  mov    %ebx,%eax
085920cb +0x169d:  mov    %eax,%edx
085920cd +0x169f:  mov    0x8(%ebp),%eax
085920d0 +0x16a2:  mov    %edx,0x264(%eax)
085920d6 +0x16a8:  movl   $0x4,(%esp)
085920dd +0x16af:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085920e2 +0x16b4:  mov    %eax,%ebx
085920e4 +0x16b6:  mov    %ebx,%eax
085920e6 +0x16b8:  mov    %eax,(%esp)
085920e9 +0x16bb:  call   0859632c <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x130c>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x130c
085920ee +0x16c0:  mov    %ebx,%eax
085920f0 +0x16c2:  mov    %eax,%edx
085920f2 +0x16c4:  mov    0x8(%ebp),%eax
085920f5 +0x16c7:  mov    %edx,0x268(%eax)
085920fb +0x16cd:  movl   $0x4,(%esp)
08592102 +0x16d4:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08592107 +0x16d9:  mov    %eax,%ebx
08592109 +0x16db:  mov    %ebx,%eax
0859210b +0x16dd:  mov    %eax,(%esp)
0859210e +0x16e0:  call   08596348 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1328>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x1328
08592113 +0x16e5:  mov    %ebx,%eax
08592115 +0x16e7:  mov    %eax,%edx
08592117 +0x16e9:  mov    0x8(%ebp),%eax
0859211a +0x16ec:  mov    %edx,0x26c(%eax)
08592120 +0x16f2:  movl   $0x4,(%esp)
08592127 +0x16f9:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0859212c +0x16fe:  mov    %eax,%ebx
0859212e +0x1700:  mov    %ebx,%eax
08592130 +0x1702:  mov    %eax,(%esp)
08592133 +0x1705:  call   08596364 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1344>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x1344
08592138 +0x170a:  mov    %ebx,%eax
0859213a +0x170c:  mov    %eax,%edx
0859213c +0x170e:  mov    0x8(%ebp),%eax
0859213f +0x1711:  mov    %edx,0x270(%eax)
08592145 +0x1717:  movl   $0x4,(%esp)
0859214c +0x171e:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08592151 +0x1723:  mov    %eax,%ebx
08592153 +0x1725:  mov    %ebx,%eax
08592155 +0x1727:  mov    %eax,(%esp)
08592158 +0x172a:  call   08596380 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1360>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x1360
0859215d +0x172f:  mov    %ebx,%eax
0859215f +0x1731:  mov    %eax,%edx
08592161 +0x1733:  mov    0x8(%ebp),%eax
08592164 +0x1736:  mov    %edx,0x274(%eax)
0859216a +0x173c:  movl   $0x4,(%esp)
08592171 +0x1743:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08592176 +0x1748:  mov    %eax,%ebx
08592178 +0x174a:  mov    %ebx,%eax
0859217a +0x174c:  mov    %eax,(%esp)
0859217d +0x174f:  call   0859639c <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x137c>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x137c
08592182 +0x1754:  mov    %ebx,%eax
08592184 +0x1756:  mov    %eax,%edx
08592186 +0x1758:  mov    0x8(%ebp),%eax
08592189 +0x175b:  mov    %edx,0x278(%eax)
0859218f +0x1761:  movl   $0x4,(%esp)
08592196 +0x1768:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0859219b +0x176d:  mov    %eax,%ebx
0859219d +0x176f:  mov    %ebx,%eax
0859219f +0x1771:  mov    %eax,(%esp)
085921a2 +0x1774:  call   085963b8 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1398>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x1398
085921a7 +0x1779:  mov    %ebx,%eax
085921a9 +0x177b:  mov    %eax,%edx
085921ab +0x177d:  mov    0x8(%ebp),%eax
085921ae +0x1780:  mov    %edx,0x27c(%eax)
085921b4 +0x1786:  movl   $0x4,(%esp)
085921bb +0x178d:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085921c0 +0x1792:  mov    %eax,%ebx
085921c2 +0x1794:  mov    %ebx,%eax
085921c4 +0x1796:  mov    %eax,(%esp)
085921c7 +0x1799:  call   085963d4 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x13b4>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x13b4
085921cc +0x179e:  mov    %ebx,%eax
085921ce +0x17a0:  mov    %eax,%edx
085921d0 +0x17a2:  mov    0x8(%ebp),%eax
085921d3 +0x17a5:  mov    %edx,0x280(%eax)
085921d9 +0x17ab:  movl   $0x4,(%esp)
085921e0 +0x17b2:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085921e5 +0x17b7:  mov    %eax,%ebx
085921e7 +0x17b9:  mov    %ebx,%eax
085921e9 +0x17bb:  mov    %eax,(%esp)
085921ec +0x17be:  call   085963f0 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x13d0>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x13d0
085921f1 +0x17c3:  mov    %ebx,%eax
085921f3 +0x17c5:  mov    %eax,%edx
085921f5 +0x17c7:  mov    0x8(%ebp),%eax
085921f8 +0x17ca:  mov    %edx,0x284(%eax)
085921fe +0x17d0:  movl   $0x4,(%esp)
08592205 +0x17d7:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0859220a +0x17dc:  mov    %eax,%ebx
0859220c +0x17de:  mov    %ebx,%eax
0859220e +0x17e0:  mov    %eax,(%esp)
08592211 +0x17e3:  call   0859640c <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x13ec>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x13ec
08592216 +0x17e8:  mov    %ebx,%eax
08592218 +0x17ea:  mov    %eax,%edx
0859221a +0x17ec:  mov    0x8(%ebp),%eax
0859221d +0x17ef:  mov    %edx,0x288(%eax)
08592223 +0x17f5:  movl   $0x4,(%esp)
0859222a +0x17fc:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0859222f +0x1801:  mov    %eax,%ebx
08592231 +0x1803:  mov    %ebx,%eax
08592233 +0x1805:  mov    %eax,(%esp)
08592236 +0x1808:  call   08596428 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1408>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x1408
0859223b +0x180d:  mov    %ebx,%eax
0859223d +0x180f:  mov    %eax,%edx
0859223f +0x1811:  mov    0x8(%ebp),%eax
08592242 +0x1814:  mov    %edx,0x28c(%eax)
08592248 +0x181a:  movl   $0x4,(%esp)
0859224f +0x1821:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08592254 +0x1826:  mov    %eax,%ebx
08592256 +0x1828:  mov    %ebx,%eax
08592258 +0x182a:  mov    %eax,(%esp)
0859225b +0x182d:  call   08596444 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1424>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x1424
08592260 +0x1832:  mov    %ebx,%eax
08592262 +0x1834:  mov    %eax,%edx
08592264 +0x1836:  mov    0x8(%ebp),%eax
08592267 +0x1839:  mov    %edx,0x290(%eax)
0859226d +0x183f:  movl   $0x4,(%esp)
08592274 +0x1846:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08592279 +0x184b:  mov    %eax,%ebx
0859227b +0x184d:  mov    %ebx,%eax
0859227d +0x184f:  mov    %eax,(%esp)
08592280 +0x1852:  call   08596460 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1440>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x1440
08592285 +0x1857:  mov    %ebx,%eax
08592287 +0x1859:  mov    %eax,%edx
08592289 +0x185b:  mov    0x8(%ebp),%eax
0859228c +0x185e:  mov    %edx,0x294(%eax)
08592292 +0x1864:  movl   $0x4,(%esp)
08592299 +0x186b:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0859229e +0x1870:  mov    %eax,%ebx
085922a0 +0x1872:  mov    %ebx,%eax
085922a2 +0x1874:  mov    %eax,(%esp)
085922a5 +0x1877:  call   0859647c <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x145c>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x145c
085922aa +0x187c:  mov    %ebx,%eax
085922ac +0x187e:  mov    %eax,%edx
085922ae +0x1880:  mov    0x8(%ebp),%eax
085922b1 +0x1883:  mov    %edx,0x298(%eax)
085922b7 +0x1889:  movl   $0x4,(%esp)
085922be +0x1890:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085922c3 +0x1895:  mov    %eax,%ebx
085922c5 +0x1897:  mov    %ebx,%eax
085922c7 +0x1899:  mov    %eax,(%esp)
085922ca +0x189c:  call   08596498 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1478>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x1478
085922cf +0x18a1:  mov    %ebx,%eax
085922d1 +0x18a3:  mov    %eax,%edx
085922d3 +0x18a5:  mov    0x8(%ebp),%eax
085922d6 +0x18a8:  mov    %edx,0x29c(%eax)
085922dc +0x18ae:  movl   $0x4,(%esp)
085922e3 +0x18b5:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085922e8 +0x18ba:  mov    %eax,%ebx
085922ea +0x18bc:  mov    %ebx,%eax
085922ec +0x18be:  mov    %eax,(%esp)
085922ef +0x18c1:  call   085964b4 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1494>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x1494
085922f4 +0x18c6:  mov    %ebx,%eax
085922f6 +0x18c8:  mov    %eax,%edx
085922f8 +0x18ca:  mov    0x8(%ebp),%eax
085922fb +0x18cd:  mov    %edx,0x2a0(%eax)
08592301 +0x18d3:  movl   $0x4,(%esp)
08592308 +0x18da:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0859230d +0x18df:  mov    %eax,%ebx
0859230f +0x18e1:  mov    %ebx,%eax
08592311 +0x18e3:  mov    %eax,(%esp)
08592314 +0x18e6:  call   085964d0 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x14b0>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x14b0
08592319 +0x18eb:  mov    %ebx,%eax
0859231b +0x18ed:  mov    %eax,%edx
0859231d +0x18ef:  mov    0x8(%ebp),%eax
08592320 +0x18f2:  mov    %edx,0x2bc(%eax)
08592326 +0x18f8:  movl   $0x4,(%esp)
0859232d +0x18ff:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08592332 +0x1904:  mov    %eax,%ebx
08592334 +0x1906:  mov    %ebx,%eax
08592336 +0x1908:  mov    %eax,(%esp)
08592339 +0x190b:  call   085964ec <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x14cc>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x14cc
0859233e +0x1910:  mov    %ebx,%eax
08592340 +0x1912:  mov    %eax,%edx
08592342 +0x1914:  mov    0x8(%ebp),%eax
08592345 +0x1917:  mov    %edx,0x328(%eax)
0859234b +0x191d:  movl   $0x4,(%esp)
08592352 +0x1924:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08592357 +0x1929:  mov    %eax,%ebx
08592359 +0x192b:  mov    %ebx,%eax
0859235b +0x192d:  mov    %eax,(%esp)
0859235e +0x1930:  call   08596508 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x14e8>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x14e8
08592363 +0x1935:  mov    %ebx,%eax
08592365 +0x1937:  mov    %eax,%edx
08592367 +0x1939:  mov    0x8(%ebp),%eax
0859236a +0x193c:  mov    %edx,0x2a4(%eax)
08592370 +0x1942:  movl   $0x4,(%esp)
08592377 +0x1949:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0859237c +0x194e:  mov    %eax,%ebx
0859237e +0x1950:  mov    %ebx,%eax
08592380 +0x1952:  mov    %eax,(%esp)
08592383 +0x1955:  call   08596524 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1504>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x1504
08592388 +0x195a:  mov    %ebx,%eax
0859238a +0x195c:  mov    %eax,%edx
0859238c +0x195e:  mov    0x8(%ebp),%eax
0859238f +0x1961:  mov    %edx,0x2a8(%eax)
08592395 +0x1967:  movl   $0x4,(%esp)
0859239c +0x196e:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085923a1 +0x1973:  mov    %eax,%ebx
085923a3 +0x1975:  mov    %ebx,%eax
085923a5 +0x1977:  mov    %eax,(%esp)
085923a8 +0x197a:  call   08596540 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1520>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x1520
085923ad +0x197f:  mov    %ebx,%eax
085923af +0x1981:  mov    %eax,%edx
085923b1 +0x1983:  mov    0x8(%ebp),%eax
085923b4 +0x1986:  mov    %edx,0x2ac(%eax)
085923ba +0x198c:  movl   $0x4,(%esp)
085923c1 +0x1993:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085923c6 +0x1998:  mov    %eax,%ebx
085923c8 +0x199a:  mov    %ebx,%eax
085923ca +0x199c:  mov    %eax,(%esp)
085923cd +0x199f:  call   0859655c <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x153c>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x153c
085923d2 +0x19a4:  mov    %ebx,%eax
085923d4 +0x19a6:  mov    %eax,%edx
085923d6 +0x19a8:  mov    0x8(%ebp),%eax
085923d9 +0x19ab:  mov    %edx,0x2b0(%eax)
085923df +0x19b1:  movl   $0x4,(%esp)
085923e6 +0x19b8:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085923eb +0x19bd:  mov    %eax,%ebx
085923ed +0x19bf:  mov    %ebx,%eax
085923ef +0x19c1:  mov    %eax,(%esp)
085923f2 +0x19c4:  call   08596578 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1558>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x1558
085923f7 +0x19c9:  mov    %ebx,%eax
085923f9 +0x19cb:  mov    %eax,%edx
085923fb +0x19cd:  mov    0x8(%ebp),%eax
085923fe +0x19d0:  mov    %edx,0x2b4(%eax)
08592404 +0x19d6:  movl   $0x4,(%esp)
0859240b +0x19dd:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08592410 +0x19e2:  mov    %eax,%ebx
08592412 +0x19e4:  mov    %ebx,%eax
08592414 +0x19e6:  mov    %eax,(%esp)
08592417 +0x19e9:  call   08596594 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1574>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x1574
0859241c +0x19ee:  mov    %ebx,%eax
0859241e +0x19f0:  mov    %eax,%edx
08592420 +0x19f2:  mov    0x8(%ebp),%eax
08592423 +0x19f5:  mov    %edx,0x2b8(%eax)
08592429 +0x19fb:  movl   $0x4,(%esp)
08592430 +0x1a02:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08592435 +0x1a07:  mov    %eax,%ebx
08592437 +0x1a09:  mov    %ebx,%eax
08592439 +0x1a0b:  mov    %eax,(%esp)
0859243c +0x1a0e:  call   085965b0 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1590>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x1590
08592441 +0x1a13:  mov    %ebx,%eax
08592443 +0x1a15:  mov    %eax,%edx
08592445 +0x1a17:  mov    0x8(%ebp),%eax
08592448 +0x1a1a:  mov    %edx,0x974(%eax)
0859244e +0x1a20:  movl   $0x4,(%esp)
08592455 +0x1a27:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0859245a +0x1a2c:  mov    %eax,%ebx
0859245c +0x1a2e:  mov    %ebx,%eax
0859245e +0x1a30:  mov    %eax,(%esp)
08592461 +0x1a33:  call   085965cc <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x15ac>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x15ac
08592466 +0x1a38:  mov    %ebx,%eax
08592468 +0x1a3a:  mov    %eax,%edx
0859246a +0x1a3c:  mov    0x8(%ebp),%eax
0859246d +0x1a3f:  mov    %edx,0x970(%eax)
08592473 +0x1a45:  movl   $0x4,(%esp)
0859247a +0x1a4c:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0859247f +0x1a51:  mov    %eax,%ebx
08592481 +0x1a53:  mov    %ebx,%eax
08592483 +0x1a55:  mov    %eax,(%esp)
08592486 +0x1a58:  call   085965e8 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x15c8>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x15c8
0859248b +0x1a5d:  mov    %ebx,%eax
0859248d +0x1a5f:  mov    %eax,%edx
0859248f +0x1a61:  mov    0x8(%ebp),%eax
08592492 +0x1a64:  mov    %edx,0x96c(%eax)
08592498 +0x1a6a:  movl   $0x4,(%esp)
0859249f +0x1a71:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085924a4 +0x1a76:  mov    %eax,%ebx
085924a6 +0x1a78:  mov    %ebx,%eax
085924a8 +0x1a7a:  mov    %eax,(%esp)
085924ab +0x1a7d:  call   08596604 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x15e4>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x15e4
085924b0 +0x1a82:  mov    %ebx,%eax
085924b2 +0x1a84:  mov    %eax,%edx
085924b4 +0x1a86:  mov    0x8(%ebp),%eax
085924b7 +0x1a89:  mov    %edx,0x2d0(%eax)
085924bd +0x1a8f:  movl   $0x4,(%esp)
085924c4 +0x1a96:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085924c9 +0x1a9b:  mov    %eax,%ebx
085924cb +0x1a9d:  mov    %ebx,%eax
085924cd +0x1a9f:  mov    %eax,(%esp)
085924d0 +0x1aa2:  call   08596620 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1600>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x1600
085924d5 +0x1aa7:  mov    %ebx,%eax
085924d7 +0x1aa9:  mov    %eax,%edx
085924d9 +0x1aab:  mov    0x8(%ebp),%eax
085924dc +0x1aae:  mov    %edx,0x2d4(%eax)
085924e2 +0x1ab4:  movl   $0x4,(%esp)
085924e9 +0x1abb:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085924ee +0x1ac0:  mov    %eax,%ebx
085924f0 +0x1ac2:  mov    %ebx,%eax
085924f2 +0x1ac4:  mov    %eax,(%esp)
085924f5 +0x1ac7:  call   0859663c <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x161c>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x161c
085924fa +0x1acc:  mov    %ebx,%eax
085924fc +0x1ace:  mov    %eax,%edx
085924fe +0x1ad0:  mov    0x8(%ebp),%eax
08592501 +0x1ad3:  mov    %edx,0x2cc(%eax)
08592507 +0x1ad9:  movl   $0x4,(%esp)
0859250e +0x1ae0:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08592513 +0x1ae5:  mov    %eax,%ebx
08592515 +0x1ae7:  mov    %ebx,%eax
08592517 +0x1ae9:  mov    %eax,(%esp)
0859251a +0x1aec:  call   08596658 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1638>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x1638
0859251f +0x1af1:  mov    %ebx,%eax
08592521 +0x1af3:  mov    %eax,%edx
08592523 +0x1af5:  mov    0x8(%ebp),%eax
08592526 +0x1af8:  mov    %edx,0x2dc(%eax)
0859252c +0x1afe:  movl   $0x4,(%esp)
08592533 +0x1b05:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08592538 +0x1b0a:  mov    %eax,%ebx
0859253a +0x1b0c:  mov    %ebx,%eax
0859253c +0x1b0e:  mov    %eax,(%esp)
0859253f +0x1b11:  call   08596674 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1654>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x1654
08592544 +0x1b16:  mov    %ebx,%eax
08592546 +0x1b18:  mov    %eax,%edx
08592548 +0x1b1a:  mov    0x8(%ebp),%eax
0859254b +0x1b1d:  mov    %edx,0x2e0(%eax)
08592551 +0x1b23:  movl   $0x4,(%esp)
08592558 +0x1b2a:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0859255d +0x1b2f:  mov    %eax,%ebx
0859255f +0x1b31:  mov    %ebx,%eax
08592561 +0x1b33:  mov    %eax,(%esp)
08592564 +0x1b36:  call   08596690 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1670>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x1670
08592569 +0x1b3b:  mov    %ebx,%eax
0859256b +0x1b3d:  mov    %eax,%edx
0859256d +0x1b3f:  mov    0x8(%ebp),%eax
08592570 +0x1b42:  mov    %edx,0x2d8(%eax)
08592576 +0x1b48:  movl   $0x4,(%esp)
0859257d +0x1b4f:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08592582 +0x1b54:  mov    %eax,%ebx
08592584 +0x1b56:  mov    %ebx,%eax
08592586 +0x1b58:  mov    %eax,(%esp)
08592589 +0x1b5b:  call   085966ac <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x168c>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x168c
0859258e +0x1b60:  mov    %ebx,%eax
08592590 +0x1b62:  mov    %eax,%edx
08592592 +0x1b64:  mov    0x8(%ebp),%eax
08592595 +0x1b67:  mov    %edx,0x2e4(%eax)
0859259b +0x1b6d:  movl   $0x4,(%esp)
085925a2 +0x1b74:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085925a7 +0x1b79:  mov    %eax,%ebx
085925a9 +0x1b7b:  mov    %ebx,%eax
085925ab +0x1b7d:  mov    %eax,(%esp)
085925ae +0x1b80:  call   085966c8 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x16a8>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x16a8
085925b3 +0x1b85:  mov    %ebx,%eax
085925b5 +0x1b87:  mov    %eax,%edx
085925b7 +0x1b89:  mov    0x8(%ebp),%eax
085925ba +0x1b8c:  mov    %edx,0x2e8(%eax)
085925c0 +0x1b92:  movl   $0x4,(%esp)
085925c7 +0x1b99:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085925cc +0x1b9e:  mov    %eax,%ebx
085925ce +0x1ba0:  mov    %ebx,%eax
085925d0 +0x1ba2:  mov    %eax,(%esp)
085925d3 +0x1ba5:  call   085966e4 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x16c4>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x16c4
085925d8 +0x1baa:  mov    %ebx,%eax
085925da +0x1bac:  mov    %eax,%edx
085925dc +0x1bae:  mov    0x8(%ebp),%eax
085925df +0x1bb1:  mov    %edx,0x2ec(%eax)
085925e5 +0x1bb7:  movl   $0x4,(%esp)
085925ec +0x1bbe:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085925f1 +0x1bc3:  mov    %eax,%ebx
085925f3 +0x1bc5:  mov    %ebx,%eax
085925f5 +0x1bc7:  mov    %eax,(%esp)
085925f8 +0x1bca:  call   08596700 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x16e0>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x16e0
085925fd +0x1bcf:  mov    %ebx,%eax
085925ff +0x1bd1:  mov    %eax,%edx
08592601 +0x1bd3:  mov    0x8(%ebp),%eax
08592604 +0x1bd6:  mov    %edx,0x2f0(%eax)
0859260a +0x1bdc:  movl   $0x4,(%esp)
08592611 +0x1be3:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08592616 +0x1be8:  mov    %eax,%ebx
08592618 +0x1bea:  mov    %ebx,%eax
0859261a +0x1bec:  mov    %eax,(%esp)
0859261d +0x1bef:  call   0859671c <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x16fc>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x16fc
08592622 +0x1bf4:  mov    %ebx,%eax
08592624 +0x1bf6:  mov    %eax,%edx
08592626 +0x1bf8:  mov    0x8(%ebp),%eax
08592629 +0x1bfb:  mov    %edx,0x2f4(%eax)
0859262f +0x1c01:  movl   $0x4,(%esp)
08592636 +0x1c08:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0859263b +0x1c0d:  mov    %eax,%ebx
0859263d +0x1c0f:  mov    %ebx,%eax
0859263f +0x1c11:  mov    %eax,(%esp)
08592642 +0x1c14:  call   08596738 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1718>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x1718
08592647 +0x1c19:  mov    %ebx,%eax
08592649 +0x1c1b:  mov    %eax,%edx
0859264b +0x1c1d:  mov    0x8(%ebp),%eax
0859264e +0x1c20:  mov    %edx,0x2f8(%eax)
08592654 +0x1c26:  movl   $0x4,(%esp)
0859265b +0x1c2d:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08592660 +0x1c32:  mov    %eax,%ebx
08592662 +0x1c34:  mov    %ebx,%eax
08592664 +0x1c36:  mov    %eax,(%esp)
08592667 +0x1c39:  call   08596754 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1734>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x1734
0859266c +0x1c3e:  mov    %ebx,%eax
0859266e +0x1c40:  mov    %eax,%edx
08592670 +0x1c42:  mov    0x8(%ebp),%eax
08592673 +0x1c45:  mov    %edx,0x2fc(%eax)
08592679 +0x1c4b:  movl   $0x4,(%esp)
08592680 +0x1c52:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08592685 +0x1c57:  mov    %eax,%ebx
08592687 +0x1c59:  mov    %ebx,%eax
08592689 +0x1c5b:  mov    %eax,(%esp)
0859268c +0x1c5e:  call   08596770 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1750>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x1750
08592691 +0x1c63:  mov    %ebx,%eax
08592693 +0x1c65:  mov    %eax,%edx
08592695 +0x1c67:  mov    0x8(%ebp),%eax
08592698 +0x1c6a:  mov    %edx,0x300(%eax)
0859269e +0x1c70:  movl   $0x4,(%esp)
085926a5 +0x1c77:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085926aa +0x1c7c:  mov    %eax,%ebx
085926ac +0x1c7e:  mov    %ebx,%eax
085926ae +0x1c80:  mov    %eax,(%esp)
085926b1 +0x1c83:  call   0859678c <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x176c>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x176c
085926b6 +0x1c88:  mov    %ebx,%eax
085926b8 +0x1c8a:  mov    %eax,%edx
085926ba +0x1c8c:  mov    0x8(%ebp),%eax
085926bd +0x1c8f:  mov    %edx,0x304(%eax)
085926c3 +0x1c95:  movl   $0x4,(%esp)
085926ca +0x1c9c:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085926cf +0x1ca1:  mov    %eax,%ebx
085926d1 +0x1ca3:  mov    %ebx,%eax
085926d3 +0x1ca5:  mov    %eax,(%esp)
085926d6 +0x1ca8:  call   085967a8 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1788>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x1788
085926db +0x1cad:  mov    %ebx,%eax
085926dd +0x1caf:  mov    %eax,%edx
085926df +0x1cb1:  mov    0x8(%ebp),%eax
085926e2 +0x1cb4:  mov    %edx,0x308(%eax)
085926e8 +0x1cba:  movl   $0x4,(%esp)
085926ef +0x1cc1:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085926f4 +0x1cc6:  mov    %eax,%ebx
085926f6 +0x1cc8:  mov    %ebx,%eax
085926f8 +0x1cca:  mov    %eax,(%esp)
085926fb +0x1ccd:  call   085967c4 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x17a4>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x17a4
08592700 +0x1cd2:  mov    %ebx,%eax
08592702 +0x1cd4:  mov    %eax,%edx
08592704 +0x1cd6:  mov    0x8(%ebp),%eax
08592707 +0x1cd9:  mov    %edx,0x30c(%eax)
0859270d +0x1cdf:  movl   $0x4,(%esp)
08592714 +0x1ce6:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08592719 +0x1ceb:  mov    %eax,%ebx
0859271b +0x1ced:  mov    %ebx,%eax
0859271d +0x1cef:  mov    %eax,(%esp)
08592720 +0x1cf2:  call   085967e0 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x17c0>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x17c0
08592725 +0x1cf7:  mov    %ebx,%eax
08592727 +0x1cf9:  mov    %eax,%edx
08592729 +0x1cfb:  mov    0x8(%ebp),%eax
0859272c +0x1cfe:  mov    %edx,0x320(%eax)
08592732 +0x1d04:  movl   $0x4,(%esp)
08592739 +0x1d0b:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0859273e +0x1d10:  mov    %eax,%ebx
08592740 +0x1d12:  mov    %ebx,%eax
08592742 +0x1d14:  mov    %eax,(%esp)
08592745 +0x1d17:  call   085967fc <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x17dc>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x17dc
0859274a +0x1d1c:  mov    %ebx,%eax
0859274c +0x1d1e:  mov    %eax,%edx
0859274e +0x1d20:  mov    0x8(%ebp),%eax
08592751 +0x1d23:  mov    %edx,0x324(%eax)
08592757 +0x1d29:  movl   $0x4,(%esp)
0859275e +0x1d30:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08592763 +0x1d35:  mov    %eax,%ebx
08592765 +0x1d37:  mov    %ebx,%eax
08592767 +0x1d39:  mov    %eax,(%esp)
0859276a +0x1d3c:  call   08596818 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x17f8>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x17f8
0859276f +0x1d41:  mov    %ebx,%eax
08592771 +0x1d43:  mov    %eax,%edx
08592773 +0x1d45:  mov    0x8(%ebp),%eax
08592776 +0x1d48:  mov    %edx,0x700(%eax)
0859277c +0x1d4e:  movl   $0x4,(%esp)
08592783 +0x1d55:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08592788 +0x1d5a:  mov    %eax,%ebx
0859278a +0x1d5c:  mov    %ebx,%eax
0859278c +0x1d5e:  mov    %eax,(%esp)
0859278f +0x1d61:  call   08596834 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1814>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x1814
08592794 +0x1d66:  mov    %ebx,%eax
08592796 +0x1d68:  mov    %eax,%edx
08592798 +0x1d6a:  mov    0x8(%ebp),%eax
0859279b +0x1d6d:  mov    %edx,0x314(%eax)
085927a1 +0x1d73:  movl   $0x4,(%esp)
085927a8 +0x1d7a:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085927ad +0x1d7f:  mov    %eax,%ebx
085927af +0x1d81:  mov    %ebx,%eax
085927b1 +0x1d83:  mov    %eax,(%esp)
085927b4 +0x1d86:  call   08596850 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1830>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x1830
085927b9 +0x1d8b:  mov    %ebx,%eax
085927bb +0x1d8d:  mov    %eax,%edx
085927bd +0x1d8f:  mov    0x8(%ebp),%eax
085927c0 +0x1d92:  mov    %edx,0x310(%eax)
085927c6 +0x1d98:  movl   $0x4,(%esp)
085927cd +0x1d9f:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085927d2 +0x1da4:  mov    %eax,%ebx
085927d4 +0x1da6:  mov    %ebx,%eax
085927d6 +0x1da8:  mov    %eax,(%esp)
085927d9 +0x1dab:  call   0859686c <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x184c>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x184c
085927de +0x1db0:  mov    %ebx,%eax
085927e0 +0x1db2:  mov    %eax,%edx
085927e2 +0x1db4:  mov    0x8(%ebp),%eax
085927e5 +0x1db7:  mov    %edx,0x318(%eax)
085927eb +0x1dbd:  movl   $0x4,(%esp)
085927f2 +0x1dc4:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085927f7 +0x1dc9:  mov    %eax,%ebx
085927f9 +0x1dcb:  mov    %ebx,%eax
085927fb +0x1dcd:  mov    %eax,(%esp)
085927fe +0x1dd0:  call   08596888 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1868>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x1868
08592803 +0x1dd5:  mov    %ebx,%eax
08592805 +0x1dd7:  mov    %eax,%edx
08592807 +0x1dd9:  mov    0x8(%ebp),%eax
0859280a +0x1ddc:  mov    %edx,0x31c(%eax)
08592810 +0x1de2:  movl   $0x4,(%esp)
08592817 +0x1de9:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0859281c +0x1dee:  mov    %eax,%ebx
0859281e +0x1df0:  mov    %ebx,%eax
08592820 +0x1df2:  mov    %eax,(%esp)
08592823 +0x1df5:  call   085968a4 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1884>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x1884
08592828 +0x1dfa:  mov    %ebx,%eax
0859282a +0x1dfc:  mov    %eax,%edx
0859282c +0x1dfe:  mov    0x8(%ebp),%eax
0859282f +0x1e01:  mov    %edx,0x330(%eax)
08592835 +0x1e07:  movl   $0x4,(%esp)
0859283c +0x1e0e:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08592841 +0x1e13:  mov    %eax,%ebx
08592843 +0x1e15:  mov    %ebx,%eax
08592845 +0x1e17:  mov    %eax,(%esp)
08592848 +0x1e1a:  call   085968c0 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x18a0>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x18a0
0859284d +0x1e1f:  mov    %ebx,%eax
0859284f +0x1e21:  mov    %eax,%edx
08592851 +0x1e23:  mov    0x8(%ebp),%eax
08592854 +0x1e26:  mov    %edx,0x334(%eax)
0859285a +0x1e2c:  movl   $0x4,(%esp)
08592861 +0x1e33:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08592866 +0x1e38:  mov    %eax,%ebx
08592868 +0x1e3a:  mov    %ebx,%eax
0859286a +0x1e3c:  mov    %eax,(%esp)
0859286d +0x1e3f:  call   085968dc <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x18bc>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x18bc
08592872 +0x1e44:  mov    %ebx,%eax
08592874 +0x1e46:  mov    %eax,%edx
08592876 +0x1e48:  mov    0x8(%ebp),%eax
08592879 +0x1e4b:  mov    %edx,0x33c(%eax)
0859287f +0x1e51:  movl   $0x4,(%esp)
08592886 +0x1e58:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0859288b +0x1e5d:  mov    %eax,%ebx
0859288d +0x1e5f:  mov    %ebx,%eax
0859288f +0x1e61:  mov    %eax,(%esp)
08592892 +0x1e64:  call   085968f8 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x18d8>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x18d8
08592897 +0x1e69:  mov    %ebx,%eax
08592899 +0x1e6b:  mov    %eax,%edx
0859289b +0x1e6d:  mov    0x8(%ebp),%eax
0859289e +0x1e70:  mov    %edx,0x340(%eax)
085928a4 +0x1e76:  movl   $0x4,(%esp)
085928ab +0x1e7d:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085928b0 +0x1e82:  mov    %eax,%ebx
085928b2 +0x1e84:  mov    %ebx,%eax
085928b4 +0x1e86:  mov    %eax,(%esp)
085928b7 +0x1e89:  call   08596914 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x18f4>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x18f4
085928bc +0x1e8e:  mov    %ebx,%eax
085928be +0x1e90:  mov    %eax,%edx
085928c0 +0x1e92:  mov    0x8(%ebp),%eax
085928c3 +0x1e95:  mov    %edx,0x344(%eax)
085928c9 +0x1e9b:  movl   $0x4,(%esp)
085928d0 +0x1ea2:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085928d5 +0x1ea7:  mov    %eax,%ebx
085928d7 +0x1ea9:  mov    %ebx,%eax
085928d9 +0x1eab:  mov    %eax,(%esp)
085928dc +0x1eae:  call   08596930 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1910>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x1910
085928e1 +0x1eb3:  mov    %ebx,%eax
085928e3 +0x1eb5:  mov    %eax,%edx
085928e5 +0x1eb7:  mov    0x8(%ebp),%eax
085928e8 +0x1eba:  mov    %edx,0x348(%eax)
085928ee +0x1ec0:  movl   $0x4,(%esp)
085928f5 +0x1ec7:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085928fa +0x1ecc:  mov    %eax,%ebx
085928fc +0x1ece:  mov    %ebx,%eax
085928fe +0x1ed0:  mov    %eax,(%esp)
08592901 +0x1ed3:  call   0859694c <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x192c>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x192c
08592906 +0x1ed8:  mov    %ebx,%eax
08592908 +0x1eda:  mov    %eax,%edx
0859290a +0x1edc:  mov    0x8(%ebp),%eax
0859290d +0x1edf:  mov    %edx,0x34c(%eax)
08592913 +0x1ee5:  movl   $0x4,(%esp)
0859291a +0x1eec:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0859291f +0x1ef1:  mov    %eax,%ebx
08592921 +0x1ef3:  mov    %ebx,%eax
08592923 +0x1ef5:  mov    %eax,(%esp)
08592926 +0x1ef8:  call   08596968 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1948>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x1948
0859292b +0x1efd:  mov    %ebx,%eax
0859292d +0x1eff:  mov    %eax,%edx
0859292f +0x1f01:  mov    0x8(%ebp),%eax
08592932 +0x1f04:  mov    %edx,0x350(%eax)
08592938 +0x1f0a:  movl   $0x4,(%esp)
0859293f +0x1f11:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08592944 +0x1f16:  mov    %eax,%ebx
08592946 +0x1f18:  mov    %ebx,%eax
08592948 +0x1f1a:  mov    %eax,(%esp)
0859294b +0x1f1d:  call   08596984 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1964>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x1964
08592950 +0x1f22:  mov    %ebx,%eax
08592952 +0x1f24:  mov    %eax,%edx
08592954 +0x1f26:  mov    0x8(%ebp),%eax
08592957 +0x1f29:  mov    %edx,0x354(%eax)
0859295d +0x1f2f:  movl   $0x4,(%esp)
08592964 +0x1f36:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08592969 +0x1f3b:  mov    %eax,%ebx
0859296b +0x1f3d:  mov    %ebx,%eax
0859296d +0x1f3f:  mov    %eax,(%esp)
08592970 +0x1f42:  call   085969a0 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1980>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x1980
08592975 +0x1f47:  mov    %ebx,%eax
08592977 +0x1f49:  mov    %eax,%edx
08592979 +0x1f4b:  mov    0x8(%ebp),%eax
0859297c +0x1f4e:  mov    %edx,0x358(%eax)
08592982 +0x1f54:  movl   $0x4,(%esp)
08592989 +0x1f5b:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0859298e +0x1f60:  mov    %eax,%ebx
08592990 +0x1f62:  mov    %ebx,%eax
08592992 +0x1f64:  mov    %eax,(%esp)
08592995 +0x1f67:  call   085969bc <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x199c>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x199c
0859299a +0x1f6c:  mov    %ebx,%eax
0859299c +0x1f6e:  mov    %eax,%edx
0859299e +0x1f70:  mov    0x8(%ebp),%eax
085929a1 +0x1f73:  mov    %edx,0x35c(%eax)
085929a7 +0x1f79:  movl   $0x8,(%esp)
085929ae +0x1f80:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085929b3 +0x1f85:  mov    %eax,%ebx
085929b5 +0x1f87:  mov    %ebx,%eax
085929b7 +0x1f89:  mov    %eax,(%esp)
085929ba +0x1f8c:  call   0821c25c <_ZN28Dispatcher_UseVendingMachineC1Ev>  ; Dispatcher_UseVendingMachine::Dispatcher_UseVendingMachine()
085929bf +0x1f91:  jmp    085929d6 <+0x1fa8>
085929c1 +0x1f93:  mov    %edx,%esi
085929c3 +0x1f95:  mov    %eax,%edi
085929c5 +0x1f97:  mov    %ebx,(%esp)
085929c8 +0x1f9a:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
085929cd +0x1f9f:  mov    %edi,%eax
085929cf +0x1fa1:  mov    %esi,%edx
085929d1 +0x1fa3:  jmp    08594820 <+0x3df2>
085929d6 +0x1fa8:  mov    %ebx,%eax
085929d8 +0x1faa:  mov    %eax,%edx
085929da +0x1fac:  mov    0x8(%ebp),%eax
085929dd +0x1faf:  mov    %edx,0x368(%eax)
085929e3 +0x1fb5:  movl   $0x4,(%esp)
085929ea +0x1fbc:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085929ef +0x1fc1:  mov    %eax,%ebx
085929f1 +0x1fc3:  mov    %ebx,%eax
085929f3 +0x1fc5:  mov    %eax,(%esp)
085929f6 +0x1fc8:  call   085969d8 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x19b8>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x19b8
085929fb +0x1fcd:  mov    %ebx,%eax
085929fd +0x1fcf:  mov    %eax,%edx
085929ff +0x1fd1:  mov    0x8(%ebp),%eax
08592a02 +0x1fd4:  mov    %edx,0x798(%eax)
08592a08 +0x1fda:  movl   $0x4,(%esp)
08592a0f +0x1fe1:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08592a14 +0x1fe6:  mov    %eax,%ebx
08592a16 +0x1fe8:  mov    %ebx,%eax
08592a18 +0x1fea:  mov    %eax,(%esp)
08592a1b +0x1fed:  call   085969f4 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x19d4>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x19d4
08592a20 +0x1ff2:  mov    %ebx,%eax
08592a22 +0x1ff4:  mov    %eax,%edx
08592a24 +0x1ff6:  mov    0x8(%ebp),%eax
08592a27 +0x1ff9:  mov    %edx,0x79c(%eax)
08592a2d +0x1fff:  movl   $0x4,(%esp)
08592a34 +0x2006:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08592a39 +0x200b:  mov    %eax,%ebx
08592a3b +0x200d:  mov    %ebx,%eax
08592a3d +0x200f:  mov    %eax,(%esp)
08592a40 +0x2012:  call   08596a10 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x19f0>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x19f0
08592a45 +0x2017:  mov    %ebx,%eax
08592a47 +0x2019:  mov    %eax,%edx
08592a49 +0x201b:  mov    0x8(%ebp),%eax
08592a4c +0x201e:  mov    %edx,0x360(%eax)
08592a52 +0x2024:  movl   $0x4,(%esp)
08592a59 +0x202b:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08592a5e +0x2030:  mov    %eax,%ebx
08592a60 +0x2032:  mov    %ebx,%eax
08592a62 +0x2034:  mov    %eax,(%esp)
08592a65 +0x2037:  call   08596a2c <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1a0c>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x1a0c
08592a6a +0x203c:  mov    %ebx,%eax
08592a6c +0x203e:  mov    %eax,%edx
08592a6e +0x2040:  mov    0x8(%ebp),%eax
08592a71 +0x2043:  mov    %edx,0x364(%eax)
08592a77 +0x2049:  movl   $0x4,(%esp)
08592a7e +0x2050:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08592a83 +0x2055:  mov    %eax,%ebx
08592a85 +0x2057:  mov    %ebx,%eax
08592a87 +0x2059:  mov    %eax,(%esp)
08592a8a +0x205c:  call   08596a48 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1a28>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x1a28
08592a8f +0x2061:  mov    %ebx,%eax
08592a91 +0x2063:  mov    %eax,%edx
08592a93 +0x2065:  mov    0x8(%ebp),%eax
08592a96 +0x2068:  mov    %edx,0x374(%eax)
08592a9c +0x206e:  movl   $0x4,(%esp)
08592aa3 +0x2075:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08592aa8 +0x207a:  mov    %eax,%ebx
08592aaa +0x207c:  mov    %ebx,%eax
08592aac +0x207e:  mov    %eax,(%esp)
08592aaf +0x2081:  call   08596a64 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1a44>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x1a44
08592ab4 +0x2086:  mov    %ebx,%eax
08592ab6 +0x2088:  mov    %eax,%edx
08592ab8 +0x208a:  mov    0x8(%ebp),%eax
08592abb +0x208d:  mov    %edx,0x378(%eax)
08592ac1 +0x2093:  movl   $0x4,(%esp)
08592ac8 +0x209a:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08592acd +0x209f:  mov    %eax,%ebx
08592acf +0x20a1:  mov    %ebx,%eax
08592ad1 +0x20a3:  mov    %eax,(%esp)
08592ad4 +0x20a6:  call   08596a80 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1a60>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x1a60
08592ad9 +0x20ab:  mov    %ebx,%eax
08592adb +0x20ad:  mov    %eax,%edx
08592add +0x20af:  mov    0x8(%ebp),%eax
08592ae0 +0x20b2:  mov    %edx,0x36c(%eax)
08592ae6 +0x20b8:  movl   $0x4,(%esp)
08592aed +0x20bf:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08592af2 +0x20c4:  mov    %eax,%ebx
08592af4 +0x20c6:  mov    %ebx,%eax
08592af6 +0x20c8:  mov    %eax,(%esp)
08592af9 +0x20cb:  call   08596a9c <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1a7c>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x1a7c
08592afe +0x20d0:  mov    %ebx,%eax
08592b00 +0x20d2:  mov    %eax,%edx
08592b02 +0x20d4:  mov    0x8(%ebp),%eax
08592b05 +0x20d7:  mov    %edx,0x384(%eax)
08592b0b +0x20dd:  movl   $0x4,(%esp)
08592b12 +0x20e4:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08592b17 +0x20e9:  mov    %eax,%ebx
08592b19 +0x20eb:  mov    %ebx,%eax
08592b1b +0x20ed:  mov    %eax,(%esp)
08592b1e +0x20f0:  call   08596ab8 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1a98>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x1a98
08592b23 +0x20f5:  mov    %ebx,%eax
08592b25 +0x20f7:  mov    %eax,%edx
08592b27 +0x20f9:  mov    0x8(%ebp),%eax
08592b2a +0x20fc:  mov    %edx,0x370(%eax)
08592b30 +0x2102:  movl   $0x4,(%esp)
08592b37 +0x2109:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08592b3c +0x210e:  mov    %eax,%ebx
08592b3e +0x2110:  mov    %ebx,%eax
08592b40 +0x2112:  mov    %eax,(%esp)
08592b43 +0x2115:  call   08596ad4 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1ab4>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x1ab4
08592b48 +0x211a:  mov    %ebx,%eax
08592b4a +0x211c:  mov    %eax,%edx
08592b4c +0x211e:  mov    0x8(%ebp),%eax
08592b4f +0x2121:  mov    %edx,0x388(%eax)
08592b55 +0x2127:  movl   $0x4,(%esp)
08592b5c +0x212e:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08592b61 +0x2133:  mov    %eax,%ebx
08592b63 +0x2135:  mov    %ebx,%eax
08592b65 +0x2137:  mov    %eax,(%esp)
08592b68 +0x213a:  call   08596af0 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1ad0>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x1ad0
08592b6d +0x213f:  mov    %ebx,%eax
08592b6f +0x2141:  mov    %eax,%edx
08592b71 +0x2143:  mov    0x8(%ebp),%eax
08592b74 +0x2146:  mov    %edx,0x38c(%eax)
08592b7a +0x214c:  movl   $0x4,(%esp)
08592b81 +0x2153:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08592b86 +0x2158:  mov    %eax,%ebx
08592b88 +0x215a:  mov    %ebx,%eax
08592b8a +0x215c:  mov    %eax,(%esp)
08592b8d +0x215f:  call   08596b0c <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1aec>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x1aec
08592b92 +0x2164:  mov    %ebx,%eax
08592b94 +0x2166:  mov    %eax,%edx
08592b96 +0x2168:  mov    0x8(%ebp),%eax
08592b99 +0x216b:  mov    %edx,0x3ac(%eax)
08592b9f +0x2171:  movl   $0x4,(%esp)
08592ba6 +0x2178:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08592bab +0x217d:  mov    %eax,%ebx
08592bad +0x217f:  mov    %ebx,%eax
08592baf +0x2181:  mov    %eax,(%esp)
08592bb2 +0x2184:  call   08596b28 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1b08>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x1b08
08592bb7 +0x2189:  mov    %ebx,%eax
08592bb9 +0x218b:  mov    %eax,%edx
08592bbb +0x218d:  mov    0x8(%ebp),%eax
08592bbe +0x2190:  mov    %edx,0x3b0(%eax)
08592bc4 +0x2196:  movl   $0x4,(%esp)
08592bcb +0x219d:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08592bd0 +0x21a2:  mov    %eax,%ebx
08592bd2 +0x21a4:  mov    %ebx,%eax
08592bd4 +0x21a6:  mov    %eax,(%esp)
08592bd7 +0x21a9:  call   08596b44 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1b24>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x1b24
08592bdc +0x21ae:  mov    %ebx,%eax
08592bde +0x21b0:  mov    %eax,%edx
08592be0 +0x21b2:  mov    0x8(%ebp),%eax
08592be3 +0x21b5:  mov    %edx,0x3b8(%eax)
08592be9 +0x21bb:  movl   $0x4,(%esp)
08592bf0 +0x21c2:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08592bf5 +0x21c7:  mov    %eax,%ebx
08592bf7 +0x21c9:  mov    %ebx,%eax
08592bf9 +0x21cb:  mov    %eax,(%esp)
08592bfc +0x21ce:  call   08596b60 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1b40>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x1b40
08592c01 +0x21d3:  mov    %ebx,%eax
08592c03 +0x21d5:  mov    %eax,%edx
08592c05 +0x21d7:  mov    0x8(%ebp),%eax
08592c08 +0x21da:  mov    %edx,0x3bc(%eax)
08592c0e +0x21e0:  movl   $0x4,(%esp)
08592c15 +0x21e7:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08592c1a +0x21ec:  mov    %eax,%ebx
08592c1c +0x21ee:  mov    %ebx,%eax
08592c1e +0x21f0:  mov    %eax,(%esp)
08592c21 +0x21f3:  call   08596b7c <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1b5c>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x1b5c
08592c26 +0x21f8:  mov    %ebx,%eax
08592c28 +0x21fa:  mov    %eax,%edx
08592c2a +0x21fc:  mov    0x8(%ebp),%eax
08592c2d +0x21ff:  mov    %edx,0x3c0(%eax)
08592c33 +0x2205:  movl   $0x4,(%esp)
08592c3a +0x220c:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08592c3f +0x2211:  mov    %eax,%ebx
08592c41 +0x2213:  mov    %ebx,%eax
08592c43 +0x2215:  mov    %eax,(%esp)
08592c46 +0x2218:  call   08596b98 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1b78>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x1b78
08592c4b +0x221d:  mov    %ebx,%eax
08592c4d +0x221f:  mov    %eax,%edx
08592c4f +0x2221:  mov    0x8(%ebp),%eax
08592c52 +0x2224:  mov    %edx,0x3c4(%eax)
08592c58 +0x222a:  movl   $0x4,(%esp)
08592c5f +0x2231:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08592c64 +0x2236:  mov    %eax,%ebx
08592c66 +0x2238:  mov    %ebx,%eax
08592c68 +0x223a:  mov    %eax,(%esp)
08592c6b +0x223d:  call   08596bb4 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1b94>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x1b94
08592c70 +0x2242:  mov    %ebx,%eax
08592c72 +0x2244:  mov    %eax,%edx
08592c74 +0x2246:  mov    0x8(%ebp),%eax
08592c77 +0x2249:  mov    %edx,0x3c8(%eax)
08592c7d +0x224f:  movl   $0x4,(%esp)
08592c84 +0x2256:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08592c89 +0x225b:  mov    %eax,%ebx
08592c8b +0x225d:  mov    %ebx,%eax
08592c8d +0x225f:  mov    %eax,(%esp)
08592c90 +0x2262:  call   08596bd0 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1bb0>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x1bb0
08592c95 +0x2267:  mov    %ebx,%eax
08592c97 +0x2269:  mov    %eax,%edx
08592c99 +0x226b:  mov    0x8(%ebp),%eax
08592c9c +0x226e:  mov    %edx,0x3cc(%eax)
08592ca2 +0x2274:  movl   $0x4,(%esp)
08592ca9 +0x227b:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08592cae +0x2280:  mov    %eax,%ebx
08592cb0 +0x2282:  mov    %ebx,%eax
08592cb2 +0x2284:  mov    %eax,(%esp)
08592cb5 +0x2287:  call   08596bec <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1bcc>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x1bcc
08592cba +0x228c:  mov    %ebx,%eax
08592cbc +0x228e:  mov    %eax,%edx
08592cbe +0x2290:  mov    0x8(%ebp),%eax
08592cc1 +0x2293:  mov    %edx,0x3d0(%eax)
08592cc7 +0x2299:  movl   $0x4,(%esp)
08592cce +0x22a0:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08592cd3 +0x22a5:  mov    %eax,%ebx
08592cd5 +0x22a7:  mov    %ebx,%eax
08592cd7 +0x22a9:  mov    %eax,(%esp)
08592cda +0x22ac:  call   08596c08 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1be8>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x1be8
08592cdf +0x22b1:  mov    %ebx,%eax
08592ce1 +0x22b3:  mov    %eax,%edx
08592ce3 +0x22b5:  mov    0x8(%ebp),%eax
08592ce6 +0x22b8:  mov    %edx,0x3d4(%eax)
08592cec +0x22be:  movl   $0x4,(%esp)
08592cf3 +0x22c5:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08592cf8 +0x22ca:  mov    %eax,%ebx
08592cfa +0x22cc:  mov    %ebx,%eax
08592cfc +0x22ce:  mov    %eax,(%esp)
08592cff +0x22d1:  call   08596c24 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1c04>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x1c04
08592d04 +0x22d6:  mov    %ebx,%eax
08592d06 +0x22d8:  mov    %eax,%edx
08592d08 +0x22da:  mov    0x8(%ebp),%eax
08592d0b +0x22dd:  mov    %edx,0x3d8(%eax)
08592d11 +0x22e3:  movl   $0x4,(%esp)
08592d18 +0x22ea:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08592d1d +0x22ef:  mov    %eax,%ebx
08592d1f +0x22f1:  mov    %ebx,%eax
08592d21 +0x22f3:  mov    %eax,(%esp)
08592d24 +0x22f6:  call   08596c40 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1c20>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x1c20
08592d29 +0x22fb:  mov    %ebx,%eax
08592d2b +0x22fd:  mov    %eax,%edx
08592d2d +0x22ff:  mov    0x8(%ebp),%eax
08592d30 +0x2302:  mov    %edx,0x3dc(%eax)
08592d36 +0x2308:  movl   $0x4,(%esp)
08592d3d +0x230f:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08592d42 +0x2314:  mov    %eax,%ebx
08592d44 +0x2316:  mov    %ebx,%eax
08592d46 +0x2318:  mov    %eax,(%esp)
08592d49 +0x231b:  call   08596c5c <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1c3c>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x1c3c
08592d4e +0x2320:  mov    %ebx,%eax
08592d50 +0x2322:  mov    %eax,%edx
08592d52 +0x2324:  mov    0x8(%ebp),%eax
08592d55 +0x2327:  mov    %edx,0x424(%eax)
08592d5b +0x232d:  movl   $0x4,(%esp)
08592d62 +0x2334:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08592d67 +0x2339:  mov    %eax,%ebx
08592d69 +0x233b:  mov    %ebx,%eax
08592d6b +0x233d:  mov    %eax,(%esp)
08592d6e +0x2340:  call   08596c78 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1c58>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x1c58
08592d73 +0x2345:  mov    %ebx,%eax
08592d75 +0x2347:  mov    %eax,%edx
08592d77 +0x2349:  mov    0x8(%ebp),%eax
08592d7a +0x234c:  mov    %edx,0x428(%eax)
08592d80 +0x2352:  movl   $0x4,(%esp)
08592d87 +0x2359:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08592d8c +0x235e:  mov    %eax,%ebx
08592d8e +0x2360:  mov    %ebx,%eax
08592d90 +0x2362:  mov    %eax,(%esp)
08592d93 +0x2365:  call   08596c94 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1c74>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x1c74
08592d98 +0x236a:  mov    %ebx,%eax
08592d9a +0x236c:  mov    %eax,%edx
08592d9c +0x236e:  mov    0x8(%ebp),%eax
08592d9f +0x2371:  mov    %edx,0x3ec(%eax)
08592da5 +0x2377:  movl   $0x4,(%esp)
08592dac +0x237e:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08592db1 +0x2383:  mov    %eax,%ebx
08592db3 +0x2385:  mov    %ebx,%eax
08592db5 +0x2387:  mov    %eax,(%esp)
08592db8 +0x238a:  call   08596cb0 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1c90>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x1c90
08592dbd +0x238f:  mov    %ebx,%eax
08592dbf +0x2391:  mov    %eax,%edx
08592dc1 +0x2393:  mov    0x8(%ebp),%eax
08592dc4 +0x2396:  mov    %edx,0x3f0(%eax)
08592dca +0x239c:  movl   $0x4,(%esp)
08592dd1 +0x23a3:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08592dd6 +0x23a8:  mov    %eax,%ebx
08592dd8 +0x23aa:  mov    %ebx,%eax
08592dda +0x23ac:  mov    %eax,(%esp)
08592ddd +0x23af:  call   08596ccc <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1cac>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x1cac
08592de2 +0x23b4:  mov    %ebx,%eax
08592de4 +0x23b6:  mov    %eax,%edx
08592de6 +0x23b8:  mov    0x8(%ebp),%eax
08592de9 +0x23bb:  mov    %edx,0x3f4(%eax)
08592def +0x23c1:  movl   $0x4,(%esp)
08592df6 +0x23c8:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08592dfb +0x23cd:  mov    %eax,%ebx
08592dfd +0x23cf:  mov    %ebx,%eax
08592dff +0x23d1:  mov    %eax,(%esp)
08592e02 +0x23d4:  call   08596ce8 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1cc8>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x1cc8
08592e07 +0x23d9:  mov    %ebx,%eax
08592e09 +0x23db:  mov    %eax,%edx
08592e0b +0x23dd:  mov    0x8(%ebp),%eax
08592e0e +0x23e0:  mov    %edx,0x3f8(%eax)
08592e14 +0x23e6:  movl   $0x4,(%esp)
08592e1b +0x23ed:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08592e20 +0x23f2:  mov    %eax,%ebx
08592e22 +0x23f4:  mov    %ebx,%eax
08592e24 +0x23f6:  mov    %eax,(%esp)
08592e27 +0x23f9:  call   08596d04 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1ce4>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x1ce4
08592e2c +0x23fe:  mov    %ebx,%eax
08592e2e +0x2400:  mov    %eax,%edx
08592e30 +0x2402:  mov    0x8(%ebp),%eax
08592e33 +0x2405:  mov    %edx,0x3fc(%eax)
08592e39 +0x240b:  movl   $0x4,(%esp)
08592e40 +0x2412:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08592e45 +0x2417:  mov    %eax,%ebx
08592e47 +0x2419:  mov    %ebx,%eax
08592e49 +0x241b:  mov    %eax,(%esp)
08592e4c +0x241e:  call   08596d20 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1d00>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x1d00
08592e51 +0x2423:  mov    %ebx,%eax
08592e53 +0x2425:  mov    %eax,%edx
08592e55 +0x2427:  mov    0x8(%ebp),%eax
08592e58 +0x242a:  mov    %edx,0x400(%eax)
08592e5e +0x2430:  movl   $0x4,(%esp)
08592e65 +0x2437:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08592e6a +0x243c:  mov    %eax,%ebx
08592e6c +0x243e:  mov    %ebx,%eax
08592e6e +0x2440:  mov    %eax,(%esp)
08592e71 +0x2443:  call   08596d3c <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1d1c>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x1d1c
08592e76 +0x2448:  mov    %ebx,%eax
08592e78 +0x244a:  mov    %eax,%edx
08592e7a +0x244c:  mov    0x8(%ebp),%eax
08592e7d +0x244f:  mov    %edx,0x4e0(%eax)
08592e83 +0x2455:  movl   $0x4,(%esp)
08592e8a +0x245c:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08592e8f +0x2461:  mov    %eax,%ebx
08592e91 +0x2463:  mov    %ebx,%eax
08592e93 +0x2465:  mov    %eax,(%esp)
08592e96 +0x2468:  call   08596d58 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1d38>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x1d38
08592e9b +0x246d:  mov    %ebx,%eax
08592e9d +0x246f:  mov    %eax,%edx
08592e9f +0x2471:  mov    0x8(%ebp),%eax
08592ea2 +0x2474:  mov    %edx,0x408(%eax)
08592ea8 +0x247a:  movl   $0x4,(%esp)
08592eaf +0x2481:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08592eb4 +0x2486:  mov    %eax,%ebx
08592eb6 +0x2488:  mov    %ebx,%eax
08592eb8 +0x248a:  mov    %eax,(%esp)
08592ebb +0x248d:  call   08596d74 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1d54>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x1d54
08592ec0 +0x2492:  mov    %ebx,%eax
08592ec2 +0x2494:  mov    %eax,%edx
08592ec4 +0x2496:  mov    0x8(%ebp),%eax
08592ec7 +0x2499:  mov    %edx,0x40c(%eax)
08592ecd +0x249f:  movl   $0x4,(%esp)
08592ed4 +0x24a6:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08592ed9 +0x24ab:  mov    %eax,%ebx
08592edb +0x24ad:  mov    %ebx,%eax
08592edd +0x24af:  mov    %eax,(%esp)
08592ee0 +0x24b2:  call   08596d90 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1d70>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x1d70
08592ee5 +0x24b7:  mov    %ebx,%eax
08592ee7 +0x24b9:  mov    %eax,%edx
08592ee9 +0x24bb:  mov    0x8(%ebp),%eax
08592eec +0x24be:  mov    %edx,0x410(%eax)
08592ef2 +0x24c4:  movl   $0x4,(%esp)
08592ef9 +0x24cb:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08592efe +0x24d0:  mov    %eax,%ebx
08592f00 +0x24d2:  mov    %ebx,%eax
08592f02 +0x24d4:  mov    %eax,(%esp)
08592f05 +0x24d7:  call   08596dac <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1d8c>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x1d8c
08592f0a +0x24dc:  mov    %ebx,%eax
08592f0c +0x24de:  mov    %eax,%edx
08592f0e +0x24e0:  mov    0x8(%ebp),%eax
08592f11 +0x24e3:  mov    %edx,0x414(%eax)
08592f17 +0x24e9:  movl   $0x4,(%esp)
08592f1e +0x24f0:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08592f23 +0x24f5:  mov    %eax,%ebx
08592f25 +0x24f7:  mov    %ebx,%eax
08592f27 +0x24f9:  mov    %eax,(%esp)
08592f2a +0x24fc:  call   08596dc8 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1da8>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x1da8
08592f2f +0x2501:  mov    %ebx,%eax
08592f31 +0x2503:  mov    %eax,%edx
08592f33 +0x2505:  mov    0x8(%ebp),%eax
08592f36 +0x2508:  mov    %edx,0x418(%eax)
08592f3c +0x250e:  movl   $0x4,(%esp)
08592f43 +0x2515:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08592f48 +0x251a:  mov    %eax,%ebx
08592f4a +0x251c:  mov    %ebx,%eax
08592f4c +0x251e:  mov    %eax,(%esp)
08592f4f +0x2521:  call   08596de4 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1dc4>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x1dc4
08592f54 +0x2526:  mov    %ebx,%eax
08592f56 +0x2528:  mov    %eax,%edx
08592f58 +0x252a:  mov    0x8(%ebp),%eax
08592f5b +0x252d:  mov    %edx,0x41c(%eax)
08592f61 +0x2533:  movl   $0x4,(%esp)
08592f68 +0x253a:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08592f6d +0x253f:  mov    %eax,%ebx
08592f6f +0x2541:  mov    %ebx,%eax
08592f71 +0x2543:  mov    %eax,(%esp)
08592f74 +0x2546:  call   08596e00 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1de0>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x1de0
08592f79 +0x254b:  mov    %ebx,%eax
08592f7b +0x254d:  mov    %eax,%edx
08592f7d +0x254f:  mov    0x8(%ebp),%eax
08592f80 +0x2552:  mov    %edx,0x420(%eax)
08592f86 +0x2558:  movl   $0x4,(%esp)
08592f8d +0x255f:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08592f92 +0x2564:  mov    %eax,%ebx
08592f94 +0x2566:  mov    %ebx,%eax
08592f96 +0x2568:  mov    %eax,(%esp)
08592f99 +0x256b:  call   08596e1c <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1dfc>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x1dfc
08592f9e +0x2570:  mov    %ebx,%eax
08592fa0 +0x2572:  mov    %eax,%edx
08592fa2 +0x2574:  mov    0x8(%ebp),%eax
08592fa5 +0x2577:  mov    %edx,0x42c(%eax)
08592fab +0x257d:  movl   $0x4,(%esp)
08592fb2 +0x2584:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08592fb7 +0x2589:  mov    %eax,%ebx
08592fb9 +0x258b:  mov    %ebx,%eax
08592fbb +0x258d:  mov    %eax,(%esp)
08592fbe +0x2590:  call   08596e38 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1e18>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x1e18
08592fc3 +0x2595:  mov    %ebx,%eax
08592fc5 +0x2597:  mov    %eax,%edx
08592fc7 +0x2599:  mov    0x8(%ebp),%eax
08592fca +0x259c:  mov    %edx,0x430(%eax)
08592fd0 +0x25a2:  movl   $0x4,(%esp)
08592fd7 +0x25a9:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08592fdc +0x25ae:  mov    %eax,%ebx
08592fde +0x25b0:  mov    %ebx,%eax
08592fe0 +0x25b2:  mov    %eax,(%esp)
08592fe3 +0x25b5:  call   08596e54 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1e34>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x1e34
08592fe8 +0x25ba:  mov    %ebx,%eax
08592fea +0x25bc:  mov    %eax,%edx
08592fec +0x25be:  mov    0x8(%ebp),%eax
08592fef +0x25c1:  mov    %edx,0x434(%eax)
08592ff5 +0x25c7:  movl   $0x4,(%esp)
08592ffc +0x25ce:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08593001 +0x25d3:  mov    %eax,%ebx
08593003 +0x25d5:  mov    %ebx,%eax
08593005 +0x25d7:  mov    %eax,(%esp)
08593008 +0x25da:  call   08596e70 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1e50>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x1e50
0859300d +0x25df:  mov    %ebx,%eax
0859300f +0x25e1:  mov    %eax,%edx
08593011 +0x25e3:  mov    0x8(%ebp),%eax
08593014 +0x25e6:  mov    %edx,0x43c(%eax)
0859301a +0x25ec:  movl   $0x4,(%esp)
08593021 +0x25f3:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08593026 +0x25f8:  mov    %eax,%ebx
08593028 +0x25fa:  mov    %ebx,%eax
0859302a +0x25fc:  mov    %eax,(%esp)
0859302d +0x25ff:  call   08596e8c <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1e6c>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x1e6c
08593032 +0x2604:  mov    %ebx,%eax
08593034 +0x2606:  mov    %eax,%edx
08593036 +0x2608:  mov    0x8(%ebp),%eax
08593039 +0x260b:  mov    %edx,0x440(%eax)
0859303f +0x2611:  movl   $0x4,(%esp)
08593046 +0x2618:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0859304b +0x261d:  mov    %eax,%ebx
0859304d +0x261f:  mov    %ebx,%eax
0859304f +0x2621:  mov    %eax,(%esp)
08593052 +0x2624:  call   08596ea8 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1e88>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x1e88
08593057 +0x2629:  mov    %ebx,%eax
08593059 +0x262b:  mov    %eax,%edx
0859305b +0x262d:  mov    0x8(%ebp),%eax
0859305e +0x2630:  mov    %edx,0x444(%eax)
08593064 +0x2636:  movl   $0x4,(%esp)
0859306b +0x263d:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08593070 +0x2642:  mov    %eax,%ebx
08593072 +0x2644:  mov    %ebx,%eax
08593074 +0x2646:  mov    %eax,(%esp)
08593077 +0x2649:  call   08596ec4 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1ea4>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x1ea4
0859307c +0x264e:  mov    %ebx,%eax
0859307e +0x2650:  mov    %eax,%edx
08593080 +0x2652:  mov    0x8(%ebp),%eax
08593083 +0x2655:  mov    %edx,0x448(%eax)
08593089 +0x265b:  movl   $0x4,(%esp)
08593090 +0x2662:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08593095 +0x2667:  mov    %eax,%ebx
08593097 +0x2669:  mov    %ebx,%eax
08593099 +0x266b:  mov    %eax,(%esp)
0859309c +0x266e:  call   08596ee0 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1ec0>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x1ec0
085930a1 +0x2673:  mov    %ebx,%eax
085930a3 +0x2675:  mov    %eax,%edx
085930a5 +0x2677:  mov    0x8(%ebp),%eax
085930a8 +0x267a:  mov    %edx,0x44c(%eax)
085930ae +0x2680:  movl   $0x4,(%esp)
085930b5 +0x2687:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085930ba +0x268c:  mov    %eax,%ebx
085930bc +0x268e:  mov    %ebx,%eax
085930be +0x2690:  mov    %eax,(%esp)
085930c1 +0x2693:  call   08596efc <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1edc>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x1edc
085930c6 +0x2698:  mov    %ebx,%eax
085930c8 +0x269a:  mov    %eax,%edx
085930ca +0x269c:  mov    0x8(%ebp),%eax
085930cd +0x269f:  mov    %edx,0x450(%eax)
085930d3 +0x26a5:  movl   $0x4,(%esp)
085930da +0x26ac:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085930df +0x26b1:  mov    %eax,%ebx
085930e1 +0x26b3:  mov    %ebx,%eax
085930e3 +0x26b5:  mov    %eax,(%esp)
085930e6 +0x26b8:  call   08596f18 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1ef8>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x1ef8
085930eb +0x26bd:  mov    %ebx,%eax
085930ed +0x26bf:  mov    %eax,%edx
085930ef +0x26c1:  mov    0x8(%ebp),%eax
085930f2 +0x26c4:  mov    %edx,0x47c(%eax)
085930f8 +0x26ca:  movl   $0x4,(%esp)
085930ff +0x26d1:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08593104 +0x26d6:  mov    %eax,%ebx
08593106 +0x26d8:  mov    %ebx,%eax
08593108 +0x26da:  mov    %eax,(%esp)
0859310b +0x26dd:  call   08596f34 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1f14>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x1f14
08593110 +0x26e2:  mov    %ebx,%eax
08593112 +0x26e4:  mov    %eax,%edx
08593114 +0x26e6:  mov    0x8(%ebp),%eax
08593117 +0x26e9:  mov    %edx,0x46c(%eax)
0859311d +0x26ef:  movl   $0x4,(%esp)
08593124 +0x26f6:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08593129 +0x26fb:  mov    %eax,%ebx
0859312b +0x26fd:  mov    %ebx,%eax
0859312d +0x26ff:  mov    %eax,(%esp)
08593130 +0x2702:  call   08596f50 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1f30>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x1f30
08593135 +0x2707:  mov    %ebx,%eax
08593137 +0x2709:  mov    %eax,%edx
08593139 +0x270b:  mov    0x8(%ebp),%eax
0859313c +0x270e:  mov    %edx,0x470(%eax)
08593142 +0x2714:  movl   $0x4,(%esp)
08593149 +0x271b:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0859314e +0x2720:  mov    %eax,%ebx
08593150 +0x2722:  mov    %ebx,%eax
08593152 +0x2724:  mov    %eax,(%esp)
08593155 +0x2727:  call   08596f6c <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1f4c>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x1f4c
0859315a +0x272c:  mov    %ebx,%eax
0859315c +0x272e:  mov    %eax,%edx
0859315e +0x2730:  mov    0x8(%ebp),%eax
08593161 +0x2733:  mov    %edx,0x468(%eax)
08593167 +0x2739:  movl   $0x4,(%esp)
0859316e +0x2740:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08593173 +0x2745:  mov    %eax,%ebx
08593175 +0x2747:  mov    %ebx,%eax
08593177 +0x2749:  mov    %eax,(%esp)
0859317a +0x274c:  call   08596f88 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1f68>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x1f68
0859317f +0x2751:  mov    %ebx,%eax
08593181 +0x2753:  mov    %eax,%edx
08593183 +0x2755:  mov    0x8(%ebp),%eax
08593186 +0x2758:  mov    %edx,0x478(%eax)
0859318c +0x275e:  movl   $0x4,(%esp)
08593193 +0x2765:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08593198 +0x276a:  mov    %eax,%ebx
0859319a +0x276c:  mov    %ebx,%eax
0859319c +0x276e:  mov    %eax,(%esp)
0859319f +0x2771:  call   08596fa4 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1f84>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x1f84
085931a4 +0x2776:  mov    %ebx,%eax
085931a6 +0x2778:  mov    %eax,%edx
085931a8 +0x277a:  mov    0x8(%ebp),%eax
085931ab +0x277d:  mov    %edx,0x480(%eax)
085931b1 +0x2783:  movl   $0x4,(%esp)
085931b8 +0x278a:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085931bd +0x278f:  mov    %eax,%ebx
085931bf +0x2791:  mov    %ebx,%eax
085931c1 +0x2793:  mov    %eax,(%esp)
085931c4 +0x2796:  call   08596fc0 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1fa0>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x1fa0
085931c9 +0x279b:  mov    %ebx,%eax
085931cb +0x279d:  mov    %eax,%edx
085931cd +0x279f:  mov    0x8(%ebp),%eax
085931d0 +0x27a2:  mov    %edx,0x484(%eax)
085931d6 +0x27a8:  movl   $0x4,(%esp)
085931dd +0x27af:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085931e2 +0x27b4:  mov    %eax,%ebx
085931e4 +0x27b6:  mov    %ebx,%eax
085931e6 +0x27b8:  mov    %eax,(%esp)
085931e9 +0x27bb:  call   08596fdc <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1fbc>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x1fbc
085931ee +0x27c0:  mov    %ebx,%eax
085931f0 +0x27c2:  mov    %eax,%edx
085931f2 +0x27c4:  mov    0x8(%ebp),%eax
085931f5 +0x27c7:  mov    %edx,0x488(%eax)
085931fb +0x27cd:  movl   $0x4,(%esp)
08593202 +0x27d4:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08593207 +0x27d9:  mov    %eax,%ebx
08593209 +0x27db:  mov    %ebx,%eax
0859320b +0x27dd:  mov    %eax,(%esp)
0859320e +0x27e0:  call   08596ff8 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1fd8>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x1fd8
08593213 +0x27e5:  mov    %ebx,%eax
08593215 +0x27e7:  mov    %eax,%edx
08593217 +0x27e9:  mov    0x8(%ebp),%eax
0859321a +0x27ec:  mov    %edx,0x48c(%eax)
08593220 +0x27f2:  movl   $0x4,(%esp)
08593227 +0x27f9:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0859322c +0x27fe:  mov    %eax,%ebx
0859322e +0x2800:  mov    %ebx,%eax
08593230 +0x2802:  mov    %eax,(%esp)
08593233 +0x2805:  call   08597014 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x1ff4>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x1ff4
08593238 +0x280a:  mov    %ebx,%eax
0859323a +0x280c:  mov    %eax,%edx
0859323c +0x280e:  mov    0x8(%ebp),%eax
0859323f +0x2811:  mov    %edx,0x490(%eax)
08593245 +0x2817:  movl   $0x4,(%esp)
0859324c +0x281e:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08593251 +0x2823:  mov    %eax,%ebx
08593253 +0x2825:  mov    %ebx,%eax
08593255 +0x2827:  mov    %eax,(%esp)
08593258 +0x282a:  call   08597030 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x2010>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x2010
0859325d +0x282f:  mov    %ebx,%eax
0859325f +0x2831:  mov    %eax,%edx
08593261 +0x2833:  mov    0x8(%ebp),%eax
08593264 +0x2836:  mov    %edx,0x498(%eax)
0859326a +0x283c:  movl   $0x4,(%esp)
08593271 +0x2843:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08593276 +0x2848:  mov    %eax,%ebx
08593278 +0x284a:  mov    %ebx,%eax
0859327a +0x284c:  mov    %eax,(%esp)
0859327d +0x284f:  call   0859704c <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x202c>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x202c
08593282 +0x2854:  mov    %ebx,%eax
08593284 +0x2856:  mov    %eax,%edx
08593286 +0x2858:  mov    0x8(%ebp),%eax
08593289 +0x285b:  mov    %edx,0x49c(%eax)
0859328f +0x2861:  movl   $0x4,(%esp)
08593296 +0x2868:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0859329b +0x286d:  mov    %eax,%ebx
0859329d +0x286f:  mov    %ebx,%eax
0859329f +0x2871:  mov    %eax,(%esp)
085932a2 +0x2874:  call   08597068 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x2048>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x2048
085932a7 +0x2879:  mov    %ebx,%eax
085932a9 +0x287b:  mov    %eax,%edx
085932ab +0x287d:  mov    0x8(%ebp),%eax
085932ae +0x2880:  mov    %edx,0x5a4(%eax)
085932b4 +0x2886:  movl   $0x4,(%esp)
085932bb +0x288d:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085932c0 +0x2892:  mov    %eax,%ebx
085932c2 +0x2894:  mov    %ebx,%eax
085932c4 +0x2896:  mov    %eax,(%esp)
085932c7 +0x2899:  call   08597084 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x2064>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x2064
085932cc +0x289e:  mov    %ebx,%eax
085932ce +0x28a0:  mov    %eax,%edx
085932d0 +0x28a2:  mov    0x8(%ebp),%eax
085932d3 +0x28a5:  mov    %edx,0x4a0(%eax)
085932d9 +0x28ab:  movl   $0x4,(%esp)
085932e0 +0x28b2:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085932e5 +0x28b7:  mov    %eax,%ebx
085932e7 +0x28b9:  mov    %ebx,%eax
085932e9 +0x28bb:  mov    %eax,(%esp)
085932ec +0x28be:  call   085956b4 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x694>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x694
085932f1 +0x28c3:  mov    %ebx,%eax
085932f3 +0x28c5:  mov    %eax,%edx
085932f5 +0x28c7:  mov    0x8(%ebp),%eax
085932f8 +0x28ca:  mov    %edx,0x868(%eax)
085932fe +0x28d0:  movl   $0x4,(%esp)
08593305 +0x28d7:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0859330a +0x28dc:  mov    %eax,%ebx
0859330c +0x28de:  mov    %ebx,%eax
0859330e +0x28e0:  mov    %eax,(%esp)
08593311 +0x28e3:  call   085970a0 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x2080>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x2080
08593316 +0x28e8:  mov    %ebx,%eax
08593318 +0x28ea:  mov    %eax,%edx
0859331a +0x28ec:  mov    0x8(%ebp),%eax
0859331d +0x28ef:  mov    %edx,0x4a4(%eax)
08593323 +0x28f5:  movl   $0x4,(%esp)
0859332a +0x28fc:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0859332f +0x2901:  mov    %eax,%ebx
08593331 +0x2903:  mov    %ebx,%eax
08593333 +0x2905:  mov    %eax,(%esp)
08593336 +0x2908:  call   085970bc <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x209c>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x209c
0859333b +0x290d:  mov    %ebx,%eax
0859333d +0x290f:  mov    %eax,%edx
0859333f +0x2911:  mov    0x8(%ebp),%eax
08593342 +0x2914:  mov    %edx,0x4a8(%eax)
08593348 +0x291a:  movl   $0x4,(%esp)
0859334f +0x2921:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08593354 +0x2926:  mov    %eax,%ebx
08593356 +0x2928:  mov    %ebx,%eax
08593358 +0x292a:  mov    %eax,(%esp)
0859335b +0x292d:  call   085970d8 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x20b8>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x20b8
08593360 +0x2932:  mov    %ebx,%eax
08593362 +0x2934:  mov    %eax,%edx
08593364 +0x2936:  mov    0x8(%ebp),%eax
08593367 +0x2939:  mov    %edx,0x4ac(%eax)
0859336d +0x293f:  movl   $0x4,(%esp)
08593374 +0x2946:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08593379 +0x294b:  mov    %eax,%ebx
0859337b +0x294d:  mov    %ebx,%eax
0859337d +0x294f:  mov    %eax,(%esp)
08593380 +0x2952:  call   085970f4 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x20d4>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x20d4
08593385 +0x2957:  mov    %ebx,%eax
08593387 +0x2959:  mov    %eax,%edx
08593389 +0x295b:  mov    0x8(%ebp),%eax
0859338c +0x295e:  mov    %edx,0x4b0(%eax)
08593392 +0x2964:  movl   $0x4,(%esp)
08593399 +0x296b:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0859339e +0x2970:  mov    %eax,%ebx
085933a0 +0x2972:  mov    %ebx,%eax
085933a2 +0x2974:  mov    %eax,(%esp)
085933a5 +0x2977:  call   08597110 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x20f0>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x20f0
085933aa +0x297c:  mov    %ebx,%eax
085933ac +0x297e:  mov    %eax,%edx
085933ae +0x2980:  mov    0x8(%ebp),%eax
085933b1 +0x2983:  mov    %edx,0x4b4(%eax)
085933b7 +0x2989:  movl   $0x4,(%esp)
085933be +0x2990:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085933c3 +0x2995:  mov    %eax,%ebx
085933c5 +0x2997:  mov    %ebx,%eax
085933c7 +0x2999:  mov    %eax,(%esp)
085933ca +0x299c:  call   0859712c <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x210c>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x210c
085933cf +0x29a1:  mov    %ebx,%eax
085933d1 +0x29a3:  mov    %eax,%edx
085933d3 +0x29a5:  mov    0x8(%ebp),%eax
085933d6 +0x29a8:  mov    %edx,0x4c8(%eax)
085933dc +0x29ae:  movl   $0x4,(%esp)
085933e3 +0x29b5:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085933e8 +0x29ba:  mov    %eax,%ebx
085933ea +0x29bc:  mov    %ebx,%eax
085933ec +0x29be:  mov    %eax,(%esp)
085933ef +0x29c1:  call   08597148 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x2128>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x2128
085933f4 +0x29c6:  mov    %ebx,%eax
085933f6 +0x29c8:  mov    %eax,%edx
085933f8 +0x29ca:  mov    0x8(%ebp),%eax
085933fb +0x29cd:  mov    %edx,0x4cc(%eax)
08593401 +0x29d3:  movl   $0x4,(%esp)
08593408 +0x29da:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0859340d +0x29df:  mov    %eax,%ebx
0859340f +0x29e1:  mov    %ebx,%eax
08593411 +0x29e3:  mov    %eax,(%esp)
08593414 +0x29e6:  call   08597164 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x2144>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x2144
08593419 +0x29eb:  mov    %ebx,%eax
0859341b +0x29ed:  mov    %eax,%edx
0859341d +0x29ef:  mov    0x8(%ebp),%eax
08593420 +0x29f2:  mov    %edx,0x4d0(%eax)
08593426 +0x29f8:  movl   $0x4,(%esp)
0859342d +0x29ff:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08593432 +0x2a04:  mov    %eax,%ebx
08593434 +0x2a06:  mov    %ebx,%eax
08593436 +0x2a08:  mov    %eax,(%esp)
08593439 +0x2a0b:  call   08597180 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x2160>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x2160
0859343e +0x2a10:  mov    %ebx,%eax
08593440 +0x2a12:  mov    %eax,%edx
08593442 +0x2a14:  mov    0x8(%ebp),%eax
08593445 +0x2a17:  mov    %edx,0x4d4(%eax)
0859344b +0x2a1d:  movl   $0x4,(%esp)
08593452 +0x2a24:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08593457 +0x2a29:  mov    %eax,%ebx
08593459 +0x2a2b:  mov    %ebx,%eax
0859345b +0x2a2d:  mov    %eax,(%esp)
0859345e +0x2a30:  call   0859719c <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x217c>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x217c
08593463 +0x2a35:  mov    %ebx,%eax
08593465 +0x2a37:  mov    %eax,%edx
08593467 +0x2a39:  mov    0x8(%ebp),%eax
0859346a +0x2a3c:  mov    %edx,0x530(%eax)
08593470 +0x2a42:  movl   $0x4,(%esp)
08593477 +0x2a49:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0859347c +0x2a4e:  mov    %eax,%ebx
0859347e +0x2a50:  mov    %ebx,%eax
08593480 +0x2a52:  mov    %eax,(%esp)
08593483 +0x2a55:  call   085971b8 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x2198>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x2198
08593488 +0x2a5a:  mov    %ebx,%eax
0859348a +0x2a5c:  mov    %eax,%edx
0859348c +0x2a5e:  mov    0x8(%ebp),%eax
0859348f +0x2a61:  mov    %edx,0x534(%eax)
08593495 +0x2a67:  movl   $0x4,(%esp)
0859349c +0x2a6e:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085934a1 +0x2a73:  mov    %eax,%ebx
085934a3 +0x2a75:  mov    %ebx,%eax
085934a5 +0x2a77:  mov    %eax,(%esp)
085934a8 +0x2a7a:  call   085971d4 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x21b4>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x21b4
085934ad +0x2a7f:  mov    %ebx,%eax
085934af +0x2a81:  mov    %eax,%edx
085934b1 +0x2a83:  mov    0x8(%ebp),%eax
085934b4 +0x2a86:  mov    %edx,0x554(%eax)
085934ba +0x2a8c:  movl   $0x4,(%esp)
085934c1 +0x2a93:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085934c6 +0x2a98:  mov    %eax,%ebx
085934c8 +0x2a9a:  mov    %ebx,%eax
085934ca +0x2a9c:  mov    %eax,(%esp)
085934cd +0x2a9f:  call   085971f0 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x21d0>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x21d0
085934d2 +0x2aa4:  mov    %ebx,%eax
085934d4 +0x2aa6:  mov    %eax,%edx
085934d6 +0x2aa8:  mov    0x8(%ebp),%eax
085934d9 +0x2aab:  mov    %edx,0x558(%eax)
085934df +0x2ab1:  movl   $0x4,(%esp)
085934e6 +0x2ab8:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085934eb +0x2abd:  mov    %eax,%ebx
085934ed +0x2abf:  mov    %ebx,%eax
085934ef +0x2ac1:  mov    %eax,(%esp)
085934f2 +0x2ac4:  call   0859720c <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x21ec>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x21ec
085934f7 +0x2ac9:  mov    %ebx,%eax
085934f9 +0x2acb:  mov    %eax,%edx
085934fb +0x2acd:  mov    0x8(%ebp),%eax
085934fe +0x2ad0:  mov    %edx,0x55c(%eax)
08593504 +0x2ad6:  movl   $0x4,(%esp)
0859350b +0x2add:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08593510 +0x2ae2:  mov    %eax,%ebx
08593512 +0x2ae4:  mov    %ebx,%eax
08593514 +0x2ae6:  mov    %eax,(%esp)
08593517 +0x2ae9:  call   08597228 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x2208>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x2208
0859351c +0x2aee:  mov    %ebx,%eax
0859351e +0x2af0:  mov    %eax,%edx
08593520 +0x2af2:  mov    0x8(%ebp),%eax
08593523 +0x2af5:  mov    %edx,0x5b4(%eax)
08593529 +0x2afb:  movl   $0xd8,(%esp)
08593530 +0x2b02:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08593535 +0x2b07:  mov    %eax,%ebx
08593537 +0x2b09:  mov    %ebx,%eax
08593539 +0x2b0b:  mov    %eax,(%esp)
0859353c +0x2b0e:  call   08597244 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x2224>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x2224
08593541 +0x2b13:  mov    %ebx,%eax
08593543 +0x2b15:  mov    %eax,%edx
08593545 +0x2b17:  mov    0x8(%ebp),%eax
08593548 +0x2b1a:  mov    %edx,0x518(%eax)
0859354e +0x2b20:  movl   $0x4,(%esp)
08593555 +0x2b27:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0859355a +0x2b2c:  mov    %eax,%ebx
0859355c +0x2b2e:  mov    %ebx,%eax
0859355e +0x2b30:  mov    %eax,(%esp)
08593561 +0x2b33:  call   0859729e <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x227e>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x227e
08593566 +0x2b38:  mov    %ebx,%eax
08593568 +0x2b3a:  mov    %eax,%edx
0859356a +0x2b3c:  mov    0x8(%ebp),%eax
0859356d +0x2b3f:  mov    %edx,0x4d8(%eax)
08593573 +0x2b45:  movl   $0x4,(%esp)
0859357a +0x2b4c:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0859357f +0x2b51:  mov    %eax,%ebx
08593581 +0x2b53:  mov    %ebx,%eax
08593583 +0x2b55:  mov    %eax,(%esp)
08593586 +0x2b58:  call   085972ba <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x229a>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x229a
0859358b +0x2b5d:  mov    %ebx,%eax
0859358d +0x2b5f:  mov    %eax,%edx
0859358f +0x2b61:  mov    0x8(%ebp),%eax
08593592 +0x2b64:  mov    %edx,0x4dc(%eax)
08593598 +0x2b6a:  movl   $0x4,(%esp)
0859359f +0x2b71:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085935a4 +0x2b76:  mov    %eax,%ebx
085935a6 +0x2b78:  mov    %ebx,%eax
085935a8 +0x2b7a:  mov    %eax,(%esp)
085935ab +0x2b7d:  call   085972d6 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x22b6>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x22b6
085935b0 +0x2b82:  mov    %ebx,%eax
085935b2 +0x2b84:  mov    %eax,%edx
085935b4 +0x2b86:  mov    0x8(%ebp),%eax
085935b7 +0x2b89:  mov    %edx,0x4f0(%eax)
085935bd +0x2b8f:  movl   $0x4,(%esp)
085935c4 +0x2b96:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085935c9 +0x2b9b:  mov    %eax,%ebx
085935cb +0x2b9d:  mov    %ebx,%eax
085935cd +0x2b9f:  mov    %eax,(%esp)
085935d0 +0x2ba2:  call   085972f2 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x22d2>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x22d2
085935d5 +0x2ba7:  mov    %ebx,%eax
085935d7 +0x2ba9:  mov    %eax,%edx
085935d9 +0x2bab:  mov    0x8(%ebp),%eax
085935dc +0x2bae:  mov    %edx,0x514(%eax)
085935e2 +0x2bb4:  movl   $0x4,(%esp)
085935e9 +0x2bbb:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085935ee +0x2bc0:  mov    %eax,%ebx
085935f0 +0x2bc2:  mov    %ebx,%eax
085935f2 +0x2bc4:  mov    %eax,(%esp)
085935f5 +0x2bc7:  call   0859730e <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x22ee>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x22ee
085935fa +0x2bcc:  mov    %ebx,%eax
085935fc +0x2bce:  mov    %eax,%edx
085935fe +0x2bd0:  mov    0x8(%ebp),%eax
08593601 +0x2bd3:  mov    %edx,0x4f4(%eax)
08593607 +0x2bd9:  movl   $0x4,(%esp)
0859360e +0x2be0:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08593613 +0x2be5:  mov    %eax,%ebx
08593615 +0x2be7:  mov    %ebx,%eax
08593617 +0x2be9:  mov    %eax,(%esp)
0859361a +0x2bec:  call   0859732a <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x230a>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x230a
0859361f +0x2bf1:  mov    %ebx,%eax
08593621 +0x2bf3:  mov    %eax,%edx
08593623 +0x2bf5:  mov    0x8(%ebp),%eax
08593626 +0x2bf8:  mov    %edx,0x4f8(%eax)
0859362c +0x2bfe:  movl   $0x4,(%esp)
08593633 +0x2c05:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08593638 +0x2c0a:  mov    %eax,%ebx
0859363a +0x2c0c:  mov    %ebx,%eax
0859363c +0x2c0e:  mov    %eax,(%esp)
0859363f +0x2c11:  call   08597346 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x2326>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x2326
08593644 +0x2c16:  mov    %ebx,%eax
08593646 +0x2c18:  mov    %eax,%edx
08593648 +0x2c1a:  mov    0x8(%ebp),%eax
0859364b +0x2c1d:  mov    %edx,0x53c(%eax)
08593651 +0x2c23:  movl   $0x4,(%esp)
08593658 +0x2c2a:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0859365d +0x2c2f:  mov    %eax,%ebx
0859365f +0x2c31:  mov    %ebx,%eax
08593661 +0x2c33:  mov    %eax,(%esp)
08593664 +0x2c36:  call   08597362 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x2342>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x2342
08593669 +0x2c3b:  mov    %ebx,%eax
0859366b +0x2c3d:  mov    %eax,%edx
0859366d +0x2c3f:  mov    0x8(%ebp),%eax
08593670 +0x2c42:  mov    %edx,0x4fc(%eax)
08593676 +0x2c48:  movl   $0x4,(%esp)
0859367d +0x2c4f:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08593682 +0x2c54:  mov    %eax,%ebx
08593684 +0x2c56:  mov    %ebx,%eax
08593686 +0x2c58:  mov    %eax,(%esp)
08593689 +0x2c5b:  call   0859737e <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x235e>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x235e
0859368e +0x2c60:  mov    %ebx,%eax
08593690 +0x2c62:  mov    %eax,%edx
08593692 +0x2c64:  mov    0x8(%ebp),%eax
08593695 +0x2c67:  mov    %edx,0x500(%eax)
0859369b +0x2c6d:  movl   $0x4,(%esp)
085936a2 +0x2c74:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085936a7 +0x2c79:  mov    %eax,%ebx
085936a9 +0x2c7b:  mov    %ebx,%eax
085936ab +0x2c7d:  mov    %eax,(%esp)
085936ae +0x2c80:  call   0859739a <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x237a>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x237a
085936b3 +0x2c85:  mov    %ebx,%eax
085936b5 +0x2c87:  mov    %eax,%edx
085936b7 +0x2c89:  mov    0x8(%ebp),%eax
085936ba +0x2c8c:  mov    %edx,0x528(%eax)
085936c0 +0x2c92:  movl   $0x4,(%esp)
085936c7 +0x2c99:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085936cc +0x2c9e:  mov    %eax,%ebx
085936ce +0x2ca0:  mov    %ebx,%eax
085936d0 +0x2ca2:  mov    %eax,(%esp)
085936d3 +0x2ca5:  call   085973b6 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x2396>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x2396
085936d8 +0x2caa:  mov    %ebx,%eax
085936da +0x2cac:  mov    %eax,%edx
085936dc +0x2cae:  mov    0x8(%ebp),%eax
085936df +0x2cb1:  mov    %edx,0x52c(%eax)
085936e5 +0x2cb7:  movl   $0x4,(%esp)
085936ec +0x2cbe:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085936f1 +0x2cc3:  mov    %eax,%ebx
085936f3 +0x2cc5:  mov    %ebx,%eax
085936f5 +0x2cc7:  mov    %eax,(%esp)
085936f8 +0x2cca:  call   085973d2 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x23b2>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x23b2
085936fd +0x2ccf:  mov    %ebx,%eax
085936ff +0x2cd1:  mov    %eax,%edx
08593701 +0x2cd3:  mov    0x8(%ebp),%eax
08593704 +0x2cd6:  mov    %edx,0x538(%eax)
0859370a +0x2cdc:  movl   $0x4,(%esp)
08593711 +0x2ce3:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08593716 +0x2ce8:  mov    %eax,%ebx
08593718 +0x2cea:  mov    %ebx,%eax
0859371a +0x2cec:  mov    %eax,(%esp)
0859371d +0x2cef:  call   085973ee <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x23ce>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x23ce
08593722 +0x2cf4:  mov    %ebx,%eax
08593724 +0x2cf6:  mov    %eax,%edx
08593726 +0x2cf8:  mov    0x8(%ebp),%eax
08593729 +0x2cfb:  mov    %edx,0x540(%eax)
0859372f +0x2d01:  movl   $0x4,(%esp)
08593736 +0x2d08:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0859373b +0x2d0d:  mov    %eax,%ebx
0859373d +0x2d0f:  mov    %ebx,%eax
0859373f +0x2d11:  mov    %eax,(%esp)
08593742 +0x2d14:  call   0859740a <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x23ea>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x23ea
08593747 +0x2d19:  mov    %ebx,%eax
08593749 +0x2d1b:  mov    %eax,%edx
0859374b +0x2d1d:  mov    0x8(%ebp),%eax
0859374e +0x2d20:  mov    %edx,0x548(%eax)
08593754 +0x2d26:  movl   $0x4,(%esp)
0859375b +0x2d2d:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08593760 +0x2d32:  mov    %eax,%ebx
08593762 +0x2d34:  mov    %ebx,%eax
08593764 +0x2d36:  mov    %eax,(%esp)
08593767 +0x2d39:  call   08597426 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x2406>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x2406
0859376c +0x2d3e:  mov    %ebx,%eax
0859376e +0x2d40:  mov    %eax,%edx
08593770 +0x2d42:  mov    0x8(%ebp),%eax
08593773 +0x2d45:  mov    %edx,0x54c(%eax)
08593779 +0x2d4b:  movl   $0x4,(%esp)
08593780 +0x2d52:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08593785 +0x2d57:  mov    %eax,%ebx
08593787 +0x2d59:  mov    %ebx,%eax
08593789 +0x2d5b:  mov    %eax,(%esp)
0859378c +0x2d5e:  call   08597442 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x2422>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x2422
08593791 +0x2d63:  mov    %ebx,%eax
08593793 +0x2d65:  mov    %eax,%edx
08593795 +0x2d67:  mov    0x8(%ebp),%eax
08593798 +0x2d6a:  mov    %edx,0x550(%eax)
0859379e +0x2d70:  movl   $0x4,(%esp)
085937a5 +0x2d77:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085937aa +0x2d7c:  mov    %eax,%ebx
085937ac +0x2d7e:  mov    %ebx,%eax
085937ae +0x2d80:  mov    %eax,(%esp)
085937b1 +0x2d83:  call   0859745e <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x243e>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x243e
085937b6 +0x2d88:  mov    %ebx,%eax
085937b8 +0x2d8a:  mov    %eax,%edx
085937ba +0x2d8c:  mov    0x8(%ebp),%eax
085937bd +0x2d8f:  mov    %edx,0x56c(%eax)
085937c3 +0x2d95:  movl   $0x4,(%esp)
085937ca +0x2d9c:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085937cf +0x2da1:  mov    %eax,%ebx
085937d1 +0x2da3:  mov    %ebx,%eax
085937d3 +0x2da5:  mov    %eax,(%esp)
085937d6 +0x2da8:  call   0859747a <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x245a>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x245a
085937db +0x2dad:  mov    %ebx,%eax
085937dd +0x2daf:  mov    %eax,%edx
085937df +0x2db1:  mov    0x8(%ebp),%eax
085937e2 +0x2db4:  mov    %edx,0x570(%eax)
085937e8 +0x2dba:  movl   $0x4,(%esp)
085937ef +0x2dc1:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085937f4 +0x2dc6:  mov    %eax,%ebx
085937f6 +0x2dc8:  mov    %ebx,%eax
085937f8 +0x2dca:  mov    %eax,(%esp)
085937fb +0x2dcd:  call   08597496 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x2476>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x2476
08593800 +0x2dd2:  mov    %ebx,%eax
08593802 +0x2dd4:  mov    %eax,%edx
08593804 +0x2dd6:  mov    0x8(%ebp),%eax
08593807 +0x2dd9:  mov    %edx,0x574(%eax)
0859380d +0x2ddf:  movl   $0x4,(%esp)
08593814 +0x2de6:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08593819 +0x2deb:  mov    %eax,%ebx
0859381b +0x2ded:  mov    %ebx,%eax
0859381d +0x2def:  mov    %eax,(%esp)
08593820 +0x2df2:  call   085974b2 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x2492>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x2492
08593825 +0x2df7:  mov    %ebx,%eax
08593827 +0x2df9:  mov    %eax,%edx
08593829 +0x2dfb:  mov    0x8(%ebp),%eax
0859382c +0x2dfe:  mov    %edx,0x578(%eax)
08593832 +0x2e04:  movl   $0x4,(%esp)
08593839 +0x2e0b:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0859383e +0x2e10:  mov    %eax,%ebx
08593840 +0x2e12:  mov    %ebx,%eax
08593842 +0x2e14:  mov    %eax,(%esp)
08593845 +0x2e17:  call   085974ce <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x24ae>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x24ae
0859384a +0x2e1c:  mov    %ebx,%eax
0859384c +0x2e1e:  mov    %eax,%edx
0859384e +0x2e20:  mov    0x8(%ebp),%eax
08593851 +0x2e23:  mov    %edx,0x57c(%eax)
08593857 +0x2e29:  movl   $0x4,(%esp)
0859385e +0x2e30:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08593863 +0x2e35:  mov    %eax,%ebx
08593865 +0x2e37:  mov    %ebx,%eax
08593867 +0x2e39:  mov    %eax,(%esp)
0859386a +0x2e3c:  call   085974ea <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x24ca>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x24ca
0859386f +0x2e41:  mov    %ebx,%eax
08593871 +0x2e43:  mov    %eax,%edx
08593873 +0x2e45:  mov    0x8(%ebp),%eax
08593876 +0x2e48:  mov    %edx,0x580(%eax)
0859387c +0x2e4e:  movl   $0x4,(%esp)
08593883 +0x2e55:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08593888 +0x2e5a:  mov    %eax,%ebx
0859388a +0x2e5c:  mov    %ebx,%eax
0859388c +0x2e5e:  mov    %eax,(%esp)
0859388f +0x2e61:  call   08597506 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x24e6>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x24e6
08593894 +0x2e66:  mov    %ebx,%eax
08593896 +0x2e68:  mov    %eax,%edx
08593898 +0x2e6a:  mov    0x8(%ebp),%eax
0859389b +0x2e6d:  mov    %edx,0x584(%eax)
085938a1 +0x2e73:  movl   $0x4,(%esp)
085938a8 +0x2e7a:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085938ad +0x2e7f:  mov    %eax,%ebx
085938af +0x2e81:  mov    %ebx,%eax
085938b1 +0x2e83:  mov    %eax,(%esp)
085938b4 +0x2e86:  call   08597522 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x2502>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x2502
085938b9 +0x2e8b:  mov    %ebx,%eax
085938bb +0x2e8d:  mov    %eax,%edx
085938bd +0x2e8f:  mov    0x8(%ebp),%eax
085938c0 +0x2e92:  mov    %edx,0x590(%eax)
085938c6 +0x2e98:  movl   $0x4,(%esp)
085938cd +0x2e9f:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085938d2 +0x2ea4:  mov    %eax,%ebx
085938d4 +0x2ea6:  mov    %ebx,%eax
085938d6 +0x2ea8:  mov    %eax,(%esp)
085938d9 +0x2eab:  call   0859753e <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x251e>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x251e
085938de +0x2eb0:  mov    %ebx,%eax
085938e0 +0x2eb2:  mov    %eax,%edx
085938e2 +0x2eb4:  mov    0x8(%ebp),%eax
085938e5 +0x2eb7:  mov    %edx,0x598(%eax)
085938eb +0x2ebd:  movl   $0x4,(%esp)
085938f2 +0x2ec4:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085938f7 +0x2ec9:  mov    %eax,%ebx
085938f9 +0x2ecb:  mov    %ebx,%eax
085938fb +0x2ecd:  mov    %eax,(%esp)
085938fe +0x2ed0:  call   0859755a <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x253a>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x253a
08593903 +0x2ed5:  mov    %ebx,%eax
08593905 +0x2ed7:  mov    %eax,%edx
08593907 +0x2ed9:  mov    0x8(%ebp),%eax
0859390a +0x2edc:  mov    %edx,0x8a0(%eax)
08593910 +0x2ee2:  movl   $0x4,(%esp)
08593917 +0x2ee9:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0859391c +0x2eee:  mov    %eax,%ebx
0859391e +0x2ef0:  mov    %ebx,%eax
08593920 +0x2ef2:  mov    %eax,(%esp)
08593923 +0x2ef5:  call   08597576 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x2556>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x2556
08593928 +0x2efa:  mov    %ebx,%eax
0859392a +0x2efc:  mov    %eax,%edx
0859392c +0x2efe:  mov    0x8(%ebp),%eax
0859392f +0x2f01:  mov    %edx,0x8a4(%eax)
08593935 +0x2f07:  movl   $0x4,(%esp)
0859393c +0x2f0e:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08593941 +0x2f13:  mov    %eax,%ebx
08593943 +0x2f15:  mov    %ebx,%eax
08593945 +0x2f17:  mov    %eax,(%esp)
08593948 +0x2f1a:  call   08597592 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x2572>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x2572
0859394d +0x2f1f:  mov    %ebx,%eax
0859394f +0x2f21:  mov    %eax,%edx
08593951 +0x2f23:  mov    0x8(%ebp),%eax
08593954 +0x2f26:  mov    %edx,0x5b8(%eax)
0859395a +0x2f2c:  movl   $0x4,(%esp)
08593961 +0x2f33:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08593966 +0x2f38:  mov    %eax,%ebx
08593968 +0x2f3a:  mov    %ebx,%eax
0859396a +0x2f3c:  mov    %eax,(%esp)
0859396d +0x2f3f:  call   085975ae <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x258e>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x258e
08593972 +0x2f44:  mov    %ebx,%eax
08593974 +0x2f46:  mov    %eax,%edx
08593976 +0x2f48:  mov    0x8(%ebp),%eax
08593979 +0x2f4b:  mov    %edx,0x5bc(%eax)
0859397f +0x2f51:  movl   $0x4,(%esp)
08593986 +0x2f58:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0859398b +0x2f5d:  mov    %eax,%ebx
0859398d +0x2f5f:  mov    %ebx,%eax
0859398f +0x2f61:  mov    %eax,(%esp)
08593992 +0x2f64:  call   085975ca <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x25aa>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x25aa
08593997 +0x2f69:  mov    %ebx,%eax
08593999 +0x2f6b:  mov    %eax,%edx
0859399b +0x2f6d:  mov    0x8(%ebp),%eax
0859399e +0x2f70:  mov    %edx,0x5c0(%eax)
085939a4 +0x2f76:  movl   $0x4,(%esp)
085939ab +0x2f7d:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085939b0 +0x2f82:  mov    %eax,%ebx
085939b2 +0x2f84:  mov    %ebx,%eax
085939b4 +0x2f86:  mov    %eax,(%esp)
085939b7 +0x2f89:  call   085975e6 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x25c6>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x25c6
085939bc +0x2f8e:  mov    %ebx,%eax
085939be +0x2f90:  mov    %eax,%edx
085939c0 +0x2f92:  mov    0x8(%ebp),%eax
085939c3 +0x2f95:  mov    %edx,0x5c4(%eax)
085939c9 +0x2f9b:  movl   $0x4,(%esp)
085939d0 +0x2fa2:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085939d5 +0x2fa7:  mov    %eax,%ebx
085939d7 +0x2fa9:  mov    %ebx,%eax
085939d9 +0x2fab:  mov    %eax,(%esp)
085939dc +0x2fae:  call   08597602 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x25e2>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x25e2
085939e1 +0x2fb3:  mov    %ebx,%eax
085939e3 +0x2fb5:  mov    %eax,%edx
085939e5 +0x2fb7:  mov    0x8(%ebp),%eax
085939e8 +0x2fba:  mov    %edx,0x5c8(%eax)
085939ee +0x2fc0:  movl   $0x4,(%esp)
085939f5 +0x2fc7:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085939fa +0x2fcc:  mov    %eax,%ebx
085939fc +0x2fce:  mov    %ebx,%eax
085939fe +0x2fd0:  mov    %eax,(%esp)
08593a01 +0x2fd3:  call   0859761e <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x25fe>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x25fe
08593a06 +0x2fd8:  mov    %ebx,%eax
08593a08 +0x2fda:  mov    %eax,%edx
08593a0a +0x2fdc:  mov    0x8(%ebp),%eax
08593a0d +0x2fdf:  mov    %edx,0x5cc(%eax)
08593a13 +0x2fe5:  movl   $0x4,(%esp)
08593a1a +0x2fec:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08593a1f +0x2ff1:  mov    %eax,%ebx
08593a21 +0x2ff3:  mov    %ebx,%eax
08593a23 +0x2ff5:  mov    %eax,(%esp)
08593a26 +0x2ff8:  call   0859763a <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x261a>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x261a
08593a2b +0x2ffd:  mov    %ebx,%eax
08593a2d +0x2fff:  mov    %eax,%edx
08593a2f +0x3001:  mov    0x8(%ebp),%eax
08593a32 +0x3004:  mov    %edx,0x5d0(%eax)
08593a38 +0x300a:  movl   $0x4,(%esp)
08593a3f +0x3011:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08593a44 +0x3016:  mov    %eax,%ebx
08593a46 +0x3018:  mov    %ebx,%eax
08593a48 +0x301a:  mov    %eax,(%esp)
08593a4b +0x301d:  call   08597656 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x2636>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x2636
08593a50 +0x3022:  mov    %ebx,%eax
08593a52 +0x3024:  mov    %eax,%edx
08593a54 +0x3026:  mov    0x8(%ebp),%eax
08593a57 +0x3029:  mov    %edx,0x5d8(%eax)
08593a5d +0x302f:  movl   $0x4,(%esp)
08593a64 +0x3036:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08593a69 +0x303b:  mov    %eax,%ebx
08593a6b +0x303d:  mov    %ebx,%eax
08593a6d +0x303f:  mov    %eax,(%esp)
08593a70 +0x3042:  call   08597672 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x2652>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x2652
08593a75 +0x3047:  mov    %ebx,%eax
08593a77 +0x3049:  mov    %eax,%edx
08593a79 +0x304b:  mov    0x8(%ebp),%eax
08593a7c +0x304e:  mov    %edx,0x5dc(%eax)
08593a82 +0x3054:  movl   $0x4,(%esp)
08593a89 +0x305b:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08593a8e +0x3060:  mov    %eax,%ebx
08593a90 +0x3062:  mov    %ebx,%eax
08593a92 +0x3064:  mov    %eax,(%esp)
08593a95 +0x3067:  call   0859768e <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x266e>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x266e
08593a9a +0x306c:  mov    %ebx,%eax
08593a9c +0x306e:  mov    %eax,%edx
08593a9e +0x3070:  mov    0x8(%ebp),%eax
08593aa1 +0x3073:  mov    %edx,0x5e0(%eax)
08593aa7 +0x3079:  movl   $0x4,(%esp)
08593aae +0x3080:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08593ab3 +0x3085:  mov    %eax,%ebx
08593ab5 +0x3087:  mov    %ebx,%eax
08593ab7 +0x3089:  mov    %eax,(%esp)
08593aba +0x308c:  call   085976aa <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x268a>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x268a
08593abf +0x3091:  mov    %ebx,%eax
08593ac1 +0x3093:  mov    %eax,%edx
08593ac3 +0x3095:  mov    0x8(%ebp),%eax
08593ac6 +0x3098:  mov    %edx,0x66c(%eax)
08593acc +0x309e:  movl   $0x4,(%esp)
08593ad3 +0x30a5:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08593ad8 +0x30aa:  mov    %eax,%ebx
08593ada +0x30ac:  mov    %ebx,%eax
08593adc +0x30ae:  mov    %eax,(%esp)
08593adf +0x30b1:  call   085976c6 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x26a6>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x26a6
08593ae4 +0x30b6:  mov    %ebx,%eax
08593ae6 +0x30b8:  mov    %eax,%edx
08593ae8 +0x30ba:  mov    0x8(%ebp),%eax
08593aeb +0x30bd:  mov    %edx,0x5e4(%eax)
08593af1 +0x30c3:  movl   $0x4,(%esp)
08593af8 +0x30ca:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08593afd +0x30cf:  mov    %eax,%ebx
08593aff +0x30d1:  mov    %ebx,%eax
08593b01 +0x30d3:  mov    %eax,(%esp)
08593b04 +0x30d6:  call   085976e2 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x26c2>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x26c2
08593b09 +0x30db:  mov    %ebx,%eax
08593b0b +0x30dd:  mov    %eax,%edx
08593b0d +0x30df:  mov    0x8(%ebp),%eax
08593b10 +0x30e2:  mov    %edx,0x634(%eax)
08593b16 +0x30e8:  movl   $0x4,(%esp)
08593b1d +0x30ef:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08593b22 +0x30f4:  mov    %eax,%ebx
08593b24 +0x30f6:  mov    %ebx,%eax
08593b26 +0x30f8:  mov    %eax,(%esp)
08593b29 +0x30fb:  call   085976fe <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x26de>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x26de
08593b2e +0x3100:  mov    %ebx,%eax
08593b30 +0x3102:  mov    %eax,%edx
08593b32 +0x3104:  mov    0x8(%ebp),%eax
08593b35 +0x3107:  mov    %edx,0x638(%eax)
08593b3b +0x310d:  movl   $0x4,(%esp)
08593b42 +0x3114:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08593b47 +0x3119:  mov    %eax,%ebx
08593b49 +0x311b:  mov    %ebx,%eax
08593b4b +0x311d:  mov    %eax,(%esp)
08593b4e +0x3120:  call   0859771a <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x26fa>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x26fa
08593b53 +0x3125:  mov    %ebx,%eax
08593b55 +0x3127:  mov    %eax,%edx
08593b57 +0x3129:  mov    0x8(%ebp),%eax
08593b5a +0x312c:  mov    %edx,0x644(%eax)
08593b60 +0x3132:  movl   $0x4,(%esp)
08593b67 +0x3139:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08593b6c +0x313e:  mov    %eax,%ebx
08593b6e +0x3140:  mov    %ebx,%eax
08593b70 +0x3142:  mov    %eax,(%esp)
08593b73 +0x3145:  call   08597736 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x2716>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x2716
08593b78 +0x314a:  mov    %ebx,%eax
08593b7a +0x314c:  mov    %eax,%edx
08593b7c +0x314e:  mov    0x8(%ebp),%eax
08593b7f +0x3151:  mov    %edx,0x510(%eax)
08593b85 +0x3157:  movl   $0x4,(%esp)
08593b8c +0x315e:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08593b91 +0x3163:  mov    %eax,%ebx
08593b93 +0x3165:  mov    %ebx,%eax
08593b95 +0x3167:  mov    %eax,(%esp)
08593b98 +0x316a:  call   085957cc <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x7ac>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x7ac
08593b9d +0x316f:  mov    %ebx,%eax
08593b9f +0x3171:  mov    %eax,%edx
08593ba1 +0x3173:  mov    0x8(%ebp),%eax
08593ba4 +0x3176:  mov    %edx,0x86c(%eax)
08593baa +0x317c:  movl   $0x4,(%esp)
08593bb1 +0x3183:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08593bb6 +0x3188:  mov    %eax,%ebx
08593bb8 +0x318a:  mov    %ebx,%eax
08593bba +0x318c:  mov    %eax,(%esp)
08593bbd +0x318f:  call   085957e8 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x7c8>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x7c8
08593bc2 +0x3194:  mov    %ebx,%eax
08593bc4 +0x3196:  mov    %eax,%edx
08593bc6 +0x3198:  mov    0x8(%ebp),%eax
08593bc9 +0x319b:  mov    %edx,0x870(%eax)
08593bcf +0x31a1:  movl   $0x4,(%esp)
08593bd6 +0x31a8:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08593bdb +0x31ad:  mov    %eax,%ebx
08593bdd +0x31af:  mov    %ebx,%eax
08593bdf +0x31b1:  mov    %eax,(%esp)
08593be2 +0x31b4:  call   08597752 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x2732>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x2732
08593be7 +0x31b9:  mov    %ebx,%eax
08593be9 +0x31bb:  mov    %eax,%edx
08593beb +0x31bd:  mov    0x8(%ebp),%eax
08593bee +0x31c0:  mov    %edx,0x63c(%eax)
08593bf4 +0x31c6:  movl   $0x4,(%esp)
08593bfb +0x31cd:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08593c00 +0x31d2:  mov    %eax,%ebx
08593c02 +0x31d4:  mov    %ebx,%eax
08593c04 +0x31d6:  mov    %eax,(%esp)
08593c07 +0x31d9:  call   0859776e <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x274e>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x274e
08593c0c +0x31de:  mov    %ebx,%eax
08593c0e +0x31e0:  mov    %eax,%edx
08593c10 +0x31e2:  mov    0x8(%ebp),%eax
08593c13 +0x31e5:  mov    %edx,0x640(%eax)
08593c19 +0x31eb:  movl   $0x4,(%esp)
08593c20 +0x31f2:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08593c25 +0x31f7:  mov    %eax,%ebx
08593c27 +0x31f9:  mov    %ebx,%eax
08593c29 +0x31fb:  mov    %eax,(%esp)
08593c2c +0x31fe:  call   0859778a <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x276a>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x276a
08593c31 +0x3203:  mov    %ebx,%eax
08593c33 +0x3205:  mov    %eax,%edx
08593c35 +0x3207:  mov    0x8(%ebp),%eax
08593c38 +0x320a:  mov    %edx,0x650(%eax)
08593c3e +0x3210:  movl   $0x4,(%esp)
08593c45 +0x3217:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08593c4a +0x321c:  mov    %eax,%ebx
08593c4c +0x321e:  mov    %ebx,%eax
08593c4e +0x3220:  mov    %eax,(%esp)
08593c51 +0x3223:  call   085977a6 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x2786>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x2786
08593c56 +0x3228:  mov    %ebx,%eax
08593c58 +0x322a:  mov    %eax,%edx
08593c5a +0x322c:  mov    0x8(%ebp),%eax
08593c5d +0x322f:  mov    %edx,0x654(%eax)
08593c63 +0x3235:  movl   $0x4,(%esp)
08593c6a +0x323c:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08593c6f +0x3241:  mov    %eax,%ebx
08593c71 +0x3243:  mov    %ebx,%eax
08593c73 +0x3245:  mov    %eax,(%esp)
08593c76 +0x3248:  call   085977c2 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x27a2>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x27a2
08593c7b +0x324d:  mov    %ebx,%eax
08593c7d +0x324f:  mov    %eax,%edx
08593c7f +0x3251:  mov    0x8(%ebp),%eax
08593c82 +0x3254:  mov    %edx,0x65c(%eax)
08593c88 +0x325a:  movl   $0x4,(%esp)
08593c8f +0x3261:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08593c94 +0x3266:  mov    %eax,%ebx
08593c96 +0x3268:  mov    %ebx,%eax
08593c98 +0x326a:  mov    %eax,(%esp)
08593c9b +0x326d:  call   085977de <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x27be>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x27be
08593ca0 +0x3272:  mov    %ebx,%eax
08593ca2 +0x3274:  mov    %eax,%edx
08593ca4 +0x3276:  mov    0x8(%ebp),%eax
08593ca7 +0x3279:  mov    %edx,0x658(%eax)
08593cad +0x327f:  movl   $0x4,(%esp)
08593cb4 +0x3286:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08593cb9 +0x328b:  mov    %eax,%ebx
08593cbb +0x328d:  mov    %ebx,%eax
08593cbd +0x328f:  mov    %eax,(%esp)
08593cc0 +0x3292:  call   085977fa <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x27da>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x27da
08593cc5 +0x3297:  mov    %ebx,%eax
08593cc7 +0x3299:  mov    %eax,%edx
08593cc9 +0x329b:  mov    0x8(%ebp),%eax
08593ccc +0x329e:  mov    %edx,0x660(%eax)
08593cd2 +0x32a4:  movl   $0x4,(%esp)
08593cd9 +0x32ab:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08593cde +0x32b0:  mov    %eax,%ebx
08593ce0 +0x32b2:  mov    %ebx,%eax
08593ce2 +0x32b4:  mov    %eax,(%esp)
08593ce5 +0x32b7:  call   08597816 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x27f6>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x27f6
08593cea +0x32bc:  mov    %ebx,%eax
08593cec +0x32be:  mov    %eax,%edx
08593cee +0x32c0:  mov    0x8(%ebp),%eax
08593cf1 +0x32c3:  mov    %edx,0x670(%eax)
08593cf7 +0x32c9:  movl   $0x4,(%esp)
08593cfe +0x32d0:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08593d03 +0x32d5:  mov    %eax,%ebx
08593d05 +0x32d7:  mov    %ebx,%eax
08593d07 +0x32d9:  mov    %eax,(%esp)
08593d0a +0x32dc:  call   08597832 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x2812>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x2812
08593d0f +0x32e1:  mov    %ebx,%eax
08593d11 +0x32e3:  mov    %eax,%edx
08593d13 +0x32e5:  mov    0x8(%ebp),%eax
08593d16 +0x32e8:  mov    %edx,0x674(%eax)
08593d1c +0x32ee:  movl   $0x4,(%esp)
08593d23 +0x32f5:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08593d28 +0x32fa:  mov    %eax,%ebx
08593d2a +0x32fc:  mov    %ebx,%eax
08593d2c +0x32fe:  mov    %eax,(%esp)
08593d2f +0x3301:  call   0859784e <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x282e>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x282e
08593d34 +0x3306:  mov    %ebx,%eax
08593d36 +0x3308:  mov    %eax,%edx
08593d38 +0x330a:  mov    0x8(%ebp),%eax
08593d3b +0x330d:  mov    %edx,0x6a0(%eax)
08593d41 +0x3313:  movl   $0x4,(%esp)
08593d48 +0x331a:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08593d4d +0x331f:  mov    %eax,%ebx
08593d4f +0x3321:  mov    %ebx,%eax
08593d51 +0x3323:  mov    %eax,(%esp)
08593d54 +0x3326:  call   0859786a <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x284a>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x284a
08593d59 +0x332b:  mov    %ebx,%eax
08593d5b +0x332d:  mov    %eax,%edx
08593d5d +0x332f:  mov    0x8(%ebp),%eax
08593d60 +0x3332:  mov    %edx,0x684(%eax)
08593d66 +0x3338:  movl   $0x4,(%esp)
08593d6d +0x333f:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08593d72 +0x3344:  mov    %eax,%ebx
08593d74 +0x3346:  mov    %ebx,%eax
08593d76 +0x3348:  mov    %eax,(%esp)
08593d79 +0x334b:  call   08597886 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x2866>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x2866
08593d7e +0x3350:  mov    %ebx,%eax
08593d80 +0x3352:  mov    %eax,%edx
08593d82 +0x3354:  mov    0x8(%ebp),%eax
08593d85 +0x3357:  mov    %edx,0x67c(%eax)
08593d8b +0x335d:  movl   $0x4,(%esp)
08593d92 +0x3364:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08593d97 +0x3369:  mov    %eax,%ebx
08593d99 +0x336b:  mov    %ebx,%eax
08593d9b +0x336d:  mov    %eax,(%esp)
08593d9e +0x3370:  call   085978a2 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x2882>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x2882
08593da3 +0x3375:  mov    %ebx,%eax
08593da5 +0x3377:  mov    %eax,%edx
08593da7 +0x3379:  mov    0x8(%ebp),%eax
08593daa +0x337c:  mov    %edx,0x6a4(%eax)
08593db0 +0x3382:  movl   $0x4,(%esp)
08593db7 +0x3389:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08593dbc +0x338e:  mov    %eax,%ebx
08593dbe +0x3390:  mov    %ebx,%eax
08593dc0 +0x3392:  mov    %eax,(%esp)
08593dc3 +0x3395:  call   085978be <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x289e>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x289e
08593dc8 +0x339a:  mov    %ebx,%eax
08593dca +0x339c:  mov    %eax,%edx
08593dcc +0x339e:  mov    0x8(%ebp),%eax
08593dcf +0x33a1:  mov    %edx,0x6a8(%eax)
08593dd5 +0x33a7:  movl   $0x4,(%esp)
08593ddc +0x33ae:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08593de1 +0x33b3:  mov    %eax,%ebx
08593de3 +0x33b5:  mov    %ebx,%eax
08593de5 +0x33b7:  mov    %eax,(%esp)
08593de8 +0x33ba:  call   085978da <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x28ba>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x28ba
08593ded +0x33bf:  mov    %ebx,%eax
08593def +0x33c1:  mov    %eax,%edx
08593df1 +0x33c3:  mov    0x8(%ebp),%eax
08593df4 +0x33c6:  mov    %edx,0x6bc(%eax)
08593dfa +0x33cc:  movl   $0x4,(%esp)
08593e01 +0x33d3:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08593e06 +0x33d8:  mov    %eax,%ebx
08593e08 +0x33da:  mov    %ebx,%eax
08593e0a +0x33dc:  mov    %eax,(%esp)
08593e0d +0x33df:  call   085978f6 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x28d6>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x28d6
08593e12 +0x33e4:  mov    %ebx,%eax
08593e14 +0x33e6:  mov    %eax,%edx
08593e16 +0x33e8:  mov    0x8(%ebp),%eax
08593e19 +0x33eb:  mov    %edx,0x6c0(%eax)
08593e1f +0x33f1:  movl   $0x4,(%esp)
08593e26 +0x33f8:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08593e2b +0x33fd:  mov    %eax,%ebx
08593e2d +0x33ff:  mov    %ebx,%eax
08593e2f +0x3401:  mov    %eax,(%esp)
08593e32 +0x3404:  call   08597912 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x28f2>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x28f2
08593e37 +0x3409:  mov    %ebx,%eax
08593e39 +0x340b:  mov    %eax,%edx
08593e3b +0x340d:  mov    0x8(%ebp),%eax
08593e3e +0x3410:  mov    %edx,0x6c4(%eax)
08593e44 +0x3416:  movl   $0x4,(%esp)
08593e4b +0x341d:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08593e50 +0x3422:  mov    %eax,%ebx
08593e52 +0x3424:  mov    %ebx,%eax
08593e54 +0x3426:  mov    %eax,(%esp)
08593e57 +0x3429:  call   0859792e <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x290e>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x290e
08593e5c +0x342e:  mov    %ebx,%eax
08593e5e +0x3430:  mov    %eax,%edx
08593e60 +0x3432:  mov    0x8(%ebp),%eax
08593e63 +0x3435:  mov    %edx,0x6d4(%eax)
08593e69 +0x343b:  movl   $0x4,(%esp)
08593e70 +0x3442:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08593e75 +0x3447:  mov    %eax,%ebx
08593e77 +0x3449:  mov    %ebx,%eax
08593e79 +0x344b:  mov    %eax,(%esp)
08593e7c +0x344e:  call   0859794a <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x292a>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x292a
08593e81 +0x3453:  mov    %ebx,%eax
08593e83 +0x3455:  mov    %eax,%edx
08593e85 +0x3457:  mov    0x8(%ebp),%eax
08593e88 +0x345a:  mov    %edx,0x6d8(%eax)
08593e8e +0x3460:  movl   $0x4,(%esp)
08593e95 +0x3467:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08593e9a +0x346c:  mov    %eax,%ebx
08593e9c +0x346e:  mov    %ebx,%eax
08593e9e +0x3470:  mov    %eax,(%esp)
08593ea1 +0x3473:  call   08597966 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x2946>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x2946
08593ea6 +0x3478:  mov    %ebx,%eax
08593ea8 +0x347a:  mov    %eax,%edx
08593eaa +0x347c:  mov    0x8(%ebp),%eax
08593ead +0x347f:  mov    %edx,0x720(%eax)
08593eb3 +0x3485:  movl   $0x4,(%esp)
08593eba +0x348c:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08593ebf +0x3491:  mov    %eax,%ebx
08593ec1 +0x3493:  mov    %ebx,%eax
08593ec3 +0x3495:  mov    %eax,(%esp)
08593ec6 +0x3498:  call   08597982 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x2962>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x2962
08593ecb +0x349d:  mov    %ebx,%eax
08593ecd +0x349f:  mov    %eax,%edx
08593ecf +0x34a1:  mov    0x8(%ebp),%eax
08593ed2 +0x34a4:  mov    %edx,0x6e0(%eax)
08593ed8 +0x34aa:  movl   $0x4,(%esp)
08593edf +0x34b1:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08593ee4 +0x34b6:  mov    %eax,%ebx
08593ee6 +0x34b8:  mov    %ebx,%eax
08593ee8 +0x34ba:  mov    %eax,(%esp)
08593eeb +0x34bd:  call   0859799e <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x297e>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x297e
08593ef0 +0x34c2:  mov    %ebx,%eax
08593ef2 +0x34c4:  mov    %eax,%edx
08593ef4 +0x34c6:  mov    0x8(%ebp),%eax
08593ef7 +0x34c9:  mov    %edx,0x6e4(%eax)
08593efd +0x34cf:  movl   $0x4,(%esp)
08593f04 +0x34d6:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08593f09 +0x34db:  mov    %eax,%ebx
08593f0b +0x34dd:  mov    %ebx,%eax
08593f0d +0x34df:  mov    %eax,(%esp)
08593f10 +0x34e2:  call   085979ba <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x299a>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x299a
08593f15 +0x34e7:  mov    %ebx,%eax
08593f17 +0x34e9:  mov    %eax,%edx
08593f19 +0x34eb:  mov    0x8(%ebp),%eax
08593f1c +0x34ee:  mov    %edx,0x6e8(%eax)
08593f22 +0x34f4:  movl   $0x4,(%esp)
08593f29 +0x34fb:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08593f2e +0x3500:  mov    %eax,%ebx
08593f30 +0x3502:  mov    %ebx,%eax
08593f32 +0x3504:  mov    %eax,(%esp)
08593f35 +0x3507:  call   085979d6 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x29b6>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x29b6
08593f3a +0x350c:  mov    %ebx,%eax
08593f3c +0x350e:  mov    %eax,%edx
08593f3e +0x3510:  mov    0x8(%ebp),%eax
08593f41 +0x3513:  mov    %edx,0x6ec(%eax)
08593f47 +0x3519:  movl   $0x4,(%esp)
08593f4e +0x3520:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08593f53 +0x3525:  mov    %eax,%ebx
08593f55 +0x3527:  mov    %ebx,%eax
08593f57 +0x3529:  mov    %eax,(%esp)
08593f5a +0x352c:  call   085979f2 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x29d2>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x29d2
08593f5f +0x3531:  mov    %ebx,%eax
08593f61 +0x3533:  mov    %eax,%edx
08593f63 +0x3535:  mov    0x8(%ebp),%eax
08593f66 +0x3538:  mov    %edx,0x6f0(%eax)
08593f6c +0x353e:  movl   $0x4,(%esp)
08593f73 +0x3545:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08593f78 +0x354a:  mov    %eax,%ebx
08593f7a +0x354c:  mov    %ebx,%eax
08593f7c +0x354e:  mov    %eax,(%esp)
08593f7f +0x3551:  call   08597a0e <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x29ee>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x29ee
08593f84 +0x3556:  mov    %ebx,%eax
08593f86 +0x3558:  mov    %eax,%edx
08593f88 +0x355a:  mov    0x8(%ebp),%eax
08593f8b +0x355d:  mov    %edx,0x6f4(%eax)
08593f91 +0x3563:  movl   $0x4,(%esp)
08593f98 +0x356a:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08593f9d +0x356f:  mov    %eax,%ebx
08593f9f +0x3571:  mov    %ebx,%eax
08593fa1 +0x3573:  mov    %eax,(%esp)
08593fa4 +0x3576:  call   08597a2a <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x2a0a>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x2a0a
08593fa9 +0x357b:  mov    %ebx,%eax
08593fab +0x357d:  mov    %eax,%edx
08593fad +0x357f:  mov    0x8(%ebp),%eax
08593fb0 +0x3582:  mov    %edx,0x6f8(%eax)
08593fb6 +0x3588:  movl   $0x4,(%esp)
08593fbd +0x358f:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08593fc2 +0x3594:  mov    %eax,%ebx
08593fc4 +0x3596:  mov    %ebx,%eax
08593fc6 +0x3598:  mov    %eax,(%esp)
08593fc9 +0x359b:  call   08597a46 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x2a26>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x2a26
08593fce +0x35a0:  mov    %ebx,%eax
08593fd0 +0x35a2:  mov    %eax,%edx
08593fd2 +0x35a4:  mov    0x8(%ebp),%eax
08593fd5 +0x35a7:  mov    %edx,0x704(%eax)
08593fdb +0x35ad:  movl   $0x4,(%esp)
08593fe2 +0x35b4:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08593fe7 +0x35b9:  mov    %eax,%ebx
08593fe9 +0x35bb:  mov    %ebx,%eax
08593feb +0x35bd:  mov    %eax,(%esp)
08593fee +0x35c0:  call   08597a62 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x2a42>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x2a42
08593ff3 +0x35c5:  mov    %ebx,%eax
08593ff5 +0x35c7:  mov    %eax,%edx
08593ff7 +0x35c9:  mov    0x8(%ebp),%eax
08593ffa +0x35cc:  mov    %edx,0x708(%eax)
08594000 +0x35d2:  movl   $0x4,(%esp)
08594007 +0x35d9:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0859400c +0x35de:  mov    %eax,%ebx
0859400e +0x35e0:  mov    %ebx,%eax
08594010 +0x35e2:  mov    %eax,(%esp)
08594013 +0x35e5:  call   08597a7e <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x2a5e>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x2a5e
08594018 +0x35ea:  mov    %ebx,%eax
0859401a +0x35ec:  mov    %eax,%edx
0859401c +0x35ee:  mov    0x8(%ebp),%eax
0859401f +0x35f1:  mov    %edx,0x6fc(%eax)
08594025 +0x35f7:  movl   $0x4,(%esp)
0859402c +0x35fe:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08594031 +0x3603:  mov    %eax,%ebx
08594033 +0x3605:  mov    %ebx,%eax
08594035 +0x3607:  mov    %eax,(%esp)
08594038 +0x360a:  call   08597a9a <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x2a7a>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x2a7a
0859403d +0x360f:  mov    %ebx,%eax
0859403f +0x3611:  mov    %eax,%edx
08594041 +0x3613:  mov    0x8(%ebp),%eax
08594044 +0x3616:  mov    %edx,0x70c(%eax)
0859404a +0x361c:  movl   $0x4,(%esp)
08594051 +0x3623:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08594056 +0x3628:  mov    %eax,%ebx
08594058 +0x362a:  mov    %ebx,%eax
0859405a +0x362c:  mov    %eax,(%esp)
0859405d +0x362f:  call   08597ab6 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x2a96>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x2a96
08594062 +0x3634:  mov    %ebx,%eax
08594064 +0x3636:  mov    %eax,%edx
08594066 +0x3638:  mov    0x8(%ebp),%eax
08594069 +0x363b:  mov    %edx,0x714(%eax)
0859406f +0x3641:  movl   $0x4,(%esp)
08594076 +0x3648:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0859407b +0x364d:  mov    %eax,%ebx
0859407d +0x364f:  mov    %ebx,%eax
0859407f +0x3651:  mov    %eax,(%esp)
08594082 +0x3654:  call   08597ad2 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x2ab2>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x2ab2
08594087 +0x3659:  mov    %ebx,%eax
08594089 +0x365b:  mov    %eax,%edx
0859408b +0x365d:  mov    0x8(%ebp),%eax
0859408e +0x3660:  mov    %edx,0x718(%eax)
08594094 +0x3666:  movl   $0x4,(%esp)
0859409b +0x366d:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085940a0 +0x3672:  mov    %eax,%ebx
085940a2 +0x3674:  mov    %ebx,%eax
085940a4 +0x3676:  mov    %eax,(%esp)
085940a7 +0x3679:  call   08597aee <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x2ace>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x2ace
085940ac +0x367e:  mov    %ebx,%eax
085940ae +0x3680:  mov    %eax,%edx
085940b0 +0x3682:  mov    0x8(%ebp),%eax
085940b3 +0x3685:  mov    %edx,0x724(%eax)
085940b9 +0x368b:  movl   $0x4,(%esp)
085940c0 +0x3692:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085940c5 +0x3697:  mov    %eax,%ebx
085940c7 +0x3699:  mov    %ebx,%eax
085940c9 +0x369b:  mov    %eax,(%esp)
085940cc +0x369e:  call   08597b0a <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x2aea>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x2aea
085940d1 +0x36a3:  mov    %ebx,%eax
085940d3 +0x36a5:  mov    %eax,%edx
085940d5 +0x36a7:  mov    0x8(%ebp),%eax
085940d8 +0x36aa:  mov    %edx,0x728(%eax)
085940de +0x36b0:  movl   $0x4,(%esp)
085940e5 +0x36b7:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085940ea +0x36bc:  mov    %eax,%ebx
085940ec +0x36be:  mov    %ebx,%eax
085940ee +0x36c0:  mov    %eax,(%esp)
085940f1 +0x36c3:  call   08597b26 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x2b06>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x2b06
085940f6 +0x36c8:  mov    %ebx,%eax
085940f8 +0x36ca:  mov    %eax,%edx
085940fa +0x36cc:  mov    0x8(%ebp),%eax
085940fd +0x36cf:  mov    %edx,0x72c(%eax)
08594103 +0x36d5:  movl   $0x4,(%esp)
0859410a +0x36dc:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0859410f +0x36e1:  mov    %eax,%ebx
08594111 +0x36e3:  mov    %ebx,%eax
08594113 +0x36e5:  mov    %eax,(%esp)
08594116 +0x36e8:  call   08597b42 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x2b22>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x2b22
0859411b +0x36ed:  mov    %ebx,%eax
0859411d +0x36ef:  mov    %eax,%edx
0859411f +0x36f1:  mov    0x8(%ebp),%eax
08594122 +0x36f4:  mov    %edx,0x744(%eax)
08594128 +0x36fa:  movl   $0x4,(%esp)
0859412f +0x3701:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08594134 +0x3706:  mov    %eax,%ebx
08594136 +0x3708:  mov    %ebx,%eax
08594138 +0x370a:  mov    %eax,(%esp)
0859413b +0x370d:  call   08597b5e <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x2b3e>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x2b3e
08594140 +0x3712:  mov    %ebx,%eax
08594142 +0x3714:  mov    %eax,%edx
08594144 +0x3716:  mov    0x8(%ebp),%eax
08594147 +0x3719:  mov    %edx,0x754(%eax)
0859414d +0x371f:  movl   $0x4,(%esp)
08594154 +0x3726:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08594159 +0x372b:  mov    %eax,%ebx
0859415b +0x372d:  mov    %ebx,%eax
0859415d +0x372f:  mov    %eax,(%esp)
08594160 +0x3732:  call   08597b7a <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x2b5a>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x2b5a
08594165 +0x3737:  mov    %ebx,%eax
08594167 +0x3739:  mov    %eax,%edx
08594169 +0x373b:  mov    0x8(%ebp),%eax
0859416c +0x373e:  mov    %edx,0x758(%eax)
08594172 +0x3744:  movl   $0x4,(%esp)
08594179 +0x374b:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0859417e +0x3750:  mov    %eax,%ebx
08594180 +0x3752:  mov    %ebx,%eax
08594182 +0x3754:  mov    %eax,(%esp)
08594185 +0x3757:  call   08597b96 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x2b76>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x2b76
0859418a +0x375c:  mov    %ebx,%eax
0859418c +0x375e:  mov    %eax,%edx
0859418e +0x3760:  mov    0x8(%ebp),%eax
08594191 +0x3763:  mov    %edx,0x75c(%eax)
08594197 +0x3769:  movl   $0x4,(%esp)
0859419e +0x3770:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085941a3 +0x3775:  mov    %eax,%ebx
085941a5 +0x3777:  mov    %ebx,%eax
085941a7 +0x3779:  mov    %eax,(%esp)
085941aa +0x377c:  call   08597bb2 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x2b92>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x2b92
085941af +0x3781:  mov    %ebx,%eax
085941b1 +0x3783:  mov    %eax,%edx
085941b3 +0x3785:  mov    0x8(%ebp),%eax
085941b6 +0x3788:  mov    %edx,0x764(%eax)
085941bc +0x378e:  movl   $0x4,(%esp)
085941c3 +0x3795:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085941c8 +0x379a:  mov    %eax,%ebx
085941ca +0x379c:  mov    %ebx,%eax
085941cc +0x379e:  mov    %eax,(%esp)
085941cf +0x37a1:  call   085956d0 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x6b0>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x6b0
085941d4 +0x37a6:  mov    %ebx,%eax
085941d6 +0x37a8:  mov    %eax,%edx
085941d8 +0x37aa:  mov    0x8(%ebp),%eax
085941db +0x37ad:  mov    %edx,0x8f0(%eax)
085941e1 +0x37b3:  movl   $0x4,(%esp)
085941e8 +0x37ba:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085941ed +0x37bf:  mov    %eax,%ebx
085941ef +0x37c1:  mov    %ebx,%eax
085941f1 +0x37c3:  mov    %eax,(%esp)
085941f4 +0x37c6:  call   085956ec <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x6cc>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x6cc
085941f9 +0x37cb:  mov    %ebx,%eax
085941fb +0x37cd:  mov    %eax,%edx
085941fd +0x37cf:  mov    0x8(%ebp),%eax
08594200 +0x37d2:  mov    %edx,0x8f4(%eax)
08594206 +0x37d8:  movl   $0x4,(%esp)
0859420d +0x37df:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08594212 +0x37e4:  mov    %eax,%ebx
08594214 +0x37e6:  mov    %ebx,%eax
08594216 +0x37e8:  mov    %eax,(%esp)
08594219 +0x37eb:  call   08595708 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x6e8>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x6e8
0859421e +0x37f0:  mov    %ebx,%eax
08594220 +0x37f2:  mov    %eax,%edx
08594222 +0x37f4:  mov    0x8(%ebp),%eax
08594225 +0x37f7:  mov    %edx,0x8f8(%eax)
0859422b +0x37fd:  movl   $0x4,(%esp)
08594232 +0x3804:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08594237 +0x3809:  mov    %eax,%ebx
08594239 +0x380b:  mov    %ebx,%eax
0859423b +0x380d:  mov    %eax,(%esp)
0859423e +0x3810:  call   08595724 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x704>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x704
08594243 +0x3815:  mov    %ebx,%eax
08594245 +0x3817:  mov    %eax,%edx
08594247 +0x3819:  mov    0x8(%ebp),%eax
0859424a +0x381c:  mov    %edx,0x8fc(%eax)
08594250 +0x3822:  movl   $0x4,(%esp)
08594257 +0x3829:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0859425c +0x382e:  mov    %eax,%ebx
0859425e +0x3830:  mov    %ebx,%eax
08594260 +0x3832:  mov    %eax,(%esp)
08594263 +0x3835:  call   08595740 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x720>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x720
08594268 +0x383a:  mov    %ebx,%eax
0859426a +0x383c:  mov    %eax,%edx
0859426c +0x383e:  mov    0x8(%ebp),%eax
0859426f +0x3841:  mov    %edx,0x900(%eax)
08594275 +0x3847:  movl   $0x4,(%esp)
0859427c +0x384e:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08594281 +0x3853:  mov    %eax,%ebx
08594283 +0x3855:  mov    %ebx,%eax
08594285 +0x3857:  mov    %eax,(%esp)
08594288 +0x385a:  call   0859575c <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x73c>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x73c
0859428d +0x385f:  mov    %ebx,%eax
0859428f +0x3861:  mov    %eax,%edx
08594291 +0x3863:  mov    0x8(%ebp),%eax
08594294 +0x3866:  mov    %edx,0x904(%eax)
0859429a +0x386c:  movl   $0x4,(%esp)
085942a1 +0x3873:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085942a6 +0x3878:  mov    %eax,%ebx
085942a8 +0x387a:  mov    %ebx,%eax
085942aa +0x387c:  mov    %eax,(%esp)
085942ad +0x387f:  call   08595778 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x758>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x758
085942b2 +0x3884:  mov    %ebx,%eax
085942b4 +0x3886:  mov    %eax,%edx
085942b6 +0x3888:  mov    0x8(%ebp),%eax
085942b9 +0x388b:  mov    %edx,0x908(%eax)
085942bf +0x3891:  movl   $0x4,(%esp)
085942c6 +0x3898:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085942cb +0x389d:  mov    %eax,%ebx
085942cd +0x389f:  mov    %ebx,%eax
085942cf +0x38a1:  mov    %eax,(%esp)
085942d2 +0x38a4:  call   08595794 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x774>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x774
085942d7 +0x38a9:  mov    %ebx,%eax
085942d9 +0x38ab:  mov    %eax,%edx
085942db +0x38ad:  mov    0x8(%ebp),%eax
085942de +0x38b0:  mov    %edx,0x90c(%eax)
085942e4 +0x38b6:  movl   $0x4,(%esp)
085942eb +0x38bd:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085942f0 +0x38c2:  mov    %eax,%ebx
085942f2 +0x38c4:  mov    %ebx,%eax
085942f4 +0x38c6:  mov    %eax,(%esp)
085942f7 +0x38c9:  call   085957b0 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x790>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x790
085942fc +0x38ce:  mov    %ebx,%eax
085942fe +0x38d0:  mov    %eax,%edx
08594300 +0x38d2:  mov    0x8(%ebp),%eax
08594303 +0x38d5:  mov    %edx,0x910(%eax)
08594309 +0x38db:  movl   $0x4,(%esp)
08594310 +0x38e2:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08594315 +0x38e7:  mov    %eax,%ebx
08594317 +0x38e9:  mov    %ebx,%eax
08594319 +0x38eb:  mov    %eax,(%esp)
0859431c +0x38ee:  call   08597bce <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x2bae>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x2bae
08594321 +0x38f3:  mov    %ebx,%eax
08594323 +0x38f5:  mov    %eax,%edx
08594325 +0x38f7:  mov    0x8(%ebp),%eax
08594328 +0x38fa:  mov    %edx,0x924(%eax)
0859432e +0x3900:  movl   $0x4,(%esp)
08594335 +0x3907:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0859433a +0x390c:  mov    %eax,%ebx
0859433c +0x390e:  mov    %ebx,%eax
0859433e +0x3910:  mov    %eax,(%esp)
08594341 +0x3913:  call   08597bea <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x2bca>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x2bca
08594346 +0x3918:  mov    %ebx,%eax
08594348 +0x391a:  mov    %eax,%edx
0859434a +0x391c:  mov    0x8(%ebp),%eax
0859434d +0x391f:  mov    %edx,0x928(%eax)
08594353 +0x3925:  movl   $0x4,(%esp)
0859435a +0x392c:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0859435f +0x3931:  mov    %eax,%ebx
08594361 +0x3933:  mov    %ebx,%eax
08594363 +0x3935:  mov    %eax,(%esp)
08594366 +0x3938:  call   08597c06 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x2be6>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x2be6
0859436b +0x393d:  mov    %ebx,%eax
0859436d +0x393f:  mov    %eax,%edx
0859436f +0x3941:  mov    0x8(%ebp),%eax
08594372 +0x3944:  mov    %edx,0x92c(%eax)
08594378 +0x394a:  movl   $0x4,(%esp)
0859437f +0x3951:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08594384 +0x3956:  mov    %eax,%ebx
08594386 +0x3958:  mov    %ebx,%eax
08594388 +0x395a:  mov    %eax,(%esp)
0859438b +0x395d:  call   08597c22 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x2c02>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x2c02
08594390 +0x3962:  mov    %ebx,%eax
08594392 +0x3964:  mov    %eax,%edx
08594394 +0x3966:  mov    0x8(%ebp),%eax
08594397 +0x3969:  mov    %edx,0x930(%eax)
0859439d +0x396f:  movl   $0x4,(%esp)
085943a4 +0x3976:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085943a9 +0x397b:  mov    %eax,%ebx
085943ab +0x397d:  mov    %ebx,%eax
085943ad +0x397f:  mov    %eax,(%esp)
085943b0 +0x3982:  call   08597c3e <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x2c1e>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x2c1e
085943b5 +0x3987:  mov    %ebx,%eax
085943b7 +0x3989:  mov    %eax,%edx
085943b9 +0x398b:  mov    0x8(%ebp),%eax
085943bc +0x398e:  mov    %edx,0x934(%eax)
085943c2 +0x3994:  movl   $0x4,(%esp)
085943c9 +0x399b:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085943ce +0x39a0:  mov    %eax,%ebx
085943d0 +0x39a2:  mov    %ebx,%eax
085943d2 +0x39a4:  mov    %eax,(%esp)
085943d5 +0x39a7:  call   08597c5a <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x2c3a>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x2c3a
085943da +0x39ac:  mov    %ebx,%eax
085943dc +0x39ae:  mov    %eax,%edx
085943de +0x39b0:  mov    0x8(%ebp),%eax
085943e1 +0x39b3:  mov    %edx,0x93c(%eax)
085943e7 +0x39b9:  movl   $0x4,(%esp)
085943ee +0x39c0:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085943f3 +0x39c5:  mov    %eax,%ebx
085943f5 +0x39c7:  mov    %ebx,%eax
085943f7 +0x39c9:  mov    %eax,(%esp)
085943fa +0x39cc:  call   08597c76 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x2c56>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x2c56
085943ff +0x39d1:  mov    %ebx,%eax
08594401 +0x39d3:  mov    %eax,%edx
08594403 +0x39d5:  mov    0x8(%ebp),%eax
08594406 +0x39d8:  mov    %edx,0x938(%eax)
0859440c +0x39de:  movl   $0x4,(%esp)
08594413 +0x39e5:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08594418 +0x39ea:  mov    %eax,%ebx
0859441a +0x39ec:  mov    %ebx,%eax
0859441c +0x39ee:  mov    %eax,(%esp)
0859441f +0x39f1:  call   08597c92 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x2c72>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x2c72
08594424 +0x39f6:  mov    %ebx,%eax
08594426 +0x39f8:  mov    %eax,%edx
08594428 +0x39fa:  mov    0x8(%ebp),%eax
0859442b +0x39fd:  mov    %edx,0x770(%eax)
08594431 +0x3a03:  movl   $0x4,(%esp)
08594438 +0x3a0a:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0859443d +0x3a0f:  mov    %eax,%ebx
0859443f +0x3a11:  mov    %ebx,%eax
08594441 +0x3a13:  mov    %eax,(%esp)
08594444 +0x3a16:  call   08597cae <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x2c8e>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x2c8e
08594449 +0x3a1b:  mov    %ebx,%eax
0859444b +0x3a1d:  mov    %eax,%edx
0859444d +0x3a1f:  mov    0x8(%ebp),%eax
08594450 +0x3a22:  mov    %edx,0x774(%eax)
08594456 +0x3a28:  movl   $0x4,(%esp)
0859445d +0x3a2f:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08594462 +0x3a34:  mov    %eax,%ebx
08594464 +0x3a36:  mov    %ebx,%eax
08594466 +0x3a38:  mov    %eax,(%esp)
08594469 +0x3a3b:  call   08597cca <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x2caa>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x2caa
0859446e +0x3a40:  mov    %ebx,%eax
08594470 +0x3a42:  mov    %eax,%edx
08594472 +0x3a44:  mov    0x8(%ebp),%eax
08594475 +0x3a47:  mov    %edx,0x77c(%eax)
0859447b +0x3a4d:  movl   $0x4,(%esp)
08594482 +0x3a54:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08594487 +0x3a59:  mov    %eax,%ebx
08594489 +0x3a5b:  mov    %ebx,%eax
0859448b +0x3a5d:  mov    %eax,(%esp)
0859448e +0x3a60:  call   08597ce6 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x2cc6>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x2cc6
08594493 +0x3a65:  mov    %ebx,%eax
08594495 +0x3a67:  mov    %eax,%edx
08594497 +0x3a69:  mov    0x8(%ebp),%eax
0859449a +0x3a6c:  mov    %edx,0x778(%eax)
085944a0 +0x3a72:  movl   $0x4,(%esp)
085944a7 +0x3a79:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085944ac +0x3a7e:  mov    %eax,%ebx
085944ae +0x3a80:  mov    %ebx,%eax
085944b0 +0x3a82:  mov    %eax,(%esp)
085944b3 +0x3a85:  call   08597d02 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x2ce2>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x2ce2
085944b8 +0x3a8a:  mov    %ebx,%eax
085944ba +0x3a8c:  mov    %eax,%edx
085944bc +0x3a8e:  mov    0x8(%ebp),%eax
085944bf +0x3a91:  mov    %edx,0x7e0(%eax)
085944c5 +0x3a97:  movl   $0x4,(%esp)
085944cc +0x3a9e:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085944d1 +0x3aa3:  mov    %eax,%ebx
085944d3 +0x3aa5:  mov    %ebx,%eax
085944d5 +0x3aa7:  mov    %eax,(%esp)
085944d8 +0x3aaa:  call   08597d1e <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x2cfe>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x2cfe
085944dd +0x3aaf:  mov    %ebx,%eax
085944df +0x3ab1:  mov    %eax,%edx
085944e1 +0x3ab3:  mov    0x8(%ebp),%eax
085944e4 +0x3ab6:  mov    %edx,0x780(%eax)
085944ea +0x3abc:  movl   $0x4,(%esp)
085944f1 +0x3ac3:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085944f6 +0x3ac8:  mov    %eax,%ebx
085944f8 +0x3aca:  mov    %ebx,%eax
085944fa +0x3acc:  mov    %eax,(%esp)
085944fd +0x3acf:  call   08597d3a <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x2d1a>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x2d1a
08594502 +0x3ad4:  mov    %ebx,%eax
08594504 +0x3ad6:  mov    %eax,%edx
08594506 +0x3ad8:  mov    0x8(%ebp),%eax
08594509 +0x3adb:  mov    %edx,0x78c(%eax)
0859450f +0x3ae1:  movl   $0x4,(%esp)
08594516 +0x3ae8:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0859451b +0x3aed:  mov    %eax,%ebx
0859451d +0x3aef:  mov    %ebx,%eax
0859451f +0x3af1:  mov    %eax,(%esp)
08594522 +0x3af4:  call   08597d56 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x2d36>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x2d36
08594527 +0x3af9:  mov    %ebx,%eax
08594529 +0x3afb:  mov    %eax,%edx
0859452b +0x3afd:  mov    0x8(%ebp),%eax
0859452e +0x3b00:  mov    %edx,0x790(%eax)
08594534 +0x3b06:  movl   $0x4,(%esp)
0859453b +0x3b0d:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08594540 +0x3b12:  mov    %eax,%ebx
08594542 +0x3b14:  mov    %ebx,%eax
08594544 +0x3b16:  mov    %eax,(%esp)
08594547 +0x3b19:  call   08597d72 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x2d52>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x2d52
0859454c +0x3b1e:  mov    %ebx,%eax
0859454e +0x3b20:  mov    %eax,%edx
08594550 +0x3b22:  mov    0x8(%ebp),%eax
08594553 +0x3b25:  mov    %edx,0x7b4(%eax)
08594559 +0x3b2b:  movl   $0x4,(%esp)
08594560 +0x3b32:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08594565 +0x3b37:  mov    %eax,%ebx
08594567 +0x3b39:  mov    %ebx,%eax
08594569 +0x3b3b:  mov    %eax,(%esp)
0859456c +0x3b3e:  call   08597d8e <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x2d6e>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x2d6e
08594571 +0x3b43:  mov    %ebx,%eax
08594573 +0x3b45:  mov    %eax,%edx
08594575 +0x3b47:  mov    0x8(%ebp),%eax
08594578 +0x3b4a:  mov    %edx,0x7b8(%eax)
0859457e +0x3b50:  movl   $0x4,(%esp)
08594585 +0x3b57:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0859458a +0x3b5c:  mov    %eax,%ebx
0859458c +0x3b5e:  mov    %ebx,%eax
0859458e +0x3b60:  mov    %eax,(%esp)
08594591 +0x3b63:  call   08597daa <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x2d8a>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x2d8a
08594596 +0x3b68:  mov    %ebx,%eax
08594598 +0x3b6a:  mov    %eax,%edx
0859459a +0x3b6c:  mov    0x8(%ebp),%eax
0859459d +0x3b6f:  mov    %edx,0x7bc(%eax)
085945a3 +0x3b75:  movl   $0x4,(%esp)
085945aa +0x3b7c:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085945af +0x3b81:  mov    %eax,%ebx
085945b1 +0x3b83:  mov    %ebx,%eax
085945b3 +0x3b85:  mov    %eax,(%esp)
085945b6 +0x3b88:  call   08597dc6 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x2da6>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x2da6
085945bb +0x3b8d:  mov    %ebx,%eax
085945bd +0x3b8f:  mov    %eax,%edx
085945bf +0x3b91:  mov    0x8(%ebp),%eax
085945c2 +0x3b94:  mov    %edx,0x7c0(%eax)
085945c8 +0x3b9a:  movl   $0x4,(%esp)
085945cf +0x3ba1:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085945d4 +0x3ba6:  mov    %eax,%ebx
085945d6 +0x3ba8:  mov    %ebx,%eax
085945d8 +0x3baa:  mov    %eax,(%esp)
085945db +0x3bad:  call   08597de2 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x2dc2>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x2dc2
085945e0 +0x3bb2:  mov    %ebx,%eax
085945e2 +0x3bb4:  mov    %eax,%edx
085945e4 +0x3bb6:  mov    0x8(%ebp),%eax
085945e7 +0x3bb9:  mov    %edx,0x7f0(%eax)
085945ed +0x3bbf:  movl   $0x4,(%esp)
085945f4 +0x3bc6:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085945f9 +0x3bcb:  mov    %eax,%ebx
085945fb +0x3bcd:  mov    %ebx,%eax
085945fd +0x3bcf:  mov    %eax,(%esp)
08594600 +0x3bd2:  call   08597dfe <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x2dde>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x2dde
08594605 +0x3bd7:  mov    %ebx,%eax
08594607 +0x3bd9:  mov    %eax,%edx
08594609 +0x3bdb:  mov    0x8(%ebp),%eax
0859460c +0x3bde:  mov    %edx,0x7cc(%eax)
08594612 +0x3be4:  movl   $0x4,(%esp)
08594619 +0x3beb:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0859461e +0x3bf0:  mov    %eax,%ebx
08594620 +0x3bf2:  mov    %ebx,%eax
08594622 +0x3bf4:  mov    %eax,(%esp)
08594625 +0x3bf7:  call   08597e1a <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x2dfa>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x2dfa
0859462a +0x3bfc:  mov    %ebx,%eax
0859462c +0x3bfe:  mov    %eax,%edx
0859462e +0x3c00:  mov    0x8(%ebp),%eax
08594631 +0x3c03:  mov    %edx,0x7e4(%eax)
08594637 +0x3c09:  movl   $0x4,(%esp)
0859463e +0x3c10:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08594643 +0x3c15:  mov    %eax,%ebx
08594645 +0x3c17:  mov    %ebx,%eax
08594647 +0x3c19:  mov    %eax,(%esp)
0859464a +0x3c1c:  call   08597e36 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x2e16>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x2e16
0859464f +0x3c21:  mov    %ebx,%eax
08594651 +0x3c23:  mov    %eax,%edx
08594653 +0x3c25:  mov    0x8(%ebp),%eax
08594656 +0x3c28:  mov    %edx,0x7e8(%eax)
0859465c +0x3c2e:  movl   $0x4,(%esp)
08594663 +0x3c35:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08594668 +0x3c3a:  mov    %eax,%ebx
0859466a +0x3c3c:  mov    %ebx,%eax
0859466c +0x3c3e:  mov    %eax,(%esp)
0859466f +0x3c41:  call   08597e52 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x2e32>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x2e32
08594674 +0x3c46:  mov    %ebx,%eax
08594676 +0x3c48:  mov    %eax,%edx
08594678 +0x3c4a:  mov    0x8(%ebp),%eax
0859467b +0x3c4d:  mov    %edx,0x7f4(%eax)
08594681 +0x3c53:  movl   $0x4,(%esp)
08594688 +0x3c5a:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0859468d +0x3c5f:  mov    %eax,%ebx
0859468f +0x3c61:  mov    %ebx,%eax
08594691 +0x3c63:  mov    %eax,(%esp)
08594694 +0x3c66:  call   08597e6e <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x2e4e>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x2e4e
08594699 +0x3c6b:  mov    %ebx,%eax
0859469b +0x3c6d:  mov    %eax,%edx
0859469d +0x3c6f:  mov    0x8(%ebp),%eax
085946a0 +0x3c72:  mov    %edx,0x7fc(%eax)
085946a6 +0x3c78:  movl   $0x4,(%esp)
085946ad +0x3c7f:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085946b2 +0x3c84:  mov    %eax,%ebx
085946b4 +0x3c86:  mov    %ebx,%eax
085946b6 +0x3c88:  mov    %eax,(%esp)
085946b9 +0x3c8b:  call   08597e8a <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x2e6a>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x2e6a
085946be +0x3c90:  mov    %ebx,%eax
085946c0 +0x3c92:  mov    %eax,%edx
085946c2 +0x3c94:  mov    0x8(%ebp),%eax
085946c5 +0x3c97:  mov    %edx,0x7f8(%eax)
085946cb +0x3c9d:  movl   $0x4,(%esp)
085946d2 +0x3ca4:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085946d7 +0x3ca9:  mov    %eax,%ebx
085946d9 +0x3cab:  mov    %ebx,%eax
085946db +0x3cad:  mov    %eax,(%esp)
085946de +0x3cb0:  call   08597ea6 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x2e86>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x2e86
085946e3 +0x3cb5:  mov    %ebx,%eax
085946e5 +0x3cb7:  mov    %eax,%edx
085946e7 +0x3cb9:  mov    0x8(%ebp),%eax
085946ea +0x3cbc:  mov    %edx,0x81c(%eax)
085946f0 +0x3cc2:  movl   $0x4,(%esp)
085946f7 +0x3cc9:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085946fc +0x3cce:  mov    %eax,%ebx
085946fe +0x3cd0:  mov    %ebx,%eax
08594700 +0x3cd2:  mov    %eax,(%esp)
08594703 +0x3cd5:  call   08597ec2 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x2ea2>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x2ea2
08594708 +0x3cda:  mov    %ebx,%eax
0859470a +0x3cdc:  mov    %eax,%edx
0859470c +0x3cde:  mov    0x8(%ebp),%eax
0859470f +0x3ce1:  mov    %edx,0x800(%eax)
08594715 +0x3ce7:  movl   $0x4,(%esp)
0859471c +0x3cee:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08594721 +0x3cf3:  mov    %eax,%ebx
08594723 +0x3cf5:  mov    %ebx,%eax
08594725 +0x3cf7:  mov    %eax,(%esp)
08594728 +0x3cfa:  call   08597ede <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x2ebe>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x2ebe
0859472d +0x3cff:  mov    %ebx,%eax
0859472f +0x3d01:  mov    %eax,%edx
08594731 +0x3d03:  mov    0x8(%ebp),%eax
08594734 +0x3d06:  mov    %edx,0x804(%eax)
0859473a +0x3d0c:  movl   $0x4,(%esp)
08594741 +0x3d13:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08594746 +0x3d18:  mov    %eax,%ebx
08594748 +0x3d1a:  mov    %ebx,%eax
0859474a +0x3d1c:  mov    %eax,(%esp)
0859474d +0x3d1f:  call   08597efa <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x2eda>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x2eda
08594752 +0x3d24:  mov    %ebx,%eax
08594754 +0x3d26:  mov    %eax,%edx
08594756 +0x3d28:  mov    0x8(%ebp),%eax
08594759 +0x3d2b:  mov    %edx,0x838(%eax)
0859475f +0x3d31:  movl   $0x4,(%esp)
08594766 +0x3d38:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0859476b +0x3d3d:  mov    %eax,%ebx
0859476d +0x3d3f:  mov    %ebx,%eax
0859476f +0x3d41:  mov    %eax,(%esp)
08594772 +0x3d44:  call   08597f16 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x2ef6>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x2ef6
08594777 +0x3d49:  mov    %ebx,%eax
08594779 +0x3d4b:  mov    %eax,%edx
0859477b +0x3d4d:  mov    0x8(%ebp),%eax
0859477e +0x3d50:  mov    %edx,0x954(%eax)
08594784 +0x3d56:  movl   $0x4,(%esp)
0859478b +0x3d5d:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08594790 +0x3d62:  mov    %eax,%ebx
08594792 +0x3d64:  mov    %ebx,%eax
08594794 +0x3d66:  mov    %eax,(%esp)
08594797 +0x3d69:  call   08597f32 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x2f12>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x2f12
0859479c +0x3d6e:  mov    %ebx,%eax
0859479e +0x3d70:  mov    %eax,%edx
085947a0 +0x3d72:  mov    0x8(%ebp),%eax
085947a3 +0x3d75:  mov    %edx,0x95c(%eax)
085947a9 +0x3d7b:  movl   $0x4,(%esp)
085947b0 +0x3d82:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085947b5 +0x3d87:  mov    %eax,%ebx
085947b7 +0x3d89:  mov    %ebx,%eax
085947b9 +0x3d8b:  mov    %eax,(%esp)
085947bc +0x3d8e:  call   08597f4e <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x2f2e>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x2f2e
085947c1 +0x3d93:  mov    %ebx,%eax
085947c3 +0x3d95:  mov    %eax,%edx
085947c5 +0x3d97:  mov    0x8(%ebp),%eax
085947c8 +0x3d9a:  mov    %edx,0x960(%eax)
085947ce +0x3da0:  movl   $0x4,(%esp)
085947d5 +0x3da7:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085947da +0x3dac:  mov    %eax,%ebx
085947dc +0x3dae:  mov    %ebx,%eax
085947de +0x3db0:  mov    %eax,(%esp)
085947e1 +0x3db3:  call   08597f6a <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x2f4a>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x2f4a
085947e6 +0x3db8:  mov    %ebx,%eax
085947e8 +0x3dba:  mov    %eax,%edx
085947ea +0x3dbc:  mov    0x8(%ebp),%eax
085947ed +0x3dbf:  mov    %edx,0x964(%eax)
085947f3 +0x3dc5:  movl   $0x4,(%esp)
085947fa +0x3dcc:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085947ff +0x3dd1:  mov    %eax,%ebx
08594801 +0x3dd3:  mov    %ebx,%eax
08594803 +0x3dd5:  mov    %eax,(%esp)
08594806 +0x3dd8:  call   08597f86 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x2f66>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x2f66
0859480b +0x3ddd:  mov    %ebx,%eax
0859480d +0x3ddf:  mov    %eax,%edx
0859480f +0x3de1:  mov    0x8(%ebp),%eax
08594812 +0x3de4:  mov    %edx,0x968(%eax)
08594818 +0x3dea:  add    $0x2c,%esp
0859481b +0x3ded:  pop    %ebx
0859481c +0x3dee:  pop    %esi
0859481d +0x3def:  pop    %edi
0859481e +0x3df0:  pop    %ebp
0859481f +0x3df1:  ret
08594820 +0x3df2:  mov    %edx,%ebx
08594822 +0x3df4:  mov    %eax,%esi
08594824 +0x3df6:  mov    0x8(%ebp),%eax
08594827 +0x3df9:  add    $0x978,%eax
0859482c +0x3dfe:  mov    %eax,(%esp)
0859482f +0x3e01:  call   08595094 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x74>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x74
08594834 +0x3e06:  mov    %esi,%eax
08594836 +0x3e08:  mov    %ebx,%edx
08594838 +0x3e0a:  mov    %eax,(%esp)
0859483b +0x3e0d:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// PacketDispatcher::PacketDispatcher @ 0x8590a2e

/* PacketDispatcher::PacketDispatcher() */

void __thiscall PacketDispatcher::PacketDispatcher(PacketDispatcher *this)

{
  Dispatcher_SaveQuestNotify *this_00;
  Dispatcher_UseRightOfChangeGrowType *this_01;
  Dispatcher_StackableActionUse *this_02;
  Dispatcher_BingoReward *this_03;
  Dispatcher_BingoQuiz *this_04;
  Dispatcher_SkillInit *this_05;
  Dispatcher_LogIngameAdvertisement *this_06;
  Dispatcher_RequestIngameAdvertisement *this_07;
  Dispatcher_RequestCharacSkillInfo *this_08;
  Dispatcher_SelectStriker *this_09;
  Dispatcher_AvatarOptionChange *this_10;
  Dispatcher_PartyTeleportConfirm *this_11;
  Dispatcher_PartyTeleport *this_12;
  Dispatcher_FatigueAttendance *this_13;
  Dispatcher_RefundSkill *this_14;
  Dispatcher_ExpertExtraction *this_15;
  Dispatcher_MonstercardBind *this_16;
  DisPatcher_CheckConn *this_17;
  DisPatcher_Login *this_18;
  DisPatcher_SetIP *this_19;
  DisPatcher_Exit *this_20;
  DisPatcher_SelectCharac *this_21;
  DisPatcher_CreateCharac *this_22;
  DisPatcher_DeleteCharac *this_23;
  DisPatcher_ReturnToSelectCharacter *this_24;
  DisPatcher_GetUserInfo *this_25;
  DisPatcher_RecoverStamina *this_26;
  DisPatcher_ReqPeer *this_27;
  DisPatcher_ResPeer *this_28;
  DisPatcher_SetPartyInfo *this_29;
  DisPatcher_LeaveParty *this_30;
  DisPatcher_WalkoutParty *this_31;
  DisPatcher_StartGame *this_32;
  DisPatcher_SelectDungeon *this_33;
  DisPatcher_SendMess *this_34;
  DisPatcher_DeleteItem *this_35;
  DisPatcher_MoveItem *this_36;
  DisPatcher_SortItem *this_37;
  DisPatcher_BuyItem *this_38;
  DisPatcher_RentAvatar *this_39;
  DisPatcher_ExtendAvatar *this_40;
  DisPatcher_SellItem *this_41;
  DisPatcher_RepairEquip *this_42;
  DisPatcher_SetTradeState *this_43;
  DisPatcher_Compound *this_44;
  DisPatcher_DisJointItem *this_45;
  DisPatcher_Lottery *this_46;
  DisPatcher_ChangeSkill *this_47;
  DisPatcher_BuySkill *this_48;
  DisPatcher_IncreStatus *this_49;
  DisPatcher_QuestAction *pDVar1;
  DisPatcher_SetPos *this_50;
  DisPatcher_SetArea *this_51;
  DisPatcher_Fish *this_52;
  DisPatcher_FinishLoad *this_53;
  DisPatcher_UseSkill *this_54;
  DisPatcher_DieMob *this_55;
  DisPatcher_DieCharacInDungeon *this_56;
  DisPatcher_UseCoin *this_57;
  DisPatcher_GiveUpGame *this_58;
  DisPatcher_GetItem *this_59;
  DisPatcher_UseStack *this_60;
  DisPatcher_MoveMap *this_61;
  DisPatcher_SetPlayResult *this_62;
  DisPatcher_DropItem *this_63;
  DisPatcher_UseEquip *this_64;
  Dispatcher_ReportBadP2PUser *this_65;
  DisPatcher_MakePVP *this_66;
  DisPatcher_EnterPVP *this_67;
  DisPatcher_SetPVPSeat *this_68;
  DisPatcher_SetPVPReady *this_69;
  DisPatcher_SetPVPTeam *this_70;
  DisPatcher_DiePvP *this_71;
  DisPatcher_PvPTimeout *this_72;
  DisPatcher_EndPvPResult *this_73;
  DisPatcher_ResPvpRank *this_74;
  DisPatcher_SetPVPMapIndex *this_75;
  DisPatcher_DebugCommand *this_76;
  DisPatcher_AddFriend *this_77;
  DisPatcher_RemoveFriend *this_78;
  DisPatcher_Cera *this_79;
  Dispatcher_BuyCeraShopItem *this_80;
  Dispatcher_GenCeraTicket *this_81;
  Dispatcher_Request_PvpExpOfWeek *this_82;
  Dispatcher_EPLPCommand *this_83;
  Dispatcher_Score_Scroll_State *this_84;
  Dispatcher_Card_Select_Right_State *this_85;
  Dispatcher_Select_Card *this_86;
  Dispatcher_CallGuildMembers *this_87;
  Dispatcher_CallGuildCreateRight *this_88;
  Dispatcher_CallGuildLevelUp *this_89;
  Dispatcher_CallGuildInfo *this_90;
  Dispatcher_RequestMemberEnter *this_91;
  Dispatcher_MemberEnterReply *this_92;
  Dispatcher_MemberSecede *this_93;
  Dispatcher_CallMemberList *this_94;
  Dispatcher_UpgradeItem *this_95;
  Dispatcher_UpgradeItemSeparate *this_96;
  Dispatcher_ModItemAttr *this_97;
  DisPatcher_EnterWarRoom *this_98;
  DisPatcher_SetWarRoomSeatState *this_99;
  DisPatcher_DieWarRoomCharacter *this_x00100;
  DisPatcher_StartWarRoomTemp *this_x00101;
  Dispatcher_BuyPrivateStoreItem *this_x00102;
  Dispatcher_EnterPrivateStore *this_x00103;
  Dispatcher_ExitPrivateStore *this_x00104;
  Dispatcher_CreatePrivateStore *this_x00105;
  Dispatcher_RemovePrivateStore *this_x00106;
  Dispatcher_CompleteDisplay *this_x00107;
  Dispatcher_MoveToGate *this_x00108;
  Dispatcher_PeerConnectResult *this_x00109;
  Dispatcher_QuickJoinRoom *this_x00110;
  Dispatcher_MailBox_Open *this_x00111;
  Dispatcher_MailBox_Send *this_x00112;
  Dispatcher_MailBox_Extract *this_x00113;
  Dispatcher_Compound_Avatar *this_x00114;
  Dispatcher_RenameCreature *this_x00115;
  Dispatcher_ResponseCreature *this_x00116;
  Dispatcher_HatchCreature *this_x00117;
  Dispatcher_GatheringPartyStatus *this_x00118;
  Dispatcher_GM_Command *this_x00119;
  DisPatcher_ReportClient4Hack *this_x00120;
  DisPatcher_RequestGuildWarInfo *this_x00121;
  DisPatcher_PvpHeartBeat *this_x00122;
  Dispatcher_CodeCheckSum *this_x00123;
  Dispatcher_PVPRequestFight *this_x00124;
  Dispatcher_CreatureSendMessage *this_x00125;
  Dispatcher_TraceError *this_x00126;
  Dispatcher_MouseRegister *this_x00127;
  Dispatcher_BossDieCheck *this_x00128;
  Dispatcher_RegisterToBlackList *this_x00129;
  Dispatcher_DeleteToBlackList *this_x00130;
  Dispatcher_RequestBlackList *this_x00131;
  Dispatcher_ChangeHost *this_x00132;
  Dispatcher_CreatureScriptMessage *this_x00133;
  Dispatcher_CharacterStatistic *this_x00134;
  Dispatcher_SetSubGuildMaster *this_x00135;
  Dispatcher_Back2Village *this_x00136;
  Dispatcher_BuyAutomatItem *this_x00137;
  Dispatcher_ChangeLetterStat *this_x00138;
  Dispatcher_ChangeCharacName *this_x00139;
  Dispatcher_QueryCharacInfo *this_x00140;
  Dispatcher_ReportMannerlessUser *this_x00141;
  Dispatcher_DieMobAll *this_x00142;
  Dispatcher_CallGuildAllMembers *this_x00143;
  Dispatcher_HumanCertify *this_x00144;
  Dispatcher_ChangeTutorialFlag *this_x00145;
  Dispatcher_CompleteLoadAssault *this_x00146;
  Dispatcher_ConnectP2PAssault *this_x00147;
  Dispatcher_DieAssaultPlayer *this_x00148;
  Dispatcher_ChangeHp *this_x00149;
  Dispatcher_CompleteLoadAfterAssault *this_x00150;
  Dispatcher_ConnectP2PAfterAssault *this_x00151;
  Dispatcher_BVHackInfo *this_x00152;
  Dispatcher_CallGuildInvite *this_x00153;
  Dispatcher_ReplyGuildInvite *this_x00154;
  Dispatcher_RequestGuildSecede *this_x00155;
  Dispatcher_NotifyMessageToGuild *this_x00156;
  Dispatcher_GuildMasterDelegate *this_x00157;
  Dispatcher_CheckGuildNameDouble *this_x00158;
  Dispatcher_CheckGuildAddressDouble *this_x00159;
  Dispatcher_OpenGuildCreateWindow *this_x00160;
  Dispatcher_DeathTowerStageCommand *this_x00161;
  Dispatcher_UseBoosterItem *this_x00162;
  Dispatcher_SecurityCardIssue *this_x00163;
  Dispatcher_SecurityCardDisuse *this_x00164;
  Dispatcher_SecurityCardAuthReq *this_x00165;
  Dispatcher_SecurityCardAuthRpy *this_x00166;
  Dispatcher_SecurityCardCertKey *this_x00167;
  Dispatcher_SecurityCardAuthCancel *this_x00168;
  Dispatcher_SecurityCardRetransfer *this_x00169;
  Dispatcher_CallPartyMemberRealtimeInfo *this_x00170;
  Dispatcher_EvadeAssault *this_x00171;
  Dispatcher_AgreeEnchant *this_x00172;
  Dispatcher_TryEnchant *this_x00173;
  Dispatcher_PutItemForEnchant *this_x00174;
  Dispatcher_Client_Spec_Statistic *this_x00175;
  Dispatcher_Antibot_DPCallBack *this_x00176;
  Dispatcher_Antibot_DP *this_x00177;
  Dispatcher_Antibot *this_x00178;
  Dispatcher_Join_Power *this_x00179;
  Dispatcher_Secede_Power *this_x00180;
  Dispatcher_New_Gmdebug_Command *this_x00181;
  Dispatcher_SDC_Damage_Check *this_x00182;
  Dispatcher_SDC_ActiveStatus_Damage_Check *this_x00183;
  Dispatcher_ChangeGuildName *this_x00184;
  Dispatcher_AuctionAskAveragePrice *this_x00185;
  Dispatcher_AuctionRegistItem *this_x00186;
  Dispatcher_AuctionRegistCancel *this_x00187;
  Dispatcher_AuctionBidding *this_x00188;
  Dispatcher_AuctionSearchByItemKey *this_x00189;
  Dispatcher_AuctionSearchByNoItmeKey *this_x00190;
  Dispatcher_AuctionMyRegistedItemInfo *this_x00191;
  Dispatcher_AuctionMyBiddingInfo *this_x00192;
  Dispatcher_AuctionMyAuctionHistory *this_x00193;
  Dispatcher_DungeonEventStoryPause *this_x00194;
  Dispatcher_JoinPowerWar *this_x00195;
  Dispatcher_SaveGameOption_1 *this_x00196;
  Dispatcher_SaveGameOption_2 *this_x00197;
  Dispatcher_SaveCharacterOption *this_x00198;
  Dispatcher_FrameLagStatistics *this_x00199;
  Dispatcher_GoblinPadStatus *this_x00200;
  Dispatcher_PvPChannelInfo *this_x00201;
  Dispatcher_RequestMatch *this_x00202;
  Dispatcher_UseJewel *this_x00203;
  Dispatcher_DisJointAvatar *this_x00204;
  Dispatcher_PurifyItem *this_x00205;
  Dispatcher_InvestItemAmplifyOption *this_x00206;
  Dispatcher_AddSocketToAvatar *this_x00207;
  Dispatcher_Shop_Coin_Event *this_x00208;
  DisPatcher_MultiBoxLottery *this_x00209;
  DisPatcher_UdpCharacteristic *this_x00210;
  DIspatcher_OneDayLetheTicket *this_x00211;
  Dispatcher_DisguiseRequest *this_x00212;
  Dispatcher_DisguiseCancel *this_x00213;
  Dispatcher_UseVendingMachine *this_x00214;
  Dispatcher_UseCraneStart *this_x00215;
  Dispatcher_CranePickUp *this_x00216;
  Dispatcher_RequestPCRoomPlayerList *this_x00217;
  Dispatcher_RequestPCRoomPlayerCount *this_x00218;
  Dispatcher_UpdateServerMessage *this_x00219;
  Dispatcher_CheckEnableServerMessage *this_x00220;
  Dispatcher_AssertManager *this_x00221;
  Dispatcher_GiveGiftToNPC *this_x00222;
  Dispatcher_Overflow_Info *this_x00223;
  Dispatcher_GoblinPadRequestCryptKey *this_x00224;
  Dispatcher_WriteGuildMemberMemo *this_x00225;
  Dispatcher_HellPartyStart *this_x00226;
  Dispatcher_PowerWarProcessInfo *this_x00227;
  Dispatcher_CreateDisjointStore *this_x00228;
  Dispatcher_RequestDisjointItem *this_x00229;
  Dispatcher_RepairDisjointMachine *this_x00230;
  Dispatcher_Teleport *this_x00231;
  Dispatcher_CompoundItemByExpertJob *this_x00232;
  Dispatcher_GiveupExpertJob *this_x00233;
  Dispatcher_UpgradeDisjointMachine *this_x00234;
  Dispatcher_EnterDisjointStore *this_x00235;
  Dispatcher_CloseDisjointStore *this_x00236;
  Dispatcher_ReportAbuseUser *this_x00237;
  Dispatcher_GuildCargo *this_x00238;
  Dispatcher_GuildCargoHistory *this_x00239;
  Dispatcher_GuildCargoPushItem *this_x00240;
  Dispatcher_GuildCargoPopItem *this_x00241;
  Dispatcher_GuildCargoMoveItem *this_x00242;
  Dispatcher_LoadingTimeReport *this_x00243;
  Dispatcher_UseSharedEffectItem *this_x00244;
  Dispatcher_BuyCeraShopLimitItem *this_x00245;
  Dispatcher_SecuDataControl *this_x00246;
  Dispatcher_ChangeEmotion *this_x00247;
  Dispatcher_DieBloodMonster *this_x00248;
  Dispatcher_CompoundEmblem *this_x00249;
  Dispatcher_CheckAssaultMotionHack *this_x00250;
  Dispatcher_BloodRoundUiPrepareFinish *this_x00251;
  Dispatcher_RequestConditionEventReward *this_x00252;
  Dispatcher_ChangeAnotherSkillTree *this_x00253;
  Dispatcher_FightVillageMonster *this_x00254;
  Dispatcher_FinishVillageMonsterFighting *this_x00255;
  Dispatcher_UpgradeGuildCargo *this_x00256;
  Dispatcher_RequestItemLock *this_x00257;
  Dispatcher_RequestItemUnlock *this_x00258;
  Dispatcher_RequestItemUnlockCancel *this_x00259;
  Dispatcher_UpgradeChronicle *this_x00260;
  Dispatcher_EnchantByBead *this_x00261;
  Dispatcher_DungeonNPCBuffInfo *this_x00262;
  Dispatcher_VerifyGold *this_x00263;
  Dispatcher_Security_ProcessScan *this_x00264;
  Dispatcher_Security_IPScan *this_x00265;
  Dispatcher_Lag_Statistics *this_x00266;
  Dispatcher_Security_PacketIntegrity *this_x00267;
  Dispatcher_RequestOnTimeEventReward *this_x00268;
  Dispatcher_RequestAddPvPBuddy *this_x00269;
  Dispatcher_ResponseAddPvPBuddy *this_x00270;
  Dispatcher_RemovePvPBuddy *this_x00271;
  Dispatcher_PvPBuddyConnList *this_x00272;
  Dispatcher_Security_NonClient_GetResponse *this_x00273;
  Dispatcher_Security_MemoryIntegrity *this_x00274;
  Dispatcher_Compound_Equipment_Upgrade_Card *this_x00275;
  Dispatcher_Change_Charac_Slot *this_x00276;
  Dispatcher_SecurityLog *this_x00277;
  Dispatcher_SecretShopBuyItem *this_x00278;
  Dispatcher_SecretShopOpenClose *this_x00279;
  Dispatcher_CompleteLoadPvP *this_x00280;
  Dispatcher_ConnectP2PPvP *this_x00281;
  Dispatcher_BiddingRoutingItem *this_x00282;
  Dispatcher_CreateAccountCargo *this_x00283;
  Dispatcher_UpgradeAccountCargo *this_x00284;
  Dispatcher_DepositMoney *this_x00285;
  Dispatcher_WithdrawMoney *this_x00286;
  Dispatcher_Skill_Command_Customizing *this_x00287;
  Dispatcher_Skill_Command_All_Default *this_x00288;
  Dispatcher_Open_Guild_Board *this_x00289;
  Dispatcher_Write_On_The_GuildBoard *this_x00290;
  Dispatcher_Delete_GuildBoard_Text *this_x00291;
  Dispatcher_Break_Away_Quest_Check *this_x00292;
  Dispatcher_Compound_ExtreamItem *this_x00293;
  Dispatcher_RedeemList *this_x00294;
  Dispatcher_Redeem *this_x00295;
  Dispatcher_MultiMailBoxSend *this_x00296;
  Dispatcher_QueryCharacInfoMailbox *this_x00297;
  Dispatcher_OperateRidableObject *this_x00298;
  Dispatcher_SelectUltimateDifficulty *this_x00299;
  Dispatcher_AuctionBuyItemApiece *this_x00300;
  Dispatcher_Security_PI_HashModulation_S2C *this_x00301;
  Dispatcher_Security_PI_HashModulation_C2C *this_x00302;
  Dispatcer_polic_one_to_one_chat_disable *this_x00303;
  Dispatcher_police_queryCharacName_useMid *this_x00304;
  Dispatcher_ValidateScriptHash *this_x00305;
  Dispatcher_Change_PartyMemberPosition *this_x00306;
  Dispatcher_ScanBotByDll *this_x00307;
  Dispatcher_UseLimitCube *this_x00308;
  Dispatcher_RefreshGuildInfo *this_x00309;
  Dispatcher_DonateGuildFund *this_x00310;
  Dispatcher_CheckJoinGuild *this_x00311;
  Dispatcher_RequestJoinGuild *this_x00312;
  Dispatcher_CancelJoinGuild *this_x00313;
  Dispatcher_ApproveJoinGuild *this_x00314;
  Dispatcher_DenyJoinGuild *this_x00315;
  Dispatcher_GuildJoinList *this_x00316;
  Dispatcher_GuildAttendanceInfo *this_x00317;
  Dispatcher_MotionHack *this_x00318;
  Dispatcher_ClearAction *this_x00319;
  Dispatcher_GetTodayReward *this_x00320;
  Dispatcher_JoinGuildInfo *this_x00321;
  Dispatcher_ScanBotByDrv *this_x00322;
  Dispatcher_AskRematch *this_x00323;
  Dispatcher_SaveGameOption_QuickChatting *this_x00324;
  Dispatcher_Select_3rdChronicleItem_ForEnchant *this_x00325;
  Dispatcher_Enchant_3rdChronicleItem *this_x00326;
  Dispatcher_GoldTakeIncreasingAmount *this_x00327;
  DisPatcher_CheckSecurityProtection *this_x00328;
  Dispatcher_FairPvPScore *this_x00329;
  Dispatcher_PvpMissionHPPercent *this_x00330;
  Dispatcher_PvpMissionComboClear *this_x00331;
  Dispatcher_WarRoomWpPerMonster *this_x00332;
  Dispatcher_Equipslot_Switch *this_x00333;
  Dispatcher_Expand_Equipslot_Flag_Update *this_x00334;
  Dispatcher_UnsealRandomOption *this_x00335;
  Dispatcher_UseCreatureEvolutionItem *this_x00336;
  DisPatcher_EventDungeon_DestoryObject *this_x00337;
  DisPatcher_EventDungeon_ClearRoom *this_x00338;
  Dispatcher_Buy_Charac_Status_Using_QP *this_x00339;
  Dispatcher_Clear_Used_QP *this_x00340;
  Dispatcher_ChangeHostWarRoom *this_x00341;
  Dispatcher_VerifyPrivateStoreItem *this_x00342;
  Dispather_RegenerationRandomOption *this_x00343;
  Dispatcher_SelectItem *this_x00344;
  Dispatcher_UpgradeCargo *this_x00345;
  Dispatcher_TitleBookPut *this_x00346;
  Dispatcher_TitleBookGet *this_x00347;
  Dispatcher_TitleBookOtherUser *this_x00348;
  Dispatcher_AchievementTrigger *this_x00349;
  Dispatcher_CharacSlotExtendEffect *this_x00350;
  Dispatcher_ItemHyperLinkMessage *this_x00351;
  Dispatcher_UserHistoryLog *this_x00352;
  Dispatcher_UpgradeInventory *this_x00353;
  Dispatcher_Select_Item_Grwoth_Power *this_x00354;
  Dispatcher_Request_Seria_Buff *this_x00355;
  Dispatcher_AbnormalUseStackable *this_x00356;
  Dispatcher_ChangeRandomOption *this_x00357;
  DispatcherResetRandomOption *this_x00358;
  Dispatcher_ItemDictionary *this_x00359;
  Dispatcher_Mercenary_Return *this_x00360;
  Dispatcher_Mercenary_Info *this_x00361;
  Dispatcher_Mercenary_Competition *this_x00362;
  Dispatcher_Register_Quick_Party *this_x00363;
  Dispatcher_Cancel_Quick_Party *this_x00364;
  Dispatcher_Direct_Entrance_Quick_Party *this_x00365;
  Dispatcher_Exchange_Random_Item_Reward *this_x00366;
  Dispatcher_Avatar_Disjoint_Random_Reward *this_x00367;
  Dispatcher_RequestAssaultPrice *this_x00368;
  Dispatcher_Check3rdPartyConcent *this_x00369;
  Dispatcher_Float_RDATA_Modulation *this_x00370;
  Dispatcher_Req_Urgent_Quest *this_x00371;
  Dispatcher_Debug_Clear_Quest *this_x00372;
  Dispatcher_TournamentRewardSelectState *this_x00373;
  Dispatcher_TournamentRewardSelect *this_x00374;
  Dispatcher_LimitNpcBuyItem *this_x00375;
  Dispatcher_ObjectBringUp *this_x00376;
  Dispatcher_PrecheckSoloTeleport *this_x00377;
  Dispatcher_SoloTeleport *this_x00378;
  Dispatcher_SaveGameOption_ChattingEmoticon *this_x00379;
  Dispatcher_StartGame *this_x00380;
  Dispatcher_BuyItem *this_x00381;
  Dispatcher_SetSlot *this_x00382;
  Dispatcher_UpgradeGage *this_x00383;
  Dispatcher_SummonUnit *this_x00384;
  Dispatcher_ExchangeSlot *this_x00385;
  Dispatcher_Pause *this_x00386;
  Dispatcher_GetAchievementReward *this_x00387;
  Dispatcher_ResetStar *this_x00388;
  Dispatcher_AradJumpingCharacter *this_x00389;
  Dispatcher_AvartarRoulette *this_x00390;
  Dispatcher_AvartarCoinCount *this_x00391;
  Dispatcher_AvartarHiddenOptionChange *this_x00392;
  Dispatcher_AradUseAvatarRecharge *this_x00393;
  Dispatcher_AradAvatarConvert *this_x00394;
  Dispatcher_AradEmblemCompound *this_x00395;
  Dispatcher_ImageCommunicationEquipmentUse *this_x00396;
  Dispatcher_CompatibilityIndex *this_x00397;
  Dispatcher_P2P_Statistics *this_x00398;
  Dispatcher_InformNotice *this_x00399;
  Dispatcher_InformNotice_2nd *this_x00400;
  Dispatcher_VerifyCreatureQuest *this_x00401;
  Dispatcher_CollectItems *this_x00402;
  Dispatcher_TutorialLevelUp *this_x00403;
  Dispatcher_PcRoomPlayTimeReward *this_x00404;
  Dispatcher_PcRoomRentItem *this_x00405;
  Dispatcher_SeriaRoom_Deco_Event *this_x00406;
  Dispatcher_BlueMarble *this_x00407;
  Dispatcher_BlueMarbleConfirmInfo *this_x00408;
  Dispatcher_UseDye *this_x00409;
  Dispatcher_GrowthWeaponEventChangeInfinity *this_x00410;
  Dispatcher_GrowthWeaponEventUseMaterial *this_x00411;
  Dispatcher_ComboSkill *this_x00412;
  Dispatcher_ComboSkillExtensionQuickSlotReset *this_x00413;
  Dispatcher_UseRenameCard *this_x00414;
  Dispatcher_CeraPackageOpen *this_x00415;
  Dispatcher_GrowthCreatureChangeInfinityCreature *this_x00416;
  Dispatcher_SeriaRoom_Ani_Deco_Event *this_x00417;
  Dispatcher_UpdateContractOfCubeInfo *this_x00418;
  Dispatcher_LevelupSupportReqestItem *this_x00419;
  Dispatcher_P2PHolePunchingSuccessRateStatistics *this_x00420;
  Dispatcher_EventCreateDnfRequest *this_x00421;
  Dispatcher_RequestPrcoomDayilyReward *this_x00422;
  Dispatcher_HeroMissionEventState_Reward *this_x00423;
  int local_20;
  
  CLocalChinaErrorDispatcher::CLocalChinaErrorDispatcher
            ((CLocalChinaErrorDispatcher *)(this + 0x978));
  for (local_20 = 0; local_20 < 0x25e; local_20 = local_20 + 1) {
    *(undefined4 *)(this + local_20 * 4) = 0;
  }
                    /* try { // try from 08590a76 to 08590cca has its CatchHandler @ 08594820 */
  this_00 = operator_new(4);
  Dispatcher_SaveQuestNotify::Dispatcher_SaveQuestNotify(this_00);
  *(Dispatcher_SaveQuestNotify **)(this + 0x7ec) = this_00;
  this_01 = operator_new(4);
  Dispatcher_UseRightOfChangeGrowType::Dispatcher_UseRightOfChangeGrowType(this_01);
  *(Dispatcher_UseRightOfChangeGrowType **)(this + 0x7dc) = this_01;
  this_02 = operator_new(4);
  Dispatcher_StackableActionUse::Dispatcher_StackableActionUse(this_02);
  *(Dispatcher_StackableActionUse **)(this + 0x810) = this_02;
  this_03 = operator_new(4);
  Dispatcher_BingoReward::Dispatcher_BingoReward(this_03);
  *(Dispatcher_BingoReward **)(this + 0x808) = this_03;
  this_04 = operator_new(4);
  Dispatcher_BingoQuiz::Dispatcher_BingoQuiz(this_04);
  *(Dispatcher_BingoQuiz **)(this + 0x80c) = this_04;
  this_05 = operator_new(4);
  Dispatcher_SkillInit::Dispatcher_SkillInit(this_05);
  *(Dispatcher_SkillInit **)(this + 0x7b0) = this_05;
  this_06 = operator_new(4);
  Dispatcher_LogIngameAdvertisement::Dispatcher_LogIngameAdvertisement(this_06);
  *(Dispatcher_LogIngameAdvertisement **)(this + 0x7a8) = this_06;
  this_07 = operator_new(4);
  Dispatcher_RequestIngameAdvertisement::Dispatcher_RequestIngameAdvertisement(this_07);
  *(Dispatcher_RequestIngameAdvertisement **)(this + 0x7a4) = this_07;
  this_08 = operator_new(4);
  Dispatcher_RequestCharacSkillInfo::Dispatcher_RequestCharacSkillInfo(this_08);
  *(Dispatcher_RequestCharacSkillInfo **)(this + 0x794) = this_08;
  this_09 = operator_new(4);
  Dispatcher_SelectStriker::Dispatcher_SelectStriker(this_09);
  *(Dispatcher_SelectStriker **)(this + 0x7a0) = this_09;
  this_10 = operator_new(4);
  Dispatcher_AvatarOptionChange::Dispatcher_AvatarOptionChange(this_10);
  *(Dispatcher_AvatarOptionChange **)(this + 0x730) = this_10;
  this_11 = operator_new(4);
  Dispatcher_PartyTeleportConfirm::Dispatcher_PartyTeleportConfirm(this_11);
  *(Dispatcher_PartyTeleportConfirm **)(this + 0x6d0) = this_11;
  this_12 = operator_new(4);
  Dispatcher_PartyTeleport::Dispatcher_PartyTeleport(this_12);
  *(Dispatcher_PartyTeleport **)(this + 0x6cc) = this_12;
  this_13 = operator_new(4);
  Dispatcher_FatigueAttendance::Dispatcher_FatigueAttendance(this_13);
  *(Dispatcher_FatigueAttendance **)(this + 0x6b4) = this_13;
  this_14 = operator_new(4);
  Dispatcher_RefundSkill::Dispatcher_RefundSkill(this_14);
  *(Dispatcher_RefundSkill **)(this + 0x6ac) = this_14;
  this_15 = operator_new(4);
  Dispatcher_ExpertExtraction::Dispatcher_ExpertExtraction(this_15);
  *(Dispatcher_ExpertExtraction **)(this + 0x680) = this_15;
  this_16 = operator_new(8);
                    /* try { // try from 08590cd2 to 08590cd6 has its CatchHandler @ 08590cd9 */
  Dispatcher_MonstercardBind::Dispatcher_MonstercardBind(this_16);
  *(Dispatcher_MonstercardBind **)(this + 0x678) = this_16;
                    /* try { // try from 08590d02 to 085929b2 has its CatchHandler @ 08594820 */
  this_17 = operator_new(4);
  DisPatcher_CheckConn::DisPatcher_CheckConn(this_17);
  *(DisPatcher_CheckConn **)this = this_17;
  this_18 = operator_new(8);
  DisPatcher_Login::DisPatcher_Login(this_18);
  *(DisPatcher_Login **)(this + 4) = this_18;
  this_19 = operator_new(4);
  DisPatcher_SetIP::DisPatcher_SetIP(this_19);
  *(DisPatcher_SetIP **)(this + 8) = this_19;
  this_20 = operator_new(4);
  DisPatcher_Exit::DisPatcher_Exit(this_20);
  *(DisPatcher_Exit **)(this + 0xc) = this_20;
  this_21 = operator_new(4);
  DisPatcher_SelectCharac::DisPatcher_SelectCharac(this_21);
  *(DisPatcher_SelectCharac **)(this + 0x10) = this_21;
  this_22 = operator_new(4);
  DisPatcher_CreateCharac::DisPatcher_CreateCharac(this_22);
  *(DisPatcher_CreateCharac **)(this + 0x14) = this_22;
  this_23 = operator_new(4);
  DisPatcher_DeleteCharac::DisPatcher_DeleteCharac(this_23);
  *(DisPatcher_DeleteCharac **)(this + 0x18) = this_23;
  this_24 = operator_new(8);
  DisPatcher_ReturnToSelectCharacter::DisPatcher_ReturnToSelectCharacter(this_24);
  *(DisPatcher_ReturnToSelectCharacter **)(this + 0x1c) = this_24;
  this_25 = operator_new(4);
  DisPatcher_GetUserInfo::DisPatcher_GetUserInfo(this_25);
  *(DisPatcher_GetUserInfo **)(this + 0x20) = this_25;
  this_26 = operator_new(4);
  DisPatcher_RecoverStamina::DisPatcher_RecoverStamina(this_26);
  *(DisPatcher_RecoverStamina **)(this + 0x24) = this_26;
  this_27 = operator_new(4);
  DisPatcher_ReqPeer::DisPatcher_ReqPeer(this_27);
  *(DisPatcher_ReqPeer **)(this + 0x28) = this_27;
  this_28 = operator_new(4);
  DisPatcher_ResPeer::DisPatcher_ResPeer(this_28);
  *(DisPatcher_ResPeer **)(this + 0x2c) = this_28;
  this_29 = operator_new(4);
  DisPatcher_SetPartyInfo::DisPatcher_SetPartyInfo(this_29);
  *(DisPatcher_SetPartyInfo **)(this + 0x30) = this_29;
  this_30 = operator_new(4);
  DisPatcher_LeaveParty::DisPatcher_LeaveParty(this_30);
  *(DisPatcher_LeaveParty **)(this + 0x34) = this_30;
  this_31 = operator_new(4);
  DisPatcher_WalkoutParty::DisPatcher_WalkoutParty(this_31);
  *(DisPatcher_WalkoutParty **)(this + 0x38) = this_31;
  this_32 = operator_new(4);
  DisPatcher_StartGame::DisPatcher_StartGame(this_32);
  *(DisPatcher_StartGame **)(this + 0x3c) = this_32;
  this_33 = operator_new(4);
  DisPatcher_SelectDungeon::DisPatcher_SelectDungeon(this_33);
  *(DisPatcher_SelectDungeon **)(this + 0x40) = this_33;
  this_34 = operator_new(4);
  DisPatcher_SendMess::DisPatcher_SendMess(this_34);
  *(DisPatcher_SendMess **)(this + 0x44) = this_34;
  this_35 = operator_new(4);
  DisPatcher_DeleteItem::DisPatcher_DeleteItem(this_35);
  *(DisPatcher_DeleteItem **)(this + 0x48) = this_35;
  this_36 = operator_new(4);
  DisPatcher_MoveItem::DisPatcher_MoveItem(this_36);
  *(DisPatcher_MoveItem **)(this + 0x4c) = this_36;
  this_37 = operator_new(4);
  DisPatcher_SortItem::DisPatcher_SortItem(this_37);
  *(DisPatcher_SortItem **)(this + 0x50) = this_37;
  this_38 = operator_new(4);
  DisPatcher_BuyItem::DisPatcher_BuyItem(this_38);
  *(DisPatcher_BuyItem **)(this + 0x54) = this_38;
  this_39 = operator_new(4);
  DisPatcher_RentAvatar::DisPatcher_RentAvatar(this_39);
  *(DisPatcher_RentAvatar **)(this + 0x58) = this_39;
  this_40 = operator_new(4);
  DisPatcher_ExtendAvatar::DisPatcher_ExtendAvatar(this_40);
  *(DisPatcher_ExtendAvatar **)(this + 0x5c) = this_40;
  this_41 = operator_new(4);
  DisPatcher_SellItem::DisPatcher_SellItem(this_41);
  *(DisPatcher_SellItem **)(this + 0x60) = this_41;
  this_42 = operator_new(4);
  DisPatcher_RepairEquip::DisPatcher_RepairEquip(this_42);
  *(DisPatcher_RepairEquip **)(this + 100) = this_42;
  this_43 = operator_new(4);
  DisPatcher_SetTradeState::DisPatcher_SetTradeState(this_43);
  *(DisPatcher_SetTradeState **)(this + 0x68) = this_43;
  this_44 = operator_new(4);
  DisPatcher_Compound::DisPatcher_Compound(this_44);
  *(DisPatcher_Compound **)(this + 0x6c) = this_44;
  this_45 = operator_new(4);
  DisPatcher_DisJointItem::DisPatcher_DisJointItem(this_45);
  *(DisPatcher_DisJointItem **)(this + 0x70) = this_45;
  this_46 = operator_new(4);
  DisPatcher_Lottery::DisPatcher_Lottery(this_46);
  *(DisPatcher_Lottery **)(this + 0x74) = this_46;
  this_47 = operator_new(4);
  DisPatcher_ChangeSkill::DisPatcher_ChangeSkill(this_47);
  *(DisPatcher_ChangeSkill **)(this + 0x78) = this_47;
  this_48 = operator_new(4);
  DisPatcher_BuySkill::DisPatcher_BuySkill(this_48);
  *(DisPatcher_BuySkill **)(this + 0x7c) = this_48;
  this_49 = operator_new(4);
  DisPatcher_IncreStatus::DisPatcher_IncreStatus(this_49);
  *(DisPatcher_IncreStatus **)(this + 0x80) = this_49;
  pDVar1 = operator_new(4);
  DisPatcher_QuestAction::DisPatcher_QuestAction(pDVar1);
  *(DisPatcher_QuestAction **)(this + 0x84) = pDVar1;
  pDVar1 = operator_new(4);
  DisPatcher_QuestAction::DisPatcher_QuestAction(pDVar1);
  *(DisPatcher_QuestAction **)(this + 0x88) = pDVar1;
  pDVar1 = operator_new(4);
  DisPatcher_QuestAction::DisPatcher_QuestAction(pDVar1);
  *(DisPatcher_QuestAction **)(this + 0x8c) = pDVar1;
  pDVar1 = operator_new(4);
  DisPatcher_QuestAction::DisPatcher_QuestAction(pDVar1);
  *(DisPatcher_QuestAction **)(this + 0x90) = pDVar1;
  this_50 = operator_new(4);
  DisPatcher_SetPos::DisPatcher_SetPos(this_50);
  *(DisPatcher_SetPos **)(this + 0x94) = this_50;
  this_51 = operator_new(4);
  DisPatcher_SetArea::DisPatcher_SetArea(this_51);
  *(DisPatcher_SetArea **)(this + 0x98) = this_51;
  this_52 = operator_new(4);
  DisPatcher_Fish::DisPatcher_Fish(this_52);
  *(DisPatcher_Fish **)(this + 0x9c) = this_52;
  this_53 = operator_new(4);
  DisPatcher_FinishLoad::DisPatcher_FinishLoad(this_53);
  *(DisPatcher_FinishLoad **)(this + 0xa0) = this_53;
  this_54 = operator_new(4);
  DisPatcher_UseSkill::DisPatcher_UseSkill(this_54);
  *(DisPatcher_UseSkill **)(this + 0xa4) = this_54;
  this_55 = operator_new(4);
  DisPatcher_DieMob::DisPatcher_DieMob(this_55);
  *(DisPatcher_DieMob **)(this + 0xa8) = this_55;
  this_56 = operator_new(4);
  DisPatcher_DieCharacInDungeon::DisPatcher_DieCharacInDungeon(this_56);
  *(DisPatcher_DieCharacInDungeon **)(this + 0xac) = this_56;
  this_57 = operator_new(4);
  DisPatcher_UseCoin::DisPatcher_UseCoin(this_57);
  *(DisPatcher_UseCoin **)(this + 0xb0) = this_57;
  this_58 = operator_new(4);
  DisPatcher_GiveUpGame::DisPatcher_GiveUpGame(this_58);
  *(DisPatcher_GiveUpGame **)(this + 0xb4) = this_58;
  this_59 = operator_new(4);
  DisPatcher_GetItem::DisPatcher_GetItem(this_59);
  *(DisPatcher_GetItem **)(this + 0xb8) = this_59;
  this_60 = operator_new(4);
  DisPatcher_UseStack::DisPatcher_UseStack(this_60);
  *(DisPatcher_UseStack **)(this + 0xbc) = this_60;
  this_61 = operator_new(4);
  DisPatcher_MoveMap::DisPatcher_MoveMap(this_61);
  *(DisPatcher_MoveMap **)(this + 0xc0) = this_61;
  this_62 = operator_new(4);
  DisPatcher_SetPlayResult::DisPatcher_SetPlayResult(this_62);
  *(DisPatcher_SetPlayResult **)(this + 0xc4) = this_62;
  this_63 = operator_new(4);
  DisPatcher_DropItem::DisPatcher_DropItem(this_63);
  *(DisPatcher_DropItem **)(this + 200) = this_63;
  this_64 = operator_new(4);
  DisPatcher_UseEquip::DisPatcher_UseEquip(this_64);
  *(DisPatcher_UseEquip **)(this + 0xcc) = this_64;
  this_65 = operator_new(4);
  Dispatcher_ReportBadP2PUser::Dispatcher_ReportBadP2PUser(this_65);
  *(Dispatcher_ReportBadP2PUser **)(this + 0xd0) = this_65;
  this_66 = operator_new(4);
  DisPatcher_MakePVP::DisPatcher_MakePVP(this_66);
  *(DisPatcher_MakePVP **)(this + 0xd4) = this_66;
  this_67 = operator_new(4);
  DisPatcher_EnterPVP::DisPatcher_EnterPVP(this_67);
  *(DisPatcher_EnterPVP **)(this + 0xd8) = this_67;
  this_68 = operator_new(4);
  DisPatcher_SetPVPSeat::DisPatcher_SetPVPSeat(this_68);
  *(DisPatcher_SetPVPSeat **)(this + 0xdc) = this_68;
  this_69 = operator_new(4);
  DisPatcher_SetPVPReady::DisPatcher_SetPVPReady(this_69);
  *(DisPatcher_SetPVPReady **)(this + 0xe0) = this_69;
  this_70 = operator_new(4);
  DisPatcher_SetPVPTeam::DisPatcher_SetPVPTeam(this_70);
  *(DisPatcher_SetPVPTeam **)(this + 0xe4) = this_70;
  this_71 = operator_new(4);
  DisPatcher_DiePvP::DisPatcher_DiePvP(this_71);
  *(DisPatcher_DiePvP **)(this + 0xe8) = this_71;
  this_72 = operator_new(4);
  DisPatcher_PvPTimeout::DisPatcher_PvPTimeout(this_72);
  *(DisPatcher_PvPTimeout **)(this + 0xec) = this_72;
  this_73 = operator_new(4);
  DisPatcher_EndPvPResult::DisPatcher_EndPvPResult(this_73);
  *(DisPatcher_EndPvPResult **)(this + 0xf0) = this_73;
  this_74 = operator_new(4);
  DisPatcher_ResPvpRank::DisPatcher_ResPvpRank(this_74);
  *(DisPatcher_ResPvpRank **)(this + 0xf4) = this_74;
  this_75 = operator_new(4);
  DisPatcher_SetPVPMapIndex::DisPatcher_SetPVPMapIndex(this_75);
  *(DisPatcher_SetPVPMapIndex **)(this + 0xf8) = this_75;
  this_76 = operator_new(4);
  DisPatcher_DebugCommand::DisPatcher_DebugCommand(this_76);
  *(DisPatcher_DebugCommand **)(this + 0x104) = this_76;
  this_77 = operator_new(4);
  DisPatcher_AddFriend::DisPatcher_AddFriend(this_77);
  *(DisPatcher_AddFriend **)(this + 0xfc) = this_77;
  this_78 = operator_new(4);
  DisPatcher_RemoveFriend::DisPatcher_RemoveFriend(this_78);
  *(DisPatcher_RemoveFriend **)(this + 0x100) = this_78;
  this_79 = operator_new(4);
  DisPatcher_Cera::DisPatcher_Cera(this_79);
  *(DisPatcher_Cera **)(this + 0x108) = this_79;
  this_80 = operator_new(4);
  Dispatcher_BuyCeraShopItem::Dispatcher_BuyCeraShopItem(this_80);
  *(Dispatcher_BuyCeraShopItem **)(this + 0x10c) = this_80;
  this_81 = operator_new(4);
  Dispatcher_GenCeraTicket::Dispatcher_GenCeraTicket(this_81);
  *(Dispatcher_GenCeraTicket **)(this + 0x110) = this_81;
  this_82 = operator_new(4);
  Dispatcher_Request_PvpExpOfWeek::Dispatcher_Request_PvpExpOfWeek(this_82);
  *(Dispatcher_Request_PvpExpOfWeek **)(this + 0x114) = this_82;
  this_83 = operator_new(4);
  Dispatcher_EPLPCommand::Dispatcher_EPLPCommand(this_83);
  *(Dispatcher_EPLPCommand **)(this + 300) = this_83;
  this_84 = operator_new(4);
  Dispatcher_Score_Scroll_State::Dispatcher_Score_Scroll_State(this_84);
  *(Dispatcher_Score_Scroll_State **)(this + 0x120) = this_84;
  this_85 = operator_new(4);
  Dispatcher_Card_Select_Right_State::Dispatcher_Card_Select_Right_State(this_85);
  *(Dispatcher_Card_Select_Right_State **)(this + 0x124) = this_85;
  this_86 = operator_new(4);
  Dispatcher_Select_Card::Dispatcher_Select_Card(this_86);
  *(Dispatcher_Select_Card **)(this + 0x128) = this_86;
  this_87 = operator_new(4);
  Dispatcher_CallGuildMembers::Dispatcher_CallGuildMembers(this_87);
  *(Dispatcher_CallGuildMembers **)(this + 0x118) = this_87;
  this_88 = operator_new(4);
  Dispatcher_CallGuildCreateRight::Dispatcher_CallGuildCreateRight(this_88);
  *(Dispatcher_CallGuildCreateRight **)(this + 0x11c) = this_88;
  this_89 = operator_new(4);
  Dispatcher_CallGuildLevelUp::Dispatcher_CallGuildLevelUp(this_89);
  *(Dispatcher_CallGuildLevelUp **)(this + 0x130) = this_89;
  this_90 = operator_new(4);
  Dispatcher_CallGuildInfo::Dispatcher_CallGuildInfo(this_90);
  *(Dispatcher_CallGuildInfo **)(this + 0x134) = this_90;
  this_91 = operator_new(4);
  Dispatcher_RequestMemberEnter::Dispatcher_RequestMemberEnter(this_91);
  *(Dispatcher_RequestMemberEnter **)(this + 0x13c) = this_91;
  this_92 = operator_new(4);
  Dispatcher_MemberEnterReply::Dispatcher_MemberEnterReply(this_92);
  *(Dispatcher_MemberEnterReply **)(this + 0x140) = this_92;
  this_93 = operator_new(4);
  Dispatcher_MemberSecede::Dispatcher_MemberSecede(this_93);
  *(Dispatcher_MemberSecede **)(this + 0x144) = this_93;
  this_94 = operator_new(4);
  Dispatcher_CallMemberList::Dispatcher_CallMemberList(this_94);
  *(Dispatcher_CallMemberList **)(this + 0x148) = this_94;
  this_95 = operator_new(4);
  Dispatcher_UpgradeItem::Dispatcher_UpgradeItem(this_95);
  *(Dispatcher_UpgradeItem **)(this + 0x14c) = this_95;
  this_96 = operator_new(4);
  Dispatcher_UpgradeItemSeparate::Dispatcher_UpgradeItemSeparate(this_96);
  *(Dispatcher_UpgradeItemSeparate **)(this + 0x6dc) = this_96;
  this_97 = operator_new(4);
  Dispatcher_ModItemAttr::Dispatcher_ModItemAttr(this_97);
  *(Dispatcher_ModItemAttr **)(this + 0x150) = this_97;
  this_98 = operator_new(4);
  DisPatcher_EnterWarRoom::DisPatcher_EnterWarRoom(this_98);
  *(DisPatcher_EnterWarRoom **)(this + 0x174) = this_98;
  this_99 = operator_new(4);
  DisPatcher_SetWarRoomSeatState::DisPatcher_SetWarRoomSeatState(this_99);
  *(DisPatcher_SetWarRoomSeatState **)(this + 0x178) = this_99;
  this_x00100 = operator_new(4);
  DisPatcher_DieWarRoomCharacter::DisPatcher_DieWarRoomCharacter(this_x00100);
  *(DisPatcher_DieWarRoomCharacter **)(this + 0x17c) = this_x00100;
  this_x00101 = operator_new(4);
  DisPatcher_StartWarRoomTemp::DisPatcher_StartWarRoomTemp(this_x00101);
  *(DisPatcher_StartWarRoomTemp **)(this + 0x180) = this_x00101;
  this_x00102 = operator_new(4);
  Dispatcher_BuyPrivateStoreItem::Dispatcher_BuyPrivateStoreItem(this_x00102);
  *(Dispatcher_BuyPrivateStoreItem **)(this + 0x154) = this_x00102;
  this_x00103 = operator_new(4);
  Dispatcher_EnterPrivateStore::Dispatcher_EnterPrivateStore(this_x00103);
  *(Dispatcher_EnterPrivateStore **)(this + 0x158) = this_x00103;
  this_x00104 = operator_new(4);
  Dispatcher_ExitPrivateStore::Dispatcher_ExitPrivateStore(this_x00104);
  *(Dispatcher_ExitPrivateStore **)(this + 0x15c) = this_x00104;
  this_x00105 = operator_new(4);
  Dispatcher_CreatePrivateStore::Dispatcher_CreatePrivateStore(this_x00105);
  *(Dispatcher_CreatePrivateStore **)(this + 0x160) = this_x00105;
  this_x00106 = operator_new(4);
  Dispatcher_RemovePrivateStore::Dispatcher_RemovePrivateStore(this_x00106);
  *(Dispatcher_RemovePrivateStore **)(this + 0x164) = this_x00106;
  this_x00107 = operator_new(4);
  Dispatcher_CompleteDisplay::Dispatcher_CompleteDisplay(this_x00107);
  *(Dispatcher_CompleteDisplay **)(this + 0x168) = this_x00107;
  this_x00108 = operator_new(4);
  Dispatcher_MoveToGate::Dispatcher_MoveToGate(this_x00108);
  *(Dispatcher_MoveToGate **)(this + 0x16c) = this_x00108;
  this_x00109 = operator_new(4);
  Dispatcher_PeerConnectResult::Dispatcher_PeerConnectResult(this_x00109);
  *(Dispatcher_PeerConnectResult **)(this + 400) = this_x00109;
  this_x00110 = operator_new(4);
  Dispatcher_QuickJoinRoom::Dispatcher_QuickJoinRoom(this_x00110);
  *(Dispatcher_QuickJoinRoom **)(this + 0x194) = this_x00110;
  this_x00111 = operator_new(4);
  Dispatcher_MailBox_Open::Dispatcher_MailBox_Open(this_x00111);
  *(Dispatcher_MailBox_Open **)(this + 0x18c) = this_x00111;
  this_x00112 = operator_new(4);
  Dispatcher_MailBox_Send::Dispatcher_MailBox_Send(this_x00112);
  *(Dispatcher_MailBox_Send **)(this + 0x184) = this_x00112;
  this_x00113 = operator_new(4);
  Dispatcher_MailBox_Extract::Dispatcher_MailBox_Extract(this_x00113);
  *(Dispatcher_MailBox_Extract **)(this + 0x188) = this_x00113;
  this_x00114 = operator_new(4);
  Dispatcher_Compound_Avatar::Dispatcher_Compound_Avatar(this_x00114);
  *(Dispatcher_Compound_Avatar **)(this + 0x198) = this_x00114;
  this_x00115 = operator_new(4);
  Dispatcher_RenameCreature::Dispatcher_RenameCreature(this_x00115);
  *(Dispatcher_RenameCreature **)(this + 0x19c) = this_x00115;
  this_x00116 = operator_new(4);
  Dispatcher_ResponseCreature::Dispatcher_ResponseCreature(this_x00116);
  *(Dispatcher_ResponseCreature **)(this + 0x1a0) = this_x00116;
  this_x00117 = operator_new(4);
  Dispatcher_HatchCreature::Dispatcher_HatchCreature(this_x00117);
  *(Dispatcher_HatchCreature **)(this + 0x1a4) = this_x00117;
  this_x00118 = operator_new(4);
  Dispatcher_GatheringPartyStatus::Dispatcher_GatheringPartyStatus(this_x00118);
  *(Dispatcher_GatheringPartyStatus **)(this + 0x1b0) = this_x00118;
  this_x00119 = operator_new(4);
  Dispatcher_GM_Command::Dispatcher_GM_Command(this_x00119);
  *(Dispatcher_GM_Command **)(this + 0x1b8) = this_x00119;
  this_x00120 = operator_new(4);
  DisPatcher_ReportClient4Hack::DisPatcher_ReportClient4Hack(this_x00120);
  *(DisPatcher_ReportClient4Hack **)(this + 0x1bc) = this_x00120;
  this_x00121 = operator_new(4);
  DisPatcher_RequestGuildWarInfo::DisPatcher_RequestGuildWarInfo(this_x00121);
  *(DisPatcher_RequestGuildWarInfo **)(this + 0x1c0) = this_x00121;
  this_x00122 = operator_new(4);
  DisPatcher_PvpHeartBeat::DisPatcher_PvpHeartBeat(this_x00122);
  *(DisPatcher_PvpHeartBeat **)(this + 0x1c4) = this_x00122;
  this_x00123 = operator_new(4);
  Dispatcher_CodeCheckSum::Dispatcher_CodeCheckSum(this_x00123);
  *(Dispatcher_CodeCheckSum **)(this + 0x1c8) = this_x00123;
  this_x00124 = operator_new(4);
  Dispatcher_PVPRequestFight::Dispatcher_PVPRequestFight(this_x00124);
  *(Dispatcher_PVPRequestFight **)(this + 0x1cc) = this_x00124;
  this_x00125 = operator_new(4);
  Dispatcher_CreatureSendMessage::Dispatcher_CreatureSendMessage(this_x00125);
  *(Dispatcher_CreatureSendMessage **)(this + 0x1d4) = this_x00125;
  this_x00126 = operator_new(4);
  Dispatcher_TraceError::Dispatcher_TraceError(this_x00126);
  *(Dispatcher_TraceError **)(this + 0x1d8) = this_x00126;
  this_x00127 = operator_new(4);
  Dispatcher_MouseRegister::Dispatcher_MouseRegister(this_x00127);
  *(Dispatcher_MouseRegister **)(this + 0x1d0) = this_x00127;
  this_x00128 = operator_new(4);
  Dispatcher_BossDieCheck::Dispatcher_BossDieCheck(this_x00128);
  *(Dispatcher_BossDieCheck **)(this + 0x1e0) = this_x00128;
  this_x00129 = operator_new(4);
  Dispatcher_RegisterToBlackList::Dispatcher_RegisterToBlackList(this_x00129);
  *(Dispatcher_RegisterToBlackList **)(this + 0x1e4) = this_x00129;
  this_x00130 = operator_new(4);
  Dispatcher_DeleteToBlackList::Dispatcher_DeleteToBlackList(this_x00130);
  *(Dispatcher_DeleteToBlackList **)(this + 0x1e8) = this_x00130;
  this_x00131 = operator_new(4);
  Dispatcher_RequestBlackList::Dispatcher_RequestBlackList(this_x00131);
  *(Dispatcher_RequestBlackList **)(this + 0x1ec) = this_x00131;
  this_x00132 = operator_new(4);
  Dispatcher_ChangeHost::Dispatcher_ChangeHost(this_x00132);
  *(Dispatcher_ChangeHost **)(this + 0x1f0) = this_x00132;
  this_x00133 = operator_new(4);
  Dispatcher_CreatureScriptMessage::Dispatcher_CreatureScriptMessage(this_x00133);
  *(Dispatcher_CreatureScriptMessage **)(this + 500) = this_x00133;
  this_x00134 = operator_new(4);
  Dispatcher_CharacterStatistic::Dispatcher_CharacterStatistic(this_x00134);
  *(Dispatcher_CharacterStatistic **)(this + 0x1f8) = this_x00134;
  this_x00135 = operator_new(4);
  Dispatcher_SetSubGuildMaster::Dispatcher_SetSubGuildMaster(this_x00135);
  *(Dispatcher_SetSubGuildMaster **)(this + 0x204) = this_x00135;
  this_x00136 = operator_new(4);
  Dispatcher_Back2Village::Dispatcher_Back2Village(this_x00136);
  *(Dispatcher_Back2Village **)(this + 0x21c) = this_x00136;
  this_x00137 = operator_new(4);
  Dispatcher_BuyAutomatItem::Dispatcher_BuyAutomatItem(this_x00137);
  *(Dispatcher_BuyAutomatItem **)(this + 0x1a8) = this_x00137;
  this_x00138 = operator_new(4);
  Dispatcher_ChangeLetterStat::Dispatcher_ChangeLetterStat(this_x00138);
  *(Dispatcher_ChangeLetterStat **)(this + 0x224) = this_x00138;
  this_x00139 = operator_new(4);
  Dispatcher_ChangeCharacName::Dispatcher_ChangeCharacName(this_x00139);
  *(Dispatcher_ChangeCharacName **)(this + 0x228) = this_x00139;
  this_x00140 = operator_new(4);
  Dispatcher_QueryCharacInfo::Dispatcher_QueryCharacInfo(this_x00140);
  *(Dispatcher_QueryCharacInfo **)(this + 0x22c) = this_x00140;
  this_x00141 = operator_new(4);
  Dispatcher_ReportMannerlessUser::Dispatcher_ReportMannerlessUser(this_x00141);
  *(Dispatcher_ReportMannerlessUser **)(this + 0x230) = this_x00141;
  this_x00142 = operator_new(4);
  Dispatcher_DieMobAll::Dispatcher_DieMobAll(this_x00142);
  *(Dispatcher_DieMobAll **)(this + 0x234) = this_x00142;
  this_x00143 = operator_new(4);
  Dispatcher_CallGuildAllMembers::Dispatcher_CallGuildAllMembers(this_x00143);
  *(Dispatcher_CallGuildAllMembers **)(this + 0x23c) = this_x00143;
  this_x00144 = operator_new(4);
  Dispatcher_HumanCertify::Dispatcher_HumanCertify(this_x00144);
  *(Dispatcher_HumanCertify **)(this + 0x244) = this_x00144;
  this_x00145 = operator_new(4);
  Dispatcher_ChangeTutorialFlag::Dispatcher_ChangeTutorialFlag(this_x00145);
  *(Dispatcher_ChangeTutorialFlag **)(this + 0x248) = this_x00145;
  this_x00146 = operator_new(4);
  Dispatcher_CompleteLoadAssault::Dispatcher_CompleteLoadAssault(this_x00146);
  *(Dispatcher_CompleteLoadAssault **)(this + 0x250) = this_x00146;
  this_x00147 = operator_new(4);
  Dispatcher_ConnectP2PAssault::Dispatcher_ConnectP2PAssault(this_x00147);
  *(Dispatcher_ConnectP2PAssault **)(this + 0x254) = this_x00147;
  this_x00148 = operator_new(4);
  Dispatcher_DieAssaultPlayer::Dispatcher_DieAssaultPlayer(this_x00148);
  *(Dispatcher_DieAssaultPlayer **)(this + 600) = this_x00148;
  this_x00149 = operator_new(4);
  Dispatcher_ChangeHp::Dispatcher_ChangeHp(this_x00149);
  *(Dispatcher_ChangeHp **)(this + 0x260) = this_x00149;
  this_x00150 = operator_new(4);
  Dispatcher_CompleteLoadAfterAssault::Dispatcher_CompleteLoadAfterAssault(this_x00150);
  *(Dispatcher_CompleteLoadAfterAssault **)(this + 0x3e0) = this_x00150;
  this_x00151 = operator_new(4);
  Dispatcher_ConnectP2PAfterAssault::Dispatcher_ConnectP2PAfterAssault(this_x00151);
  *(Dispatcher_ConnectP2PAfterAssault **)(this + 0x3e4) = this_x00151;
  this_x00152 = operator_new(4);
  Dispatcher_BVHackInfo::Dispatcher_BVHackInfo(this_x00152);
  *(Dispatcher_BVHackInfo **)(this + 0x264) = this_x00152;
  this_x00153 = operator_new(4);
  Dispatcher_CallGuildInvite::Dispatcher_CallGuildInvite(this_x00153);
  *(Dispatcher_CallGuildInvite **)(this + 0x268) = this_x00153;
  this_x00154 = operator_new(4);
  Dispatcher_ReplyGuildInvite::Dispatcher_ReplyGuildInvite(this_x00154);
  *(Dispatcher_ReplyGuildInvite **)(this + 0x26c) = this_x00154;
  this_x00155 = operator_new(4);
  Dispatcher_RequestGuildSecede::Dispatcher_RequestGuildSecede(this_x00155);
  *(Dispatcher_RequestGuildSecede **)(this + 0x270) = this_x00155;
  this_x00156 = operator_new(4);
  Dispatcher_NotifyMessageToGuild::Dispatcher_NotifyMessageToGuild(this_x00156);
  *(Dispatcher_NotifyMessageToGuild **)(this + 0x274) = this_x00156;
  this_x00157 = operator_new(4);
  Dispatcher_GuildMasterDelegate::Dispatcher_GuildMasterDelegate(this_x00157);
  *(Dispatcher_GuildMasterDelegate **)(this + 0x278) = this_x00157;
  this_x00158 = operator_new(4);
  Dispatcher_CheckGuildNameDouble::Dispatcher_CheckGuildNameDouble(this_x00158);
  *(Dispatcher_CheckGuildNameDouble **)(this + 0x27c) = this_x00158;
  this_x00159 = operator_new(4);
  Dispatcher_CheckGuildAddressDouble::Dispatcher_CheckGuildAddressDouble(this_x00159);
  *(Dispatcher_CheckGuildAddressDouble **)(this + 0x280) = this_x00159;
  this_x00160 = operator_new(4);
  Dispatcher_OpenGuildCreateWindow::Dispatcher_OpenGuildCreateWindow(this_x00160);
  *(Dispatcher_OpenGuildCreateWindow **)(this + 0x284) = this_x00160;
  this_x00161 = operator_new(4);
  Dispatcher_DeathTowerStageCommand::Dispatcher_DeathTowerStageCommand(this_x00161);
  *(Dispatcher_DeathTowerStageCommand **)(this + 0x288) = this_x00161;
  this_x00162 = operator_new(4);
  Dispatcher_UseBoosterItem::Dispatcher_UseBoosterItem(this_x00162);
  *(Dispatcher_UseBoosterItem **)(this + 0x28c) = this_x00162;
  this_x00163 = operator_new(4);
  Dispatcher_SecurityCardIssue::Dispatcher_SecurityCardIssue(this_x00163);
  *(Dispatcher_SecurityCardIssue **)(this + 0x290) = this_x00163;
  this_x00164 = operator_new(4);
  Dispatcher_SecurityCardDisuse::Dispatcher_SecurityCardDisuse(this_x00164);
  *(Dispatcher_SecurityCardDisuse **)(this + 0x294) = this_x00164;
  this_x00165 = operator_new(4);
  Dispatcher_SecurityCardAuthReq::Dispatcher_SecurityCardAuthReq(this_x00165);
  *(Dispatcher_SecurityCardAuthReq **)(this + 0x298) = this_x00165;
  this_x00166 = operator_new(4);
  Dispatcher_SecurityCardAuthRpy::Dispatcher_SecurityCardAuthRpy(this_x00166);
  *(Dispatcher_SecurityCardAuthRpy **)(this + 0x29c) = this_x00166;
  this_x00167 = operator_new(4);
  Dispatcher_SecurityCardCertKey::Dispatcher_SecurityCardCertKey(this_x00167);
  *(Dispatcher_SecurityCardCertKey **)(this + 0x2a0) = this_x00167;
  this_x00168 = operator_new(4);
  Dispatcher_SecurityCardAuthCancel::Dispatcher_SecurityCardAuthCancel(this_x00168);
  *(Dispatcher_SecurityCardAuthCancel **)(this + 700) = this_x00168;
  this_x00169 = operator_new(4);
  Dispatcher_SecurityCardRetransfer::Dispatcher_SecurityCardRetransfer(this_x00169);
  *(Dispatcher_SecurityCardRetransfer **)(this + 0x328) = this_x00169;
  this_x00170 = operator_new(4);
  Dispatcher_CallPartyMemberRealtimeInfo::Dispatcher_CallPartyMemberRealtimeInfo(this_x00170);
  *(Dispatcher_CallPartyMemberRealtimeInfo **)(this + 0x2a4) = this_x00170;
  this_x00171 = operator_new(4);
  Dispatcher_EvadeAssault::Dispatcher_EvadeAssault(this_x00171);
  *(Dispatcher_EvadeAssault **)(this + 0x2a8) = this_x00171;
  this_x00172 = operator_new(4);
  Dispatcher_AgreeEnchant::Dispatcher_AgreeEnchant(this_x00172);
  *(Dispatcher_AgreeEnchant **)(this + 0x2ac) = this_x00172;
  this_x00173 = operator_new(4);
  Dispatcher_TryEnchant::Dispatcher_TryEnchant(this_x00173);
  *(Dispatcher_TryEnchant **)(this + 0x2b0) = this_x00173;
  this_x00174 = operator_new(4);
  Dispatcher_PutItemForEnchant::Dispatcher_PutItemForEnchant(this_x00174);
  *(Dispatcher_PutItemForEnchant **)(this + 0x2b4) = this_x00174;
  this_x00175 = operator_new(4);
  Dispatcher_Client_Spec_Statistic::Dispatcher_Client_Spec_Statistic(this_x00175);
  *(Dispatcher_Client_Spec_Statistic **)(this + 0x2b8) = this_x00175;
  this_x00176 = operator_new(4);
  Dispatcher_Antibot_DPCallBack::Dispatcher_Antibot_DPCallBack(this_x00176);
  *(Dispatcher_Antibot_DPCallBack **)(this + 0x974) = this_x00176;
  this_x00177 = operator_new(4);
  Dispatcher_Antibot_DP::Dispatcher_Antibot_DP(this_x00177);
  *(Dispatcher_Antibot_DP **)(this + 0x970) = this_x00177;
  this_x00178 = operator_new(4);
  Dispatcher_Antibot::Dispatcher_Antibot(this_x00178);
  *(Dispatcher_Antibot **)(this + 0x96c) = this_x00178;
  this_x00179 = operator_new(4);
  Dispatcher_Join_Power::Dispatcher_Join_Power(this_x00179);
  *(Dispatcher_Join_Power **)(this + 0x2d0) = this_x00179;
  this_x00180 = operator_new(4);
  Dispatcher_Secede_Power::Dispatcher_Secede_Power(this_x00180);
  *(Dispatcher_Secede_Power **)(this + 0x2d4) = this_x00180;
  this_x00181 = operator_new(4);
  Dispatcher_New_Gmdebug_Command::Dispatcher_New_Gmdebug_Command(this_x00181);
  *(Dispatcher_New_Gmdebug_Command **)(this + 0x2cc) = this_x00181;
  this_x00182 = operator_new(4);
  Dispatcher_SDC_Damage_Check::Dispatcher_SDC_Damage_Check(this_x00182);
  *(Dispatcher_SDC_Damage_Check **)(this + 0x2dc) = this_x00182;
  this_x00183 = operator_new(4);
  Dispatcher_SDC_ActiveStatus_Damage_Check::Dispatcher_SDC_ActiveStatus_Damage_Check(this_x00183);
  *(Dispatcher_SDC_ActiveStatus_Damage_Check **)(this + 0x2e0) = this_x00183;
  this_x00184 = operator_new(4);
  Dispatcher_ChangeGuildName::Dispatcher_ChangeGuildName(this_x00184);
  *(Dispatcher_ChangeGuildName **)(this + 0x2d8) = this_x00184;
  this_x00185 = operator_new(4);
  Dispatcher_AuctionAskAveragePrice::Dispatcher_AuctionAskAveragePrice(this_x00185);
  *(Dispatcher_AuctionAskAveragePrice **)(this + 0x2e4) = this_x00185;
  this_x00186 = operator_new(4);
  Dispatcher_AuctionRegistItem::Dispatcher_AuctionRegistItem(this_x00186);
  *(Dispatcher_AuctionRegistItem **)(this + 0x2e8) = this_x00186;
  this_x00187 = operator_new(4);
  Dispatcher_AuctionRegistCancel::Dispatcher_AuctionRegistCancel(this_x00187);
  *(Dispatcher_AuctionRegistCancel **)(this + 0x2ec) = this_x00187;
  this_x00188 = operator_new(4);
  Dispatcher_AuctionBidding::Dispatcher_AuctionBidding(this_x00188);
  *(Dispatcher_AuctionBidding **)(this + 0x2f0) = this_x00188;
  this_x00189 = operator_new(4);
  Dispatcher_AuctionSearchByItemKey::Dispatcher_AuctionSearchByItemKey(this_x00189);
  *(Dispatcher_AuctionSearchByItemKey **)(this + 0x2f4) = this_x00189;
  this_x00190 = operator_new(4);
  Dispatcher_AuctionSearchByNoItmeKey::Dispatcher_AuctionSearchByNoItmeKey(this_x00190);
  *(Dispatcher_AuctionSearchByNoItmeKey **)(this + 0x2f8) = this_x00190;
  this_x00191 = operator_new(4);
  Dispatcher_AuctionMyRegistedItemInfo::Dispatcher_AuctionMyRegistedItemInfo(this_x00191);
  *(Dispatcher_AuctionMyRegistedItemInfo **)(this + 0x2fc) = this_x00191;
  this_x00192 = operator_new(4);
  Dispatcher_AuctionMyBiddingInfo::Dispatcher_AuctionMyBiddingInfo(this_x00192);
  *(Dispatcher_AuctionMyBiddingInfo **)(this + 0x300) = this_x00192;
  this_x00193 = operator_new(4);
  Dispatcher_AuctionMyAuctionHistory::Dispatcher_AuctionMyAuctionHistory(this_x00193);
  *(Dispatcher_AuctionMyAuctionHistory **)(this + 0x304) = this_x00193;
  this_x00194 = operator_new(4);
  Dispatcher_DungeonEventStoryPause::Dispatcher_DungeonEventStoryPause(this_x00194);
  *(Dispatcher_DungeonEventStoryPause **)(this + 0x308) = this_x00194;
  this_x00195 = operator_new(4);
  Dispatcher_JoinPowerWar::Dispatcher_JoinPowerWar(this_x00195);
  *(Dispatcher_JoinPowerWar **)(this + 0x30c) = this_x00195;
  this_x00196 = operator_new(4);
  Dispatcher_SaveGameOption_1::Dispatcher_SaveGameOption_1(this_x00196);
  *(Dispatcher_SaveGameOption_1 **)(this + 800) = this_x00196;
  this_x00197 = operator_new(4);
  Dispatcher_SaveGameOption_2::Dispatcher_SaveGameOption_2(this_x00197);
  *(Dispatcher_SaveGameOption_2 **)(this + 0x324) = this_x00197;
  this_x00198 = operator_new(4);
  Dispatcher_SaveCharacterOption::Dispatcher_SaveCharacterOption(this_x00198);
  *(Dispatcher_SaveCharacterOption **)(this + 0x700) = this_x00198;
  this_x00199 = operator_new(4);
  Dispatcher_FrameLagStatistics::Dispatcher_FrameLagStatistics(this_x00199);
  *(Dispatcher_FrameLagStatistics **)(this + 0x314) = this_x00199;
  this_x00200 = operator_new(4);
  Dispatcher_GoblinPadStatus::Dispatcher_GoblinPadStatus(this_x00200);
  *(Dispatcher_GoblinPadStatus **)(this + 0x310) = this_x00200;
  this_x00201 = operator_new(4);
  Dispatcher_PvPChannelInfo::Dispatcher_PvPChannelInfo(this_x00201);
  *(Dispatcher_PvPChannelInfo **)(this + 0x318) = this_x00201;
  this_x00202 = operator_new(4);
  Dispatcher_RequestMatch::Dispatcher_RequestMatch(this_x00202);
  *(Dispatcher_RequestMatch **)(this + 0x31c) = this_x00202;
  this_x00203 = operator_new(4);
  Dispatcher_UseJewel::Dispatcher_UseJewel(this_x00203);
  *(Dispatcher_UseJewel **)(this + 0x330) = this_x00203;
  this_x00204 = operator_new(4);
  Dispatcher_DisJointAvatar::Dispatcher_DisJointAvatar(this_x00204);
  *(Dispatcher_DisJointAvatar **)(this + 0x334) = this_x00204;
  this_x00205 = operator_new(4);
  Dispatcher_PurifyItem::Dispatcher_PurifyItem(this_x00205);
  *(Dispatcher_PurifyItem **)(this + 0x33c) = this_x00205;
  this_x00206 = operator_new(4);
  Dispatcher_InvestItemAmplifyOption::Dispatcher_InvestItemAmplifyOption(this_x00206);
  *(Dispatcher_InvestItemAmplifyOption **)(this + 0x340) = this_x00206;
  this_x00207 = operator_new(4);
  Dispatcher_AddSocketToAvatar::Dispatcher_AddSocketToAvatar(this_x00207);
  *(Dispatcher_AddSocketToAvatar **)(this + 0x344) = this_x00207;
  this_x00208 = operator_new(4);
  Dispatcher_Shop_Coin_Event::Dispatcher_Shop_Coin_Event(this_x00208);
  *(Dispatcher_Shop_Coin_Event **)(this + 0x348) = this_x00208;
  this_x00209 = operator_new(4);
  DisPatcher_MultiBoxLottery::DisPatcher_MultiBoxLottery(this_x00209);
  *(DisPatcher_MultiBoxLottery **)(this + 0x34c) = this_x00209;
  this_x00210 = operator_new(4);
  DisPatcher_UdpCharacteristic::DisPatcher_UdpCharacteristic(this_x00210);
  *(DisPatcher_UdpCharacteristic **)(this + 0x350) = this_x00210;
  this_x00211 = operator_new(4);
  DIspatcher_OneDayLetheTicket::DIspatcher_OneDayLetheTicket(this_x00211);
  *(DIspatcher_OneDayLetheTicket **)(this + 0x354) = this_x00211;
  this_x00212 = operator_new(4);
  Dispatcher_DisguiseRequest::Dispatcher_DisguiseRequest(this_x00212);
  *(Dispatcher_DisguiseRequest **)(this + 0x358) = this_x00212;
  this_x00213 = operator_new(4);
  Dispatcher_DisguiseCancel::Dispatcher_DisguiseCancel(this_x00213);
  *(Dispatcher_DisguiseCancel **)(this + 0x35c) = this_x00213;
  this_x00214 = operator_new(8);
                    /* try { // try from 085929ba to 085929be has its CatchHandler @ 085929c1 */
  Dispatcher_UseVendingMachine::Dispatcher_UseVendingMachine(this_x00214);
  *(Dispatcher_UseVendingMachine **)(this + 0x368) = this_x00214;
                    /* try { // try from 085929ea to 085947fe has its CatchHandler @ 08594820 */
  this_x00215 = operator_new(4);
  Dispatcher_UseCraneStart::Dispatcher_UseCraneStart(this_x00215);
  *(Dispatcher_UseCraneStart **)(this + 0x798) = this_x00215;
  this_x00216 = operator_new(4);
  Dispatcher_CranePickUp::Dispatcher_CranePickUp(this_x00216);
  *(Dispatcher_CranePickUp **)(this + 0x79c) = this_x00216;
  this_x00217 = operator_new(4);
  Dispatcher_RequestPCRoomPlayerList::Dispatcher_RequestPCRoomPlayerList(this_x00217);
  *(Dispatcher_RequestPCRoomPlayerList **)(this + 0x360) = this_x00217;
  this_x00218 = operator_new(4);
  Dispatcher_RequestPCRoomPlayerCount::Dispatcher_RequestPCRoomPlayerCount(this_x00218);
  *(Dispatcher_RequestPCRoomPlayerCount **)(this + 0x364) = this_x00218;
  this_x00219 = operator_new(4);
  Dispatcher_UpdateServerMessage::Dispatcher_UpdateServerMessage(this_x00219);
  *(Dispatcher_UpdateServerMessage **)(this + 0x374) = this_x00219;
  this_x00220 = operator_new(4);
  Dispatcher_CheckEnableServerMessage::Dispatcher_CheckEnableServerMessage(this_x00220);
  *(Dispatcher_CheckEnableServerMessage **)(this + 0x378) = this_x00220;
  this_x00221 = operator_new(4);
  Dispatcher_AssertManager::Dispatcher_AssertManager(this_x00221);
  *(Dispatcher_AssertManager **)(this + 0x36c) = this_x00221;
  this_x00222 = operator_new(4);
  Dispatcher_GiveGiftToNPC::Dispatcher_GiveGiftToNPC(this_x00222);
  *(Dispatcher_GiveGiftToNPC **)(this + 900) = this_x00222;
  this_x00223 = operator_new(4);
  Dispatcher_Overflow_Info::Dispatcher_Overflow_Info(this_x00223);
  *(Dispatcher_Overflow_Info **)(this + 0x370) = this_x00223;
  this_x00224 = operator_new(4);
  Dispatcher_GoblinPadRequestCryptKey::Dispatcher_GoblinPadRequestCryptKey(this_x00224);
  *(Dispatcher_GoblinPadRequestCryptKey **)(this + 0x388) = this_x00224;
  this_x00225 = operator_new(4);
  Dispatcher_WriteGuildMemberMemo::Dispatcher_WriteGuildMemberMemo(this_x00225);
  *(Dispatcher_WriteGuildMemberMemo **)(this + 0x38c) = this_x00225;
  this_x00226 = operator_new(4);
  Dispatcher_HellPartyStart::Dispatcher_HellPartyStart(this_x00226);
  *(Dispatcher_HellPartyStart **)(this + 0x3ac) = this_x00226;
  this_x00227 = operator_new(4);
  Dispatcher_PowerWarProcessInfo::Dispatcher_PowerWarProcessInfo(this_x00227);
  *(Dispatcher_PowerWarProcessInfo **)(this + 0x3b0) = this_x00227;
  this_x00228 = operator_new(4);
  Dispatcher_CreateDisjointStore::Dispatcher_CreateDisjointStore(this_x00228);
  *(Dispatcher_CreateDisjointStore **)(this + 0x3b8) = this_x00228;
  this_x00229 = operator_new(4);
  Dispatcher_RequestDisjointItem::Dispatcher_RequestDisjointItem(this_x00229);
  *(Dispatcher_RequestDisjointItem **)(this + 0x3bc) = this_x00229;
  this_x00230 = operator_new(4);
  Dispatcher_RepairDisjointMachine::Dispatcher_RepairDisjointMachine(this_x00230);
  *(Dispatcher_RepairDisjointMachine **)(this + 0x3c0) = this_x00230;
  this_x00231 = operator_new(4);
  Dispatcher_Teleport::Dispatcher_Teleport(this_x00231);
  *(Dispatcher_Teleport **)(this + 0x3c4) = this_x00231;
  this_x00232 = operator_new(4);
  Dispatcher_CompoundItemByExpertJob::Dispatcher_CompoundItemByExpertJob(this_x00232);
  *(Dispatcher_CompoundItemByExpertJob **)(this + 0x3c8) = this_x00232;
  this_x00233 = operator_new(4);
  Dispatcher_GiveupExpertJob::Dispatcher_GiveupExpertJob(this_x00233);
  *(Dispatcher_GiveupExpertJob **)(this + 0x3cc) = this_x00233;
  this_x00234 = operator_new(4);
  Dispatcher_UpgradeDisjointMachine::Dispatcher_UpgradeDisjointMachine(this_x00234);
  *(Dispatcher_UpgradeDisjointMachine **)(this + 0x3d0) = this_x00234;
  this_x00235 = operator_new(4);
  Dispatcher_EnterDisjointStore::Dispatcher_EnterDisjointStore(this_x00235);
  *(Dispatcher_EnterDisjointStore **)(this + 0x3d4) = this_x00235;
  this_x00236 = operator_new(4);
  Dispatcher_CloseDisjointStore::Dispatcher_CloseDisjointStore(this_x00236);
  *(Dispatcher_CloseDisjointStore **)(this + 0x3d8) = this_x00236;
  this_x00237 = operator_new(4);
  Dispatcher_ReportAbuseUser::Dispatcher_ReportAbuseUser(this_x00237);
  *(Dispatcher_ReportAbuseUser **)(this + 0x3dc) = this_x00237;
  this_x00238 = operator_new(4);
  Dispatcher_GuildCargo::Dispatcher_GuildCargo(this_x00238);
  *(Dispatcher_GuildCargo **)(this + 0x424) = this_x00238;
  this_x00239 = operator_new(4);
  Dispatcher_GuildCargoHistory::Dispatcher_GuildCargoHistory(this_x00239);
  *(Dispatcher_GuildCargoHistory **)(this + 0x428) = this_x00239;
  this_x00240 = operator_new(4);
  Dispatcher_GuildCargoPushItem::Dispatcher_GuildCargoPushItem(this_x00240);
  *(Dispatcher_GuildCargoPushItem **)(this + 0x3ec) = this_x00240;
  this_x00241 = operator_new(4);
  Dispatcher_GuildCargoPopItem::Dispatcher_GuildCargoPopItem(this_x00241);
  *(Dispatcher_GuildCargoPopItem **)(this + 0x3f0) = this_x00241;
  this_x00242 = operator_new(4);
  Dispatcher_GuildCargoMoveItem::Dispatcher_GuildCargoMoveItem(this_x00242);
  *(Dispatcher_GuildCargoMoveItem **)(this + 0x3f4) = this_x00242;
  this_x00243 = operator_new(4);
  Dispatcher_LoadingTimeReport::Dispatcher_LoadingTimeReport(this_x00243);
  *(Dispatcher_LoadingTimeReport **)(this + 0x3f8) = this_x00243;
  this_x00244 = operator_new(4);
  Dispatcher_UseSharedEffectItem::Dispatcher_UseSharedEffectItem(this_x00244);
  *(Dispatcher_UseSharedEffectItem **)(this + 0x3fc) = this_x00244;
  this_x00245 = operator_new(4);
  Dispatcher_BuyCeraShopLimitItem::Dispatcher_BuyCeraShopLimitItem(this_x00245);
  *(Dispatcher_BuyCeraShopLimitItem **)(this + 0x400) = this_x00245;
  this_x00246 = operator_new(4);
  Dispatcher_SecuDataControl::Dispatcher_SecuDataControl(this_x00246);
  *(Dispatcher_SecuDataControl **)(this + 0x4e0) = this_x00246;
  this_x00247 = operator_new(4);
  Dispatcher_ChangeEmotion::Dispatcher_ChangeEmotion(this_x00247);
  *(Dispatcher_ChangeEmotion **)(this + 0x408) = this_x00247;
  this_x00248 = operator_new(4);
  Dispatcher_DieBloodMonster::Dispatcher_DieBloodMonster(this_x00248);
  *(Dispatcher_DieBloodMonster **)(this + 0x40c) = this_x00248;
  this_x00249 = operator_new(4);
  Dispatcher_CompoundEmblem::Dispatcher_CompoundEmblem(this_x00249);
  *(Dispatcher_CompoundEmblem **)(this + 0x410) = this_x00249;
  this_x00250 = operator_new(4);
  Dispatcher_CheckAssaultMotionHack::Dispatcher_CheckAssaultMotionHack(this_x00250);
  *(Dispatcher_CheckAssaultMotionHack **)(this + 0x414) = this_x00250;
  this_x00251 = operator_new(4);
  Dispatcher_BloodRoundUiPrepareFinish::Dispatcher_BloodRoundUiPrepareFinish(this_x00251);
  *(Dispatcher_BloodRoundUiPrepareFinish **)(this + 0x418) = this_x00251;
  this_x00252 = operator_new(4);
  Dispatcher_RequestConditionEventReward::Dispatcher_RequestConditionEventReward(this_x00252);
  *(Dispatcher_RequestConditionEventReward **)(this + 0x41c) = this_x00252;
  this_x00253 = operator_new(4);
  Dispatcher_ChangeAnotherSkillTree::Dispatcher_ChangeAnotherSkillTree(this_x00253);
  *(Dispatcher_ChangeAnotherSkillTree **)(this + 0x420) = this_x00253;
  this_x00254 = operator_new(4);
  Dispatcher_FightVillageMonster::Dispatcher_FightVillageMonster(this_x00254);
  *(Dispatcher_FightVillageMonster **)(this + 0x42c) = this_x00254;
  this_x00255 = operator_new(4);
  Dispatcher_FinishVillageMonsterFighting::Dispatcher_FinishVillageMonsterFighting(this_x00255);
  *(Dispatcher_FinishVillageMonsterFighting **)(this + 0x430) = this_x00255;
  this_x00256 = operator_new(4);
  Dispatcher_UpgradeGuildCargo::Dispatcher_UpgradeGuildCargo(this_x00256);
  *(Dispatcher_UpgradeGuildCargo **)(this + 0x434) = this_x00256;
  this_x00257 = operator_new(4);
  Dispatcher_RequestItemLock::Dispatcher_RequestItemLock(this_x00257);
  *(Dispatcher_RequestItemLock **)(this + 0x43c) = this_x00257;
  this_x00258 = operator_new(4);
  Dispatcher_RequestItemUnlock::Dispatcher_RequestItemUnlock(this_x00258);
  *(Dispatcher_RequestItemUnlock **)(this + 0x440) = this_x00258;
  this_x00259 = operator_new(4);
  Dispatcher_RequestItemUnlockCancel::Dispatcher_RequestItemUnlockCancel(this_x00259);
  *(Dispatcher_RequestItemUnlockCancel **)(this + 0x444) = this_x00259;
  this_x00260 = operator_new(4);
  Dispatcher_UpgradeChronicle::Dispatcher_UpgradeChronicle(this_x00260);
  *(Dispatcher_UpgradeChronicle **)(this + 0x448) = this_x00260;
  this_x00261 = operator_new(4);
  Dispatcher_EnchantByBead::Dispatcher_EnchantByBead(this_x00261);
  *(Dispatcher_EnchantByBead **)(this + 0x44c) = this_x00261;
  this_x00262 = operator_new(4);
  Dispatcher_DungeonNPCBuffInfo::Dispatcher_DungeonNPCBuffInfo(this_x00262);
  *(Dispatcher_DungeonNPCBuffInfo **)(this + 0x450) = this_x00262;
  this_x00263 = operator_new(4);
  Dispatcher_VerifyGold::Dispatcher_VerifyGold(this_x00263);
  *(Dispatcher_VerifyGold **)(this + 0x47c) = this_x00263;
  this_x00264 = operator_new(4);
  Dispatcher_Security_ProcessScan::Dispatcher_Security_ProcessScan(this_x00264);
  *(Dispatcher_Security_ProcessScan **)(this + 0x46c) = this_x00264;
  this_x00265 = operator_new(4);
  Dispatcher_Security_IPScan::Dispatcher_Security_IPScan(this_x00265);
  *(Dispatcher_Security_IPScan **)(this + 0x470) = this_x00265;
  this_x00266 = operator_new(4);
  Dispatcher_Lag_Statistics::Dispatcher_Lag_Statistics(this_x00266);
  *(Dispatcher_Lag_Statistics **)(this + 0x468) = this_x00266;
  this_x00267 = operator_new(4);
  Dispatcher_Security_PacketIntegrity::Dispatcher_Security_PacketIntegrity(this_x00267);
  *(Dispatcher_Security_PacketIntegrity **)(this + 0x478) = this_x00267;
  this_x00268 = operator_new(4);
  Dispatcher_RequestOnTimeEventReward::Dispatcher_RequestOnTimeEventReward(this_x00268);
  *(Dispatcher_RequestOnTimeEventReward **)(this + 0x480) = this_x00268;
  this_x00269 = operator_new(4);
  Dispatcher_RequestAddPvPBuddy::Dispatcher_RequestAddPvPBuddy(this_x00269);
  *(Dispatcher_RequestAddPvPBuddy **)(this + 0x484) = this_x00269;
  this_x00270 = operator_new(4);
  Dispatcher_ResponseAddPvPBuddy::Dispatcher_ResponseAddPvPBuddy(this_x00270);
  *(Dispatcher_ResponseAddPvPBuddy **)(this + 0x488) = this_x00270;
  this_x00271 = operator_new(4);
  Dispatcher_RemovePvPBuddy::Dispatcher_RemovePvPBuddy(this_x00271);
  *(Dispatcher_RemovePvPBuddy **)(this + 0x48c) = this_x00271;
  this_x00272 = operator_new(4);
  Dispatcher_PvPBuddyConnList::Dispatcher_PvPBuddyConnList(this_x00272);
  *(Dispatcher_PvPBuddyConnList **)(this + 0x490) = this_x00272;
  this_x00273 = operator_new(4);
  Dispatcher_Security_NonClient_GetResponse::Dispatcher_Security_NonClient_GetResponse(this_x00273);
  *(Dispatcher_Security_NonClient_GetResponse **)(this + 0x498) = this_x00273;
  this_x00274 = operator_new(4);
  Dispatcher_Security_MemoryIntegrity::Dispatcher_Security_MemoryIntegrity(this_x00274);
  *(Dispatcher_Security_MemoryIntegrity **)(this + 0x49c) = this_x00274;
  this_x00275 = operator_new(4);
  Dispatcher_Compound_Equipment_Upgrade_Card::Dispatcher_Compound_Equipment_Upgrade_Card
            (this_x00275);
  *(Dispatcher_Compound_Equipment_Upgrade_Card **)(this + 0x5a4) = this_x00275;
  this_x00276 = operator_new(4);
  Dispatcher_Change_Charac_Slot::Dispatcher_Change_Charac_Slot(this_x00276);
  *(Dispatcher_Change_Charac_Slot **)(this + 0x4a0) = this_x00276;
  this_x00277 = operator_new(4);
  Dispatcher_SecurityLog::Dispatcher_SecurityLog(this_x00277);
  *(Dispatcher_SecurityLog **)(this + 0x868) = this_x00277;
  this_x00278 = operator_new(4);
  Dispatcher_SecretShopBuyItem::Dispatcher_SecretShopBuyItem(this_x00278);
  *(Dispatcher_SecretShopBuyItem **)(this + 0x4a4) = this_x00278;
  this_x00279 = operator_new(4);
  Dispatcher_SecretShopOpenClose::Dispatcher_SecretShopOpenClose(this_x00279);
  *(Dispatcher_SecretShopOpenClose **)(this + 0x4a8) = this_x00279;
  this_x00280 = operator_new(4);
  Dispatcher_CompleteLoadPvP::Dispatcher_CompleteLoadPvP(this_x00280);
  *(Dispatcher_CompleteLoadPvP **)(this + 0x4ac) = this_x00280;
  this_x00281 = operator_new(4);
  Dispatcher_ConnectP2PPvP::Dispatcher_ConnectP2PPvP(this_x00281);
  *(Dispatcher_ConnectP2PPvP **)(this + 0x4b0) = this_x00281;
  this_x00282 = operator_new(4);
  Dispatcher_BiddingRoutingItem::Dispatcher_BiddingRoutingItem(this_x00282);
  *(Dispatcher_BiddingRoutingItem **)(this + 0x4b4) = this_x00282;
  this_x00283 = operator_new(4);
  Dispatcher_CreateAccountCargo::Dispatcher_CreateAccountCargo(this_x00283);
  *(Dispatcher_CreateAccountCargo **)(this + 0x4c8) = this_x00283;
  this_x00284 = operator_new(4);
  Dispatcher_UpgradeAccountCargo::Dispatcher_UpgradeAccountCargo(this_x00284);
  *(Dispatcher_UpgradeAccountCargo **)(this + 0x4cc) = this_x00284;
  this_x00285 = operator_new(4);
  Dispatcher_DepositMoney::Dispatcher_DepositMoney(this_x00285);
  *(Dispatcher_DepositMoney **)(this + 0x4d0) = this_x00285;
  this_x00286 = operator_new(4);
  Dispatcher_WithdrawMoney::Dispatcher_WithdrawMoney(this_x00286);
  *(Dispatcher_WithdrawMoney **)(this + 0x4d4) = this_x00286;
  this_x00287 = operator_new(4);
  Dispatcher_Skill_Command_Customizing::Dispatcher_Skill_Command_Customizing(this_x00287);
  *(Dispatcher_Skill_Command_Customizing **)(this + 0x530) = this_x00287;
  this_x00288 = operator_new(4);
  Dispatcher_Skill_Command_All_Default::Dispatcher_Skill_Command_All_Default(this_x00288);
  *(Dispatcher_Skill_Command_All_Default **)(this + 0x534) = this_x00288;
  this_x00289 = operator_new(4);
  Dispatcher_Open_Guild_Board::Dispatcher_Open_Guild_Board(this_x00289);
  *(Dispatcher_Open_Guild_Board **)(this + 0x554) = this_x00289;
  this_x00290 = operator_new(4);
  Dispatcher_Write_On_The_GuildBoard::Dispatcher_Write_On_The_GuildBoard(this_x00290);
  *(Dispatcher_Write_On_The_GuildBoard **)(this + 0x558) = this_x00290;
  this_x00291 = operator_new(4);
  Dispatcher_Delete_GuildBoard_Text::Dispatcher_Delete_GuildBoard_Text(this_x00291);
  *(Dispatcher_Delete_GuildBoard_Text **)(this + 0x55c) = this_x00291;
  this_x00292 = operator_new(4);
  Dispatcher_Break_Away_Quest_Check::Dispatcher_Break_Away_Quest_Check(this_x00292);
  *(Dispatcher_Break_Away_Quest_Check **)(this + 0x5b4) = this_x00292;
  this_x00293 = operator_new(0xd8);
  Dispatcher_Compound_ExtreamItem::Dispatcher_Compound_ExtreamItem(this_x00293);
  *(Dispatcher_Compound_ExtreamItem **)(this + 0x518) = this_x00293;
  this_x00294 = operator_new(4);
  Dispatcher_RedeemList::Dispatcher_RedeemList(this_x00294);
  *(Dispatcher_RedeemList **)(this + 0x4d8) = this_x00294;
  this_x00295 = operator_new(4);
  Dispatcher_Redeem::Dispatcher_Redeem(this_x00295);
  *(Dispatcher_Redeem **)(this + 0x4dc) = this_x00295;
  this_x00296 = operator_new(4);
  Dispatcher_MultiMailBoxSend::Dispatcher_MultiMailBoxSend(this_x00296);
  *(Dispatcher_MultiMailBoxSend **)(this + 0x4f0) = this_x00296;
  this_x00297 = operator_new(4);
  Dispatcher_QueryCharacInfoMailbox::Dispatcher_QueryCharacInfoMailbox(this_x00297);
  *(Dispatcher_QueryCharacInfoMailbox **)(this + 0x514) = this_x00297;
  this_x00298 = operator_new(4);
  Dispatcher_OperateRidableObject::Dispatcher_OperateRidableObject(this_x00298);
  *(Dispatcher_OperateRidableObject **)(this + 0x4f4) = this_x00298;
  this_x00299 = operator_new(4);
  Dispatcher_SelectUltimateDifficulty::Dispatcher_SelectUltimateDifficulty(this_x00299);
  *(Dispatcher_SelectUltimateDifficulty **)(this + 0x4f8) = this_x00299;
  this_x00300 = operator_new(4);
  Dispatcher_AuctionBuyItemApiece::Dispatcher_AuctionBuyItemApiece(this_x00300);
  *(Dispatcher_AuctionBuyItemApiece **)(this + 0x53c) = this_x00300;
  this_x00301 = operator_new(4);
  Dispatcher_Security_PI_HashModulation_S2C::Dispatcher_Security_PI_HashModulation_S2C(this_x00301);
  *(Dispatcher_Security_PI_HashModulation_S2C **)(this + 0x4fc) = this_x00301;
  this_x00302 = operator_new(4);
  Dispatcher_Security_PI_HashModulation_C2C::Dispatcher_Security_PI_HashModulation_C2C(this_x00302);
  *(Dispatcher_Security_PI_HashModulation_C2C **)(this + 0x500) = this_x00302;
  this_x00303 = operator_new(4);
  Dispatcer_polic_one_to_one_chat_disable::Dispatcer_polic_one_to_one_chat_disable(this_x00303);
  *(Dispatcer_polic_one_to_one_chat_disable **)(this + 0x528) = this_x00303;
  this_x00304 = operator_new(4);
  Dispatcher_police_queryCharacName_useMid::Dispatcher_police_queryCharacName_useMid(this_x00304);
  *(Dispatcher_police_queryCharacName_useMid **)(this + 0x52c) = this_x00304;
  this_x00305 = operator_new(4);
  Dispatcher_ValidateScriptHash::Dispatcher_ValidateScriptHash(this_x00305);
  *(Dispatcher_ValidateScriptHash **)(this + 0x538) = this_x00305;
  this_x00306 = operator_new(4);
  Dispatcher_Change_PartyMemberPosition::Dispatcher_Change_PartyMemberPosition(this_x00306);
  *(Dispatcher_Change_PartyMemberPosition **)(this + 0x540) = this_x00306;
  this_x00307 = operator_new(4);
  Dispatcher_ScanBotByDll::Dispatcher_ScanBotByDll(this_x00307);
  *(Dispatcher_ScanBotByDll **)(this + 0x548) = this_x00307;
  this_x00308 = operator_new(4);
  Dispatcher_UseLimitCube::Dispatcher_UseLimitCube(this_x00308);
  *(Dispatcher_UseLimitCube **)(this + 0x54c) = this_x00308;
  this_x00309 = operator_new(4);
  Dispatcher_RefreshGuildInfo::Dispatcher_RefreshGuildInfo(this_x00309);
  *(Dispatcher_RefreshGuildInfo **)(this + 0x550) = this_x00309;
  this_x00310 = operator_new(4);
  Dispatcher_DonateGuildFund::Dispatcher_DonateGuildFund(this_x00310);
  *(Dispatcher_DonateGuildFund **)(this + 0x56c) = this_x00310;
  this_x00311 = operator_new(4);
  Dispatcher_CheckJoinGuild::Dispatcher_CheckJoinGuild(this_x00311);
  *(Dispatcher_CheckJoinGuild **)(this + 0x570) = this_x00311;
  this_x00312 = operator_new(4);
  Dispatcher_RequestJoinGuild::Dispatcher_RequestJoinGuild(this_x00312);
  *(Dispatcher_RequestJoinGuild **)(this + 0x574) = this_x00312;
  this_x00313 = operator_new(4);
  Dispatcher_CancelJoinGuild::Dispatcher_CancelJoinGuild(this_x00313);
  *(Dispatcher_CancelJoinGuild **)(this + 0x578) = this_x00313;
  this_x00314 = operator_new(4);
  Dispatcher_ApproveJoinGuild::Dispatcher_ApproveJoinGuild(this_x00314);
  *(Dispatcher_ApproveJoinGuild **)(this + 0x57c) = this_x00314;
  this_x00315 = operator_new(4);
  Dispatcher_DenyJoinGuild::Dispatcher_DenyJoinGuild(this_x00315);
  *(Dispatcher_DenyJoinGuild **)(this + 0x580) = this_x00315;
  this_x00316 = operator_new(4);
  Dispatcher_GuildJoinList::Dispatcher_GuildJoinList(this_x00316);
  *(Dispatcher_GuildJoinList **)(this + 0x584) = this_x00316;
  this_x00317 = operator_new(4);
  Dispatcher_GuildAttendanceInfo::Dispatcher_GuildAttendanceInfo(this_x00317);
  *(Dispatcher_GuildAttendanceInfo **)(this + 0x590) = this_x00317;
  this_x00318 = operator_new(4);
  Dispatcher_MotionHack::Dispatcher_MotionHack(this_x00318);
  *(Dispatcher_MotionHack **)(this + 0x598) = this_x00318;
  this_x00319 = operator_new(4);
  APSystem::Dispatcher_ClearAction::Dispatcher_ClearAction(this_x00319);
  *(Dispatcher_ClearAction **)(this + 0x8a0) = this_x00319;
  this_x00320 = operator_new(4);
  APSystem::Dispatcher_GetTodayReward::Dispatcher_GetTodayReward(this_x00320);
  *(Dispatcher_GetTodayReward **)(this + 0x8a4) = this_x00320;
  this_x00321 = operator_new(4);
  Dispatcher_JoinGuildInfo::Dispatcher_JoinGuildInfo(this_x00321);
  *(Dispatcher_JoinGuildInfo **)(this + 0x5b8) = this_x00321;
  this_x00322 = operator_new(4);
  Dispatcher_ScanBotByDrv::Dispatcher_ScanBotByDrv(this_x00322);
  *(Dispatcher_ScanBotByDrv **)(this + 0x5bc) = this_x00322;
  this_x00323 = operator_new(4);
  Dispatcher_AskRematch::Dispatcher_AskRematch(this_x00323);
  *(Dispatcher_AskRematch **)(this + 0x5c0) = this_x00323;
  this_x00324 = operator_new(4);
  Dispatcher_SaveGameOption_QuickChatting::Dispatcher_SaveGameOption_QuickChatting(this_x00324);
  *(Dispatcher_SaveGameOption_QuickChatting **)(this + 0x5c4) = this_x00324;
  this_x00325 = operator_new(4);
  Dispatcher_Select_3rdChronicleItem_ForEnchant::Dispatcher_Select_3rdChronicleItem_ForEnchant
            (this_x00325);
  *(Dispatcher_Select_3rdChronicleItem_ForEnchant **)(this + 0x5c8) = this_x00325;
  this_x00326 = operator_new(4);
  Dispatcher_Enchant_3rdChronicleItem::Dispatcher_Enchant_3rdChronicleItem(this_x00326);
  *(Dispatcher_Enchant_3rdChronicleItem **)(this + 0x5cc) = this_x00326;
  this_x00327 = operator_new(4);
  Dispatcher_GoldTakeIncreasingAmount::Dispatcher_GoldTakeIncreasingAmount(this_x00327);
  *(Dispatcher_GoldTakeIncreasingAmount **)(this + 0x5d0) = this_x00327;
  this_x00328 = operator_new(4);
  DisPatcher_CheckSecurityProtection::DisPatcher_CheckSecurityProtection(this_x00328);
  *(DisPatcher_CheckSecurityProtection **)(this + 0x5d8) = this_x00328;
  this_x00329 = operator_new(4);
  Dispatcher_FairPvPScore::Dispatcher_FairPvPScore(this_x00329);
  *(Dispatcher_FairPvPScore **)(this + 0x5dc) = this_x00329;
  this_x00330 = operator_new(4);
  Dispatcher_PvpMissionHPPercent::Dispatcher_PvpMissionHPPercent(this_x00330);
  *(Dispatcher_PvpMissionHPPercent **)(this + 0x5e0) = this_x00330;
  this_x00331 = operator_new(4);
  Dispatcher_PvpMissionComboClear::Dispatcher_PvpMissionComboClear(this_x00331);
  *(Dispatcher_PvpMissionComboClear **)(this + 0x66c) = this_x00331;
  this_x00332 = operator_new(4);
  Dispatcher_WarRoomWpPerMonster::Dispatcher_WarRoomWpPerMonster(this_x00332);
  *(Dispatcher_WarRoomWpPerMonster **)(this + 0x5e4) = this_x00332;
  this_x00333 = operator_new(4);
  Dispatcher_Equipslot_Switch::Dispatcher_Equipslot_Switch(this_x00333);
  *(Dispatcher_Equipslot_Switch **)(this + 0x634) = this_x00333;
  this_x00334 = operator_new(4);
  Dispatcher_Expand_Equipslot_Flag_Update::Dispatcher_Expand_Equipslot_Flag_Update(this_x00334);
  *(Dispatcher_Expand_Equipslot_Flag_Update **)(this + 0x638) = this_x00334;
  this_x00335 = operator_new(4);
  Dispatcher_UnsealRandomOption::Dispatcher_UnsealRandomOption(this_x00335);
  *(Dispatcher_UnsealRandomOption **)(this + 0x644) = this_x00335;
  this_x00336 = operator_new(4);
  Dispatcher_UseCreatureEvolutionItem::Dispatcher_UseCreatureEvolutionItem(this_x00336);
  *(Dispatcher_UseCreatureEvolutionItem **)(this + 0x510) = this_x00336;
  this_x00337 = operator_new(4);
  DisPatcher_EventDungeon_DestoryObject::DisPatcher_EventDungeon_DestoryObject(this_x00337);
  *(DisPatcher_EventDungeon_DestoryObject **)(this + 0x86c) = this_x00337;
  this_x00338 = operator_new(4);
  DisPatcher_EventDungeon_ClearRoom::DisPatcher_EventDungeon_ClearRoom(this_x00338);
  *(DisPatcher_EventDungeon_ClearRoom **)(this + 0x870) = this_x00338;
  this_x00339 = operator_new(4);
  Dispatcher_Buy_Charac_Status_Using_QP::Dispatcher_Buy_Charac_Status_Using_QP(this_x00339);
  *(Dispatcher_Buy_Charac_Status_Using_QP **)(this + 0x63c) = this_x00339;
  this_x00340 = operator_new(4);
  Dispatcher_Clear_Used_QP::Dispatcher_Clear_Used_QP(this_x00340);
  *(Dispatcher_Clear_Used_QP **)(this + 0x640) = this_x00340;
  this_x00341 = operator_new(4);
  Dispatcher_ChangeHostWarRoom::Dispatcher_ChangeHostWarRoom(this_x00341);
  *(Dispatcher_ChangeHostWarRoom **)(this + 0x650) = this_x00341;
  this_x00342 = operator_new(4);
  Dispatcher_VerifyPrivateStoreItem::Dispatcher_VerifyPrivateStoreItem(this_x00342);
  *(Dispatcher_VerifyPrivateStoreItem **)(this + 0x654) = this_x00342;
  this_x00343 = operator_new(4);
  Dispather_RegenerationRandomOption::Dispather_RegenerationRandomOption(this_x00343);
  *(Dispather_RegenerationRandomOption **)(this + 0x65c) = this_x00343;
  this_x00344 = operator_new(4);
  Dispatcher_SelectItem::Dispatcher_SelectItem(this_x00344);
  *(Dispatcher_SelectItem **)(this + 0x658) = this_x00344;
  this_x00345 = operator_new(4);
  Dispatcher_UpgradeCargo::Dispatcher_UpgradeCargo(this_x00345);
  *(Dispatcher_UpgradeCargo **)(this + 0x660) = this_x00345;
  this_x00346 = operator_new(4);
  Dispatcher_TitleBookPut::Dispatcher_TitleBookPut(this_x00346);
  *(Dispatcher_TitleBookPut **)(this + 0x670) = this_x00346;
  this_x00347 = operator_new(4);
  Dispatcher_TitleBookGet::Dispatcher_TitleBookGet(this_x00347);
  *(Dispatcher_TitleBookGet **)(this + 0x674) = this_x00347;
  this_x00348 = operator_new(4);
  Dispatcher_TitleBookOtherUser::Dispatcher_TitleBookOtherUser(this_x00348);
  *(Dispatcher_TitleBookOtherUser **)(this + 0x6a0) = this_x00348;
  this_x00349 = operator_new(4);
  Dispatcher_AchievementTrigger::Dispatcher_AchievementTrigger(this_x00349);
  *(Dispatcher_AchievementTrigger **)(this + 0x684) = this_x00349;
  this_x00350 = operator_new(4);
  Dispatcher_CharacSlotExtendEffect::Dispatcher_CharacSlotExtendEffect(this_x00350);
  *(Dispatcher_CharacSlotExtendEffect **)(this + 0x67c) = this_x00350;
  this_x00351 = operator_new(4);
  Dispatcher_ItemHyperLinkMessage::Dispatcher_ItemHyperLinkMessage(this_x00351);
  *(Dispatcher_ItemHyperLinkMessage **)(this + 0x6a4) = this_x00351;
  this_x00352 = operator_new(4);
  Dispatcher_UserHistoryLog::Dispatcher_UserHistoryLog(this_x00352);
  *(Dispatcher_UserHistoryLog **)(this + 0x6a8) = this_x00352;
  this_x00353 = operator_new(4);
  Dispatcher_UpgradeInventory::Dispatcher_UpgradeInventory(this_x00353);
  *(Dispatcher_UpgradeInventory **)(this + 0x6bc) = this_x00353;
  this_x00354 = operator_new(4);
  Dispatcher_Select_Item_Grwoth_Power::Dispatcher_Select_Item_Grwoth_Power(this_x00354);
  *(Dispatcher_Select_Item_Grwoth_Power **)(this + 0x6c0) = this_x00354;
  this_x00355 = operator_new(4);
  Dispatcher_Request_Seria_Buff::Dispatcher_Request_Seria_Buff(this_x00355);
  *(Dispatcher_Request_Seria_Buff **)(this + 0x6c4) = this_x00355;
  this_x00356 = operator_new(4);
  Dispatcher_AbnormalUseStackable::Dispatcher_AbnormalUseStackable(this_x00356);
  *(Dispatcher_AbnormalUseStackable **)(this + 0x6d4) = this_x00356;
  this_x00357 = operator_new(4);
  Dispatcher_ChangeRandomOption::Dispatcher_ChangeRandomOption(this_x00357);
  *(Dispatcher_ChangeRandomOption **)(this + 0x6d8) = this_x00357;
  this_x00358 = operator_new(4);
  DispatcherResetRandomOption::DispatcherResetRandomOption(this_x00358);
  *(DispatcherResetRandomOption **)(this + 0x720) = this_x00358;
  this_x00359 = operator_new(4);
  Dispatcher_ItemDictionary::Dispatcher_ItemDictionary(this_x00359);
  *(Dispatcher_ItemDictionary **)(this + 0x6e0) = this_x00359;
  this_x00360 = operator_new(4);
  Dispatcher_Mercenary_Return::Dispatcher_Mercenary_Return(this_x00360);
  *(Dispatcher_Mercenary_Return **)(this + 0x6e4) = this_x00360;
  this_x00361 = operator_new(4);
  Dispatcher_Mercenary_Info::Dispatcher_Mercenary_Info(this_x00361);
  *(Dispatcher_Mercenary_Info **)(this + 0x6e8) = this_x00361;
  this_x00362 = operator_new(4);
  Dispatcher_Mercenary_Competition::Dispatcher_Mercenary_Competition(this_x00362);
  *(Dispatcher_Mercenary_Competition **)(this + 0x6ec) = this_x00362;
  this_x00363 = operator_new(4);
  Dispatcher_Register_Quick_Party::Dispatcher_Register_Quick_Party(this_x00363);
  *(Dispatcher_Register_Quick_Party **)(this + 0x6f0) = this_x00363;
  this_x00364 = operator_new(4);
  Dispatcher_Cancel_Quick_Party::Dispatcher_Cancel_Quick_Party(this_x00364);
  *(Dispatcher_Cancel_Quick_Party **)(this + 0x6f4) = this_x00364;
  this_x00365 = operator_new(4);
  Dispatcher_Direct_Entrance_Quick_Party::Dispatcher_Direct_Entrance_Quick_Party(this_x00365);
  *(Dispatcher_Direct_Entrance_Quick_Party **)(this + 0x6f8) = this_x00365;
  this_x00366 = operator_new(4);
  Dispatcher_Exchange_Random_Item_Reward::Dispatcher_Exchange_Random_Item_Reward(this_x00366);
  *(Dispatcher_Exchange_Random_Item_Reward **)(this + 0x704) = this_x00366;
  this_x00367 = operator_new(4);
  Dispatcher_Avatar_Disjoint_Random_Reward::Dispatcher_Avatar_Disjoint_Random_Reward(this_x00367);
  *(Dispatcher_Avatar_Disjoint_Random_Reward **)(this + 0x708) = this_x00367;
  this_x00368 = operator_new(4);
  Dispatcher_RequestAssaultPrice::Dispatcher_RequestAssaultPrice(this_x00368);
  *(Dispatcher_RequestAssaultPrice **)(this + 0x6fc) = this_x00368;
  this_x00369 = operator_new(4);
  Dispatcher_Check3rdPartyConcent::Dispatcher_Check3rdPartyConcent(this_x00369);
  *(Dispatcher_Check3rdPartyConcent **)(this + 0x70c) = this_x00369;
  this_x00370 = operator_new(4);
  Dispatcher_Float_RDATA_Modulation::Dispatcher_Float_RDATA_Modulation(this_x00370);
  *(Dispatcher_Float_RDATA_Modulation **)(this + 0x714) = this_x00370;
  this_x00371 = operator_new(4);
  Dispatcher_Req_Urgent_Quest::Dispatcher_Req_Urgent_Quest(this_x00371);
  *(Dispatcher_Req_Urgent_Quest **)(this + 0x718) = this_x00371;
  this_x00372 = operator_new(4);
  Dispatcher_Debug_Clear_Quest::Dispatcher_Debug_Clear_Quest(this_x00372);
  *(Dispatcher_Debug_Clear_Quest **)(this + 0x724) = this_x00372;
  this_x00373 = operator_new(4);
  Dispatcher_TournamentRewardSelectState::Dispatcher_TournamentRewardSelectState(this_x00373);
  *(Dispatcher_TournamentRewardSelectState **)(this + 0x728) = this_x00373;
  this_x00374 = operator_new(4);
  Dispatcher_TournamentRewardSelect::Dispatcher_TournamentRewardSelect(this_x00374);
  *(Dispatcher_TournamentRewardSelect **)(this + 0x72c) = this_x00374;
  this_x00375 = operator_new(4);
  Dispatcher_LimitNpcBuyItem::Dispatcher_LimitNpcBuyItem(this_x00375);
  *(Dispatcher_LimitNpcBuyItem **)(this + 0x744) = this_x00375;
  this_x00376 = operator_new(4);
  Dispatcher_ObjectBringUp::Dispatcher_ObjectBringUp(this_x00376);
  *(Dispatcher_ObjectBringUp **)(this + 0x754) = this_x00376;
  this_x00377 = operator_new(4);
  Dispatcher_PrecheckSoloTeleport::Dispatcher_PrecheckSoloTeleport(this_x00377);
  *(Dispatcher_PrecheckSoloTeleport **)(this + 0x758) = this_x00377;
  this_x00378 = operator_new(4);
  Dispatcher_SoloTeleport::Dispatcher_SoloTeleport(this_x00378);
  *(Dispatcher_SoloTeleport **)(this + 0x75c) = this_x00378;
  this_x00379 = operator_new(4);
  Dispatcher_SaveGameOption_ChattingEmoticon::Dispatcher_SaveGameOption_ChattingEmoticon
            (this_x00379);
  *(Dispatcher_SaveGameOption_ChattingEmoticon **)(this + 0x764) = this_x00379;
  this_x00380 = operator_new(4);
  advancealtar::Dispatcher_StartGame::Dispatcher_StartGame(this_x00380);
  *(Dispatcher_StartGame **)(this + 0x8f0) = this_x00380;
  this_x00381 = operator_new(4);
  advancealtar::Dispatcher_BuyItem::Dispatcher_BuyItem(this_x00381);
  *(Dispatcher_BuyItem **)(this + 0x8f4) = this_x00381;
  this_x00382 = operator_new(4);
  advancealtar::Dispatcher_SetSlot::Dispatcher_SetSlot(this_x00382);
  *(Dispatcher_SetSlot **)(this + 0x8f8) = this_x00382;
  this_x00383 = operator_new(4);
  advancealtar::Dispatcher_UpgradeGage::Dispatcher_UpgradeGage(this_x00383);
  *(Dispatcher_UpgradeGage **)(this + 0x8fc) = this_x00383;
  this_x00384 = operator_new(4);
  advancealtar::Dispatcher_SummonUnit::Dispatcher_SummonUnit(this_x00384);
  *(Dispatcher_SummonUnit **)(this + 0x900) = this_x00384;
  this_x00385 = operator_new(4);
  advancealtar::Dispatcher_ExchangeSlot::Dispatcher_ExchangeSlot(this_x00385);
  *(Dispatcher_ExchangeSlot **)(this + 0x904) = this_x00385;
  this_x00386 = operator_new(4);
  advancealtar::Dispatcher_Pause::Dispatcher_Pause(this_x00386);
  *(Dispatcher_Pause **)(this + 0x908) = this_x00386;
  this_x00387 = operator_new(4);
  advancealtar::Dispatcher_GetAchievementReward::Dispatcher_GetAchievementReward(this_x00387);
  *(Dispatcher_GetAchievementReward **)(this + 0x90c) = this_x00387;
  this_x00388 = operator_new(4);
  advancealtar::Dispatcher_ResetStar::Dispatcher_ResetStar(this_x00388);
  *(Dispatcher_ResetStar **)(this + 0x910) = this_x00388;
  this_x00389 = operator_new(4);
  ARAD::DISPATCHER::Dispatcher_AradJumpingCharacter::Dispatcher_AradJumpingCharacter(this_x00389);
  *(Dispatcher_AradJumpingCharacter **)(this + 0x924) = this_x00389;
  this_x00390 = operator_new(4);
  ARAD::DISPATCHER::Dispatcher_AvartarRoulette::Dispatcher_AvartarRoulette(this_x00390);
  *(Dispatcher_AvartarRoulette **)(this + 0x928) = this_x00390;
  this_x00391 = operator_new(4);
  ARAD::DISPATCHER::Dispatcher_AvartarCoinCount::Dispatcher_AvartarCoinCount(this_x00391);
  *(Dispatcher_AvartarCoinCount **)(this + 0x92c) = this_x00391;
  this_x00392 = operator_new(4);
  ARAD::DISPATCHER::Dispatcher_AvartarHiddenOptionChange::Dispatcher_AvartarHiddenOptionChange
            (this_x00392);
  *(Dispatcher_AvartarHiddenOptionChange **)(this + 0x930) = this_x00392;
  this_x00393 = operator_new(4);
  ARAD::DISPATCHER::Dispatcher_AradUseAvatarRecharge::Dispatcher_AradUseAvatarRecharge(this_x00393);
  *(Dispatcher_AradUseAvatarRecharge **)(this + 0x934) = this_x00393;
  this_x00394 = operator_new(4);
  ARAD::DISPATCHER::Dispatcher_AradAvatarConvert::Dispatcher_AradAvatarConvert(this_x00394);
  *(Dispatcher_AradAvatarConvert **)(this + 0x93c) = this_x00394;
  this_x00395 = operator_new(4);
  ARAD::DISPATCHER::Dispatcher_AradEmblemCompound::Dispatcher_AradEmblemCompound(this_x00395);
  *(Dispatcher_AradEmblemCompound **)(this + 0x938) = this_x00395;
  this_x00396 = operator_new(4);
  Dispatcher_ImageCommunicationEquipmentUse::Dispatcher_ImageCommunicationEquipmentUse(this_x00396);
  *(Dispatcher_ImageCommunicationEquipmentUse **)(this + 0x770) = this_x00396;
  this_x00397 = operator_new(4);
  Dispatcher_CompatibilityIndex::Dispatcher_CompatibilityIndex(this_x00397);
  *(Dispatcher_CompatibilityIndex **)(this + 0x774) = this_x00397;
  this_x00398 = operator_new(4);
  Dispatcher_P2P_Statistics::Dispatcher_P2P_Statistics(this_x00398);
  *(Dispatcher_P2P_Statistics **)(this + 0x77c) = this_x00398;
  this_x00399 = operator_new(4);
  Dispatcher_InformNotice::Dispatcher_InformNotice(this_x00399);
  *(Dispatcher_InformNotice **)(this + 0x778) = this_x00399;
  this_x00400 = operator_new(4);
  Dispatcher_InformNotice_2nd::Dispatcher_InformNotice_2nd(this_x00400);
  *(Dispatcher_InformNotice_2nd **)(this + 0x7e0) = this_x00400;
  this_x00401 = operator_new(4);
  Dispatcher_VerifyCreatureQuest::Dispatcher_VerifyCreatureQuest(this_x00401);
  *(Dispatcher_VerifyCreatureQuest **)(this + 0x780) = this_x00401;
  this_x00402 = operator_new(4);
  Dispatcher_CollectItems::Dispatcher_CollectItems(this_x00402);
  *(Dispatcher_CollectItems **)(this + 0x78c) = this_x00402;
  this_x00403 = operator_new(4);
  Dispatcher_TutorialLevelUp::Dispatcher_TutorialLevelUp(this_x00403);
  *(Dispatcher_TutorialLevelUp **)(this + 0x790) = this_x00403;
  this_x00404 = operator_new(4);
  Dispatcher_PcRoomPlayTimeReward::Dispatcher_PcRoomPlayTimeReward(this_x00404);
  *(Dispatcher_PcRoomPlayTimeReward **)(this + 0x7b4) = this_x00404;
  this_x00405 = operator_new(4);
  Dispatcher_PcRoomRentItem::Dispatcher_PcRoomRentItem(this_x00405);
  *(Dispatcher_PcRoomRentItem **)(this + 0x7b8) = this_x00405;
  this_x00406 = operator_new(4);
  Dispatcher_SeriaRoom_Deco_Event::Dispatcher_SeriaRoom_Deco_Event(this_x00406);
  *(Dispatcher_SeriaRoom_Deco_Event **)(this + 0x7bc) = this_x00406;
  this_x00407 = operator_new(4);
  Dispatcher_BlueMarble::Dispatcher_BlueMarble(this_x00407);
  *(Dispatcher_BlueMarble **)(this + 0x7c0) = this_x00407;
  this_x00408 = operator_new(4);
  Dispatcher_BlueMarbleConfirmInfo::Dispatcher_BlueMarbleConfirmInfo(this_x00408);
  *(Dispatcher_BlueMarbleConfirmInfo **)(this + 0x7f0) = this_x00408;
  this_x00409 = operator_new(4);
  Dispatcher_UseDye::Dispatcher_UseDye(this_x00409);
  *(Dispatcher_UseDye **)(this + 0x7cc) = this_x00409;
  this_x00410 = operator_new(4);
  Dispatcher_GrowthWeaponEventChangeInfinity::Dispatcher_GrowthWeaponEventChangeInfinity
            (this_x00410);
  *(Dispatcher_GrowthWeaponEventChangeInfinity **)(this + 0x7e4) = this_x00410;
  this_x00411 = operator_new(4);
  Dispatcher_GrowthWeaponEventUseMaterial::Dispatcher_GrowthWeaponEventUseMaterial(this_x00411);
  *(Dispatcher_GrowthWeaponEventUseMaterial **)(this + 0x7e8) = this_x00411;
  this_x00412 = operator_new(4);
  Dispatcher_ComboSkill::Dispatcher_ComboSkill(this_x00412);
  *(Dispatcher_ComboSkill **)(this + 0x7f4) = this_x00412;
  this_x00413 = operator_new(4);
  Dispatcher_ComboSkillExtensionQuickSlotReset::Dispatcher_ComboSkillExtensionQuickSlotReset
            (this_x00413);
  *(Dispatcher_ComboSkillExtensionQuickSlotReset **)(this + 0x7fc) = this_x00413;
  this_x00414 = operator_new(4);
  Dispatcher_UseRenameCard::Dispatcher_UseRenameCard(this_x00414);
  *(Dispatcher_UseRenameCard **)(this + 0x7f8) = this_x00414;
  this_x00415 = operator_new(4);
  Dispatcher_CeraPackageOpen::Dispatcher_CeraPackageOpen(this_x00415);
  *(Dispatcher_CeraPackageOpen **)(this + 0x81c) = this_x00415;
  this_x00416 = operator_new(4);
  Dispatcher_GrowthCreatureChangeInfinityCreature::Dispatcher_GrowthCreatureChangeInfinityCreature
            (this_x00416);
  *(Dispatcher_GrowthCreatureChangeInfinityCreature **)(this + 0x800) = this_x00416;
  this_x00417 = operator_new(4);
  Dispatcher_SeriaRoom_Ani_Deco_Event::Dispatcher_SeriaRoom_Ani_Deco_Event(this_x00417);
  *(Dispatcher_SeriaRoom_Ani_Deco_Event **)(this + 0x804) = this_x00417;
  this_x00418 = operator_new(4);
  Dispatcher_UpdateContractOfCubeInfo::Dispatcher_UpdateContractOfCubeInfo(this_x00418);
  *(Dispatcher_UpdateContractOfCubeInfo **)(this + 0x838) = this_x00418;
  this_x00419 = operator_new(4);
  Dispatcher_LevelupSupportReqestItem::Dispatcher_LevelupSupportReqestItem(this_x00419);
  *(Dispatcher_LevelupSupportReqestItem **)(this + 0x954) = this_x00419;
  this_x00420 = operator_new(4);
  Dispatcher_P2PHolePunchingSuccessRateStatistics::Dispatcher_P2PHolePunchingSuccessRateStatistics
            (this_x00420);
  *(Dispatcher_P2PHolePunchingSuccessRateStatistics **)(this + 0x95c) = this_x00420;
  this_x00421 = operator_new(4);
  ARAD::DISPATCHER::Dispatcher_EventCreateDnfRequest::Dispatcher_EventCreateDnfRequest(this_x00421);
  *(Dispatcher_EventCreateDnfRequest **)(this + 0x960) = this_x00421;
  this_x00422 = operator_new(4);
  ARAD::DISPATCHER::Dispatcher_RequestPrcoomDayilyReward::Dispatcher_RequestPrcoomDayilyReward
            (this_x00422);
  *(Dispatcher_RequestPrcoomDayilyReward **)(this + 0x964) = this_x00422;
  this_x00423 = operator_new(4);
  Dispatcher_HeroMissionEventState_Reward::Dispatcher_HeroMissionEventState_Reward(this_x00423);
  *(Dispatcher_HeroMissionEventState_Reward **)(this + 0x968) = this_x00423;
  return;
}
```
