# BlueMarbleInfoScript

`_ZN20BlueMarbleInfoScriptC1Ev`

`BlueMarbleInfoScript::BlueMarbleInfoScript()`

| 类 | 地址 |
|---|---|
| `BlueMarbleInfoScript` | `0x088d5690` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088d5690  _ZN20BlueMarbleInfoScriptC1Ev
#           BlueMarbleInfoScript::BlueMarbleInfoScript()
# range [0x088d5690, 0x088d57bf]
088d5690 +0x000:  push   %ebp
088d5691 +0x001:  mov    %esp,%ebp
088d5693 +0x003:  push   %esi
088d5694 +0x004:  push   %ebx
088d5695 +0x005:  sub    $0x10,%esp
088d5698 +0x008:  mov    0x8(%ebp),%eax
088d569b +0x00b:  add    $0x24,%eax
088d569e +0x00e:  mov    %eax,(%esp)
088d56a1 +0x011:  call   088d68ae <_GLOBAL__I__ZN20BlueMarbleTileScriptC2Ev+0x130>  ; global constructors keyed to BlueMarbleTileScript::BlueMarbleTileScript()+0x130
088d56a6 +0x016:  mov    0x8(%ebp),%eax
088d56a9 +0x019:  add    $0x44,%eax
088d56ac +0x01c:  mov    %eax,(%esp)
088d56af +0x01f:  call   088d68c2 <_GLOBAL__I__ZN20BlueMarbleTileScriptC2Ev+0x144>  ; global constructors keyed to BlueMarbleTileScript::BlueMarbleTileScript()+0x144
088d56b4 +0x024:  mov    0x8(%ebp),%eax
088d56b7 +0x027:  add    $0x50,%eax
088d56ba +0x02a:  mov    %eax,(%esp)
088d56bd +0x02d:  call   088d68c2 <_GLOBAL__I__ZN20BlueMarbleTileScriptC2Ev+0x144>  ; global constructors keyed to BlueMarbleTileScript::BlueMarbleTileScript()+0x144
088d56c2 +0x032:  mov    0x8(%ebp),%eax
088d56c5 +0x035:  add    $0x5c,%eax
088d56c8 +0x038:  mov    %eax,(%esp)
088d56cb +0x03b:  call   088d68c2 <_GLOBAL__I__ZN20BlueMarbleTileScriptC2Ev+0x144>  ; global constructors keyed to BlueMarbleTileScript::BlueMarbleTileScript()+0x144
088d56d0 +0x040:  mov    0x8(%ebp),%eax
088d56d3 +0x043:  add    $0x68,%eax
088d56d6 +0x046:  mov    %eax,(%esp)
088d56d9 +0x049:  call   088d68d6 <_GLOBAL__I__ZN20BlueMarbleTileScriptC2Ev+0x158>  ; global constructors keyed to BlueMarbleTileScript::BlueMarbleTileScript()+0x158
088d56de +0x04e:  mov    0x8(%ebp),%eax
088d56e1 +0x051:  add    $0x74,%eax
088d56e4 +0x054:  mov    %eax,(%esp)
088d56e7 +0x057:  call   088d68ea <_GLOBAL__I__ZN20BlueMarbleTileScriptC2Ev+0x16c>  ; global constructors keyed to BlueMarbleTileScript::BlueMarbleTileScript()+0x16c
088d56ec +0x05c:  mov    0x8(%ebp),%eax
088d56ef +0x05f:  sub    $0xffffff80,%eax
088d56f2 +0x062:  mov    %eax,(%esp)
088d56f5 +0x065:  call   088d68fe <_GLOBAL__I__ZN20BlueMarbleTileScriptC2Ev+0x180>  ; global constructors keyed to BlueMarbleTileScript::BlueMarbleTileScript()+0x180
088d56fa +0x06a:  mov    0x8(%ebp),%eax
088d56fd +0x06d:  mov    %eax,(%esp)
088d5700 +0x070:  call   088d57c0 <_ZN20BlueMarbleInfoScript5clearEv>  ; BlueMarbleInfoScript::clear()
088d5705 +0x075:  jmp    088d57b8 <+0x128>
088d570a +0x07a:  mov    %edx,%ebx
088d570c +0x07c:  mov    %eax,%esi
088d570e +0x07e:  mov    0x8(%ebp),%eax
088d5711 +0x081:  sub    $0xffffff80,%eax
088d5714 +0x084:  mov    %eax,(%esp)
088d5717 +0x087:  call   08392a70 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22510>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22510
088d571c +0x08c:  mov    %esi,%eax
088d571e +0x08e:  mov    %ebx,%edx
088d5720 +0x090:  jmp    088d5722 <+0x92>
088d5722 +0x092:  mov    %edx,%ebx
088d5724 +0x094:  mov    %eax,%esi
088d5726 +0x096:  mov    0x8(%ebp),%eax
088d5729 +0x099:  add    $0x74,%eax
088d572c +0x09c:  mov    %eax,(%esp)
088d572f +0x09f:  call   08392a12 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x224b2>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x224b2
088d5734 +0x0a4:  mov    %esi,%eax
088d5736 +0x0a6:  mov    %ebx,%edx
088d5738 +0x0a8:  jmp    088d573a <+0xaa>
088d573a +0x0aa:  mov    %edx,%ebx
088d573c +0x0ac:  mov    %eax,%esi
088d573e +0x0ae:  mov    0x8(%ebp),%eax
088d5741 +0x0b1:  add    $0x68,%eax
088d5744 +0x0b4:  mov    %eax,(%esp)
088d5747 +0x0b7:  call   083929b4 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22454>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22454
088d574c +0x0bc:  mov    %esi,%eax
088d574e +0x0be:  mov    %ebx,%edx
088d5750 +0x0c0:  jmp    088d5752 <+0xc2>
088d5752 +0x0c2:  mov    %edx,%ebx
088d5754 +0x0c4:  mov    %eax,%esi
088d5756 +0x0c6:  mov    0x8(%ebp),%eax
088d5759 +0x0c9:  add    $0x5c,%eax
088d575c +0x0cc:  mov    %eax,(%esp)
088d575f +0x0cf:  call   08392956 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x223f6>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x223f6
088d5764 +0x0d4:  mov    %esi,%eax
088d5766 +0x0d6:  mov    %ebx,%edx
088d5768 +0x0d8:  jmp    088d576a <+0xda>
088d576a +0x0da:  mov    %edx,%ebx
088d576c +0x0dc:  mov    %eax,%esi
088d576e +0x0de:  mov    0x8(%ebp),%eax
088d5771 +0x0e1:  add    $0x50,%eax
088d5774 +0x0e4:  mov    %eax,(%esp)
088d5777 +0x0e7:  call   08392956 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x223f6>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x223f6
088d577c +0x0ec:  mov    %esi,%eax
088d577e +0x0ee:  mov    %ebx,%edx
088d5780 +0x0f0:  jmp    088d5782 <+0xf2>
088d5782 +0x0f2:  mov    %edx,%ebx
088d5784 +0x0f4:  mov    %eax,%esi
088d5786 +0x0f6:  mov    0x8(%ebp),%eax
088d5789 +0x0f9:  add    $0x44,%eax
088d578c +0x0fc:  mov    %eax,(%esp)
088d578f +0x0ff:  call   08392956 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x223f6>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x223f6
088d5794 +0x104:  mov    %esi,%eax
088d5796 +0x106:  mov    %ebx,%edx
088d5798 +0x108:  jmp    088d579a <+0x10a>
088d579a +0x10a:  mov    %edx,%ebx
088d579c +0x10c:  mov    %eax,%esi
088d579e +0x10e:  mov    0x8(%ebp),%eax
088d57a1 +0x111:  add    $0x24,%eax
088d57a4 +0x114:  mov    %eax,(%esp)
088d57a7 +0x117:  call   083928f8 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x22398>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x22398
088d57ac +0x11c:  mov    %esi,%eax
088d57ae +0x11e:  mov    %ebx,%edx
088d57b0 +0x120:  mov    %eax,(%esp)
088d57b3 +0x123:  call   08ae3750 <_Unwind_Resume>
088d57b8 +0x128:  add    $0x10,%esp
088d57bb +0x12b:  pop    %ebx
088d57bc +0x12c:  pop    %esi
088d57bd +0x12d:  pop    %ebp
088d57be +0x12e:  ret
088d57bf +0x12f:  nop
```

## 反编译 C

```c
// BlueMarbleInfoScript::BlueMarbleInfoScript @ 0x88d5690

