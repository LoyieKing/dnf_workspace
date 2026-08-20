# CItemMakingSkill

`_GLOBAL__I__ZN16CItemMakingSkillC2Ev`

`global constructors keyed to CItemMakingSkill::CItemMakingSkill()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CItemMakingSkill` | `0x08545faf` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08545faf  _GLOBAL__I__ZN16CItemMakingSkillC2Ev
#           global constructors keyed to CItemMakingSkill::CItemMakingSkill()
# range [0x08545faf, 0x085461b3]
08545faf +0x000:  push   %ebp
08545fb0 +0x001:  mov    %esp,%ebp
08545fb2 +0x003:  sub    $0x18,%esp
08545fb5 +0x006:  movl   $0xffff,0x4(%esp)
08545fbd +0x00e:  movl   $0x1,(%esp)
08545fc4 +0x015:  call   08545f6f <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
08545fc9 +0x01a:  leave
08545fca +0x01b:  ret
08545fcb +0x01c:  nop
08545fcc +0x01d:  push   %ebp
08545fcd +0x01e:  mov    %esp,%ebp
08545fcf +0x020:  mov    0x8(%ebp),%eax
08545fd2 +0x023:  mov    0xf0(%eax),%eax
08545fd8 +0x029:  pop    %ebp
08545fd9 +0x02a:  ret
08545fda +0x02b:  push   %ebp
08545fdb +0x02c:  mov    %esp,%ebp
08545fdd +0x02e:  mov    0x8(%ebp),%eax
08545fe0 +0x031:  mov    0xf4(%eax),%eax
08545fe6 +0x037:  pop    %ebp
08545fe7 +0x038:  ret
08545fe8 +0x039:  push   %ebp
08545fe9 +0x03a:  mov    %esp,%ebp
08545feb +0x03c:  sub    $0x18,%esp
08545fee +0x03f:  mov    0x8(%ebp),%eax
08545ff1 +0x042:  mov    (%eax),%eax
08545ff3 +0x044:  mov    %eax,(%esp)
08545ff6 +0x047:  call   085460da <+0x12b>
08545ffb +0x04c:  leave
08545ffc +0x04d:  ret
08545ffd +0x04e:  nop
08545ffe +0x04f:  push   %ebp
08545fff +0x050:  mov    %esp,%ebp
08546001 +0x052:  push   %esi
08546002 +0x053:  push   %ebx
08546003 +0x054:  sub    $0x20,%esp
08546006 +0x057:  mov    0x8(%ebp),%ebx
08546009 +0x05a:  mov    %ebx,%esi
0854600b +0x05c:  lea    -0xc(%ebp),%eax
0854600e +0x05f:  mov    0xc(%ebp),%edx
08546011 +0x062:  mov    %edx,0x4(%esp)
08546015 +0x066:  mov    %eax,(%esp)
08546018 +0x069:  call   0811124c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x75e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x75e
0854601d +0x06e:  sub    $0x4,%esp
08546020 +0x071:  mov    -0xc(%ebp),%eax
08546023 +0x074:  mov    %eax,0x4(%esp)
08546027 +0x078:  mov    %esi,(%esp)
0854602a +0x07b:  call   0854614a <+0x19b>
0854602f +0x080:  mov    %ebx,%eax
08546031 +0x082:  mov    %ebx,%eax
08546033 +0x084:  lea    -0x8(%ebp),%esp
08546036 +0x087:  add    $0x0,%esp
08546039 +0x08a:  pop    %ebx
0854603a +0x08b:  pop    %esi
0854603b +0x08c:  pop    %ebp
0854603c +0x08d:  ret    $0x4
0854603f +0x090:  nop
08546040 +0x091:  push   %ebp
08546041 +0x092:  mov    %esp,%ebp
08546043 +0x094:  push   %esi
08546044 +0x095:  push   %ebx
08546045 +0x096:  sub    $0x20,%esp
08546048 +0x099:  mov    0x8(%ebp),%ebx
0854604b +0x09c:  mov    %ebx,%esi
0854604d +0x09e:  lea    -0xc(%ebp),%eax
08546050 +0x0a1:  mov    0xc(%ebp),%edx
08546053 +0x0a4:  mov    %edx,0x4(%esp)
08546057 +0x0a8:  mov    %eax,(%esp)
0854605a +0x0ab:  call   08111220 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x732>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x732
0854605f +0x0b0:  sub    $0x4,%esp
08546062 +0x0b3:  mov    -0xc(%ebp),%eax
08546065 +0x0b6:  mov    %eax,0x4(%esp)
08546069 +0x0ba:  mov    %esi,(%esp)
0854606c +0x0bd:  call   0854614a <+0x19b>
08546071 +0x0c2:  mov    %ebx,%eax
08546073 +0x0c4:  mov    %ebx,%eax
08546075 +0x0c6:  lea    -0x8(%ebp),%esp
08546078 +0x0c9:  add    $0x0,%esp
0854607b +0x0cc:  pop    %ebx
0854607c +0x0cd:  pop    %esi
0854607d +0x0ce:  pop    %ebp
0854607e +0x0cf:  ret    $0x4
08546081 +0x0d2:  push   %ebp
08546082 +0x0d3:  mov    %esp,%ebp
08546084 +0x0d5:  sub    $0x28,%esp
08546087 +0x0d8:  lea    -0x10(%ebp),%eax
0854608a +0x0db:  mov    0xc(%ebp),%edx
0854608d +0x0de:  mov    %edx,0x4(%esp)
08546091 +0x0e2:  mov    %eax,(%esp)
08546094 +0x0e5:  call   08546166 <+0x1b7>
08546099 +0x0ea:  sub    $0x4,%esp
0854609c +0x0ed:  lea    -0xc(%ebp),%eax
0854609f +0x0f0:  mov    0x8(%ebp),%edx
085460a2 +0x0f3:  mov    %edx,0x4(%esp)
085460a6 +0x0f7:  mov    %eax,(%esp)
085460a9 +0x0fa:  call   08546166 <+0x1b7>
085460ae +0x0ff:  sub    $0x4,%esp
085460b1 +0x102:  lea    -0x10(%ebp),%eax
085460b4 +0x105:  mov    %eax,0x4(%esp)
085460b8 +0x109:  lea    -0xc(%ebp),%eax
085460bb +0x10c:  mov    %eax,(%esp)
085460be +0x10f:  call   081123d7 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x18e9>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x18e9
085460c3 +0x114:  leave
085460c4 +0x115:  ret
085460c5 +0x116:  nop
085460c6 +0x117:  push   %ebp
085460c7 +0x118:  mov    %esp,%ebp
085460c9 +0x11a:  sub    $0x18,%esp
085460cc +0x11d:  mov    0x8(%ebp),%eax
085460cf +0x120:  mov    %eax,(%esp)
085460d2 +0x123:  call   08546178 <+0x1c9>
085460d7 +0x128:  leave
085460d8 +0x129:  ret
085460d9 +0x12a:  nop
085460da +0x12b:  push   %ebp
085460db +0x12c:  mov    %esp,%ebp
085460dd +0x12e:  sub    $0x28,%esp
085460e0 +0x131:  jmp    085460fe <+0x14f>
085460e2 +0x133:  mov    0x8(%ebp),%eax
085460e5 +0x136:  mov    %eax,(%esp)
085460e8 +0x139:  call   0861bdc8 <_ZN6Stream4sizeEv>  ; Stream::size()
085460ed +0x13e:  add    %eax,%eax
085460ef +0x140:  mov    %eax,0x4(%esp)
085460f3 +0x144:  mov    0x8(%ebp),%eax
085460f6 +0x147:  mov    %eax,(%esp)
085460f9 +0x14a:  call   0861bee8 <_ZN6Stream6resizeEi>  ; Stream::resize(int)
085460fe +0x14f:  movl   $0x1c,0x4(%esp)
08546106 +0x157:  mov    0x8(%ebp),%eax
08546109 +0x15a:  mov    %eax,(%esp)
0854610c +0x15d:  call   0861bf9e <_ZN6Stream9enable_inEi>  ; Stream::enable_in(int)
08546111 +0x162:  xor    $0x1,%eax
08546114 +0x165:  test   %al,%al
08546116 +0x167:  jne    085460e2 <+0x133>
08546118 +0x169:  mov    0x8(%ebp),%eax
0854611b +0x16c:  mov    0x8(%eax),%eax
0854611e +0x16f:  mov    %eax,%edx
08546120 +0x171:  mov    0x8(%ebp),%eax
08546123 +0x174:  mov    0xc(%eax),%eax
08546126 +0x177:  lea    (%edx,%eax,1),%eax
08546129 +0x17a:  mov    %eax,-0xc(%ebp)
0854612c +0x17d:  movl   $0x1c,0x4(%esp)
08546134 +0x185:  mov    0x8(%ebp),%eax
08546137 +0x188:  mov    %eax,(%esp)
0854613a +0x18b:  call   0861be0c <_ZN6Stream6in_ptrEi>  ; Stream::in_ptr(int)
0854613f +0x190:  mov    -0xc(%ebp),%eax
08546142 +0x193:  leave
08546143 +0x194:  ret
08546144 +0x195:  push   %ebp
08546145 +0x196:  mov    %esp,%ebp
08546147 +0x198:  pop    %ebp
08546148 +0x199:  ret
08546149 +0x19a:  nop
0854614a +0x19b:  push   %ebp
0854614b +0x19c:  mov    %esp,%ebp
0854614d +0x19e:  sub    $0x18,%esp
08546150 +0x1a1:  mov    0x8(%ebp),%eax
08546153 +0x1a4:  mov    %eax,(%esp)
08546156 +0x1a7:  call   08546144 <+0x195>
0854615b +0x1ac:  mov    0x8(%ebp),%eax
0854615e +0x1af:  mov    0xc(%ebp),%edx
08546161 +0x1b2:  mov    %edx,(%eax)
08546163 +0x1b4:  leave
08546164 +0x1b5:  ret
08546165 +0x1b6:  nop
08546166 +0x1b7:  push   %ebp
08546167 +0x1b8:  mov    %esp,%ebp
08546169 +0x1ba:  mov    0x8(%ebp),%eax
0854616c +0x1bd:  mov    0xc(%ebp),%edx
0854616f +0x1c0:  mov    (%edx),%edx
08546171 +0x1c2:  mov    %edx,(%eax)
08546173 +0x1c4:  pop    %ebp
08546174 +0x1c5:  ret    $0x4
08546177 +0x1c8:  nop
08546178 +0x1c9:  push   %ebp
08546179 +0x1ca:  mov    %esp,%ebp
0854617b +0x1cc:  sub    $0x28,%esp
0854617e +0x1cf:  mov    0x8(%ebp),%eax
08546181 +0x1d2:  mov    (%eax),%eax
08546183 +0x1d4:  mov    %eax,-0xc(%ebp)
08546186 +0x1d7:  lea    -0xc(%ebp),%eax
08546189 +0x1da:  mov    %eax,(%esp)
0854618c +0x1dd:  call   0854619c <+0x1ed>
08546191 +0x1e2:  mov    %eax,(%esp)
08546194 +0x1e5:  call   08235bba <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb264>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb264
08546199 +0x1ea:  leave
0854619a +0x1eb:  ret
0854619b +0x1ec:  nop
0854619c +0x1ed:  push   %ebp
0854619d +0x1ee:  mov    %esp,%ebp
0854619f +0x1f0:  mov    0x8(%ebp),%eax
085461a2 +0x1f3:  mov    (%eax),%eax
085461a4 +0x1f5:  lea    -0x8(%eax),%edx
085461a7 +0x1f8:  mov    0x8(%ebp),%eax
085461aa +0x1fb:  mov    %edx,(%eax)
085461ac +0x1fd:  mov    0x8(%ebp),%eax
085461af +0x200:  pop    %ebp
085461b0 +0x201:  ret
085461b1 +0x202:  nop
085461b2 +0x203:  nop
085461b3 +0x204:  nop
```

## 反编译 C

```c
// <global>::global @ 0x8545faf

/* CItemMakingSkill::CItemMakingSkill() */

void CItemMakingSkill::_GLOBAL__I_CItemMakingSkill(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