/* BlueMarbleInfoScript::BlueMarbleInfoScript() */

void __thiscall BlueMarbleInfoScript::BlueMarbleInfoScript(BlueMarbleInfoScript *this)

{
  std::vector<BlueMarbleDungeonDifficulty,std::allocator<BlueMarbleDungeonDifficulty>>::vector
            ((vector<BlueMarbleDungeonDifficulty,std::allocator<BlueMarbleDungeonDifficulty>> *)
             (this + 0x24));
                    /* try { // try from 088d56af to 088d56b3 has its CatchHandler @ 088d579a */
  std::vector<BlueMarbleRandomDungeonInfo,std::allocator<BlueMarbleRandomDungeonInfo>>::vector
            ((vector<BlueMarbleRandomDungeonInfo,std::allocator<BlueMarbleRandomDungeonInfo>> *)
             (this + 0x44));
                    /* try { // try from 088d56bd to 088d56c1 has its CatchHandler @ 088d5782 */
  std::vector<BlueMarbleRandomDungeonInfo,std::allocator<BlueMarbleRandomDungeonInfo>>::vector
            ((vector<BlueMarbleRandomDungeonInfo,std::allocator<BlueMarbleRandomDungeonInfo>> *)
             (this + 0x50));
                    /* try { // try from 088d56cb to 088d56cf has its CatchHandler @ 088d576a */
  std::vector<BlueMarbleRandomDungeonInfo,std::allocator<BlueMarbleRandomDungeonInfo>>::vector
            ((vector<BlueMarbleRandomDungeonInfo,std::allocator<BlueMarbleRandomDungeonInfo>> *)
             (this + 0x5c));
                    /* try { // try from 088d56d9 to 088d56dd has its CatchHandler @ 088d5752 */
  std::vector<BlueMarbleRandomItemInfo,std::allocator<BlueMarbleRandomItemInfo>>::vector
            ((vector<BlueMarbleRandomItemInfo,std::allocator<BlueMarbleRandomItemInfo>> *)
             (this + 0x68));
                    /* try { // try from 088d56e7 to 088d56eb has its CatchHandler @ 088d573a */
  std::vector<BlueMarbleRewardInfo,std::allocator<BlueMarbleRewardInfo>>::vector
            ((vector<BlueMarbleRewardInfo,std::allocator<BlueMarbleRewardInfo>> *)(this + 0x74));
                    /* try { // try from 088d56f5 to 088d56f9 has its CatchHandler @ 088d5722 */
  std::vector<BlueMarbleTilePos,std::allocator<BlueMarbleTilePos>>::vector
            ((vector<BlueMarbleTilePos,std::allocator<BlueMarbleTilePos>> *)(this + 0x80));
                    /* try { // try from 088d5700 to 088d5704 has its CatchHandler @ 088d570a */
  clear(this);
  return;
}
```
