# CAlchemist

`_GLOBAL__I__ZN10expert_job10CAlchemistC2Ev`

`global constructors keyed to expert_job::CAlchemist::CAlchemist()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to expert_job::CAlchemist` | `0x085d19b9` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d19b9  _GLOBAL__I__ZN10expert_job10CAlchemistC2Ev
#           global constructors keyed to expert_job::CAlchemist::CAlchemist()
# range [0x085d19b9, 0x085d1ad3]
085d19b9 +0x000:  push   %ebp
085d19ba +0x001:  mov    %esp,%ebp
085d19bc +0x003:  sub    $0x18,%esp
085d19bf +0x006:  movl   $0xffff,0x4(%esp)
085d19c7 +0x00e:  movl   $0x1,(%esp)
085d19ce +0x015:  call   085d1979 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
085d19d3 +0x01a:  leave
085d19d4 +0x01b:  ret
085d19d5 +0x01c:  nop
085d19d6 +0x01d:  push   %ebp
085d19d7 +0x01e:  mov    %esp,%ebp
085d19d9 +0x020:  sub    $0x28,%esp
085d19dc +0x023:  mov    0xc(%ebp),%eax
085d19df +0x026:  mov    %al,-0xc(%ebp)
085d19e2 +0x029:  mov    0x8(%ebp),%eax
085d19e5 +0x02c:  mov    %eax,(%esp)
085d19e8 +0x02f:  call   0822cbcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2276>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2276
085d19ed +0x034:  movzbl -0xc(%ebp),%edx
085d19f1 +0x038:  mov    %dl,0xa4(%eax)
085d19f7 +0x03e:  leave
085d19f8 +0x03f:  ret
085d19f9 +0x040:  nop
085d19fa +0x041:  push   %ebp
085d19fb +0x042:  mov    %esp,%ebp
085d19fd +0x044:  mov    0x8(%ebp),%eax
085d1a00 +0x047:  mov    0x10(%eax),%eax
085d1a03 +0x04a:  add    $0xea6,%eax
085d1a08 +0x04f:  pop    %ebp
085d1a09 +0x050:  ret
085d1a0a +0x051:  push   %ebp
085d1a0b +0x052:  mov    %esp,%ebp
085d1a0d +0x054:  mov    0x8(%ebp),%eax
085d1a10 +0x057:  mov    0x8d1e0(%eax),%eax
085d1a16 +0x05d:  pop    %ebp
085d1a17 +0x05e:  ret
085d1a18 +0x05f:  push   %ebp
085d1a19 +0x060:  mov    %esp,%ebp
085d1a1b +0x062:  push   %ebx
085d1a1c +0x063:  sub    $0x24,%esp
085d1a1f +0x066:  mov    0x8(%ebp),%ebx
085d1a22 +0x069:  mov    0xc(%ebp),%eax
085d1a25 +0x06c:  mov    (%eax),%eax
085d1a27 +0x06e:  mov    %eax,-0xc(%ebp)
085d1a2a +0x071:  lea    -0xc(%ebp),%eax
085d1a2d +0x074:  mov    %eax,0x4(%esp)
085d1a31 +0x078:  mov    %ebx,(%esp)
085d1a34 +0x07b:  call   085d1abc <+0x103>
085d1a39 +0x080:  mov    %ebx,%eax
085d1a3b +0x082:  add    $0x24,%esp
085d1a3e +0x085:  pop    %ebx
085d1a3f +0x086:  pop    %ebp
085d1a40 +0x087:  ret    $0x4
085d1a43 +0x08a:  nop
085d1a44 +0x08b:  push   %ebp
085d1a45 +0x08c:  mov    %esp,%ebp
085d1a47 +0x08e:  push   %ebx
085d1a48 +0x08f:  sub    $0x24,%esp
085d1a4b +0x092:  mov    0x8(%ebp),%ebx
085d1a4e +0x095:  mov    0xc(%ebp),%eax
085d1a51 +0x098:  mov    0x4(%eax),%eax
085d1a54 +0x09b:  mov    %eax,-0xc(%ebp)
085d1a57 +0x09e:  lea    -0xc(%ebp),%eax
085d1a5a +0x0a1:  mov    %eax,0x4(%esp)
085d1a5e +0x0a5:  mov    %ebx,(%esp)
085d1a61 +0x0a8:  call   085d1abc <+0x103>
085d1a66 +0x0ad:  mov    %ebx,%eax
085d1a68 +0x0af:  add    $0x24,%esp
085d1a6b +0x0b2:  pop    %ebx
085d1a6c +0x0b3:  pop    %ebp
085d1a6d +0x0b4:  ret    $0x4
085d1a70 +0x0b7:  push   %ebp
085d1a71 +0x0b8:  mov    %esp,%ebp
085d1a73 +0x0ba:  push   %ebx
085d1a74 +0x0bb:  sub    $0x14,%esp
085d1a77 +0x0be:  mov    0x8(%ebp),%eax
085d1a7a +0x0c1:  mov    %eax,(%esp)
085d1a7d +0x0c4:  call   085d1acc <+0x113>
085d1a82 +0x0c9:  mov    (%eax),%ebx
085d1a84 +0x0cb:  mov    0xc(%ebp),%eax
085d1a87 +0x0ce:  mov    %eax,(%esp)
085d1a8a +0x0d1:  call   085d1acc <+0x113>
085d1a8f +0x0d6:  mov    (%eax),%eax
085d1a91 +0x0d8:  cmp    %eax,%ebx
085d1a93 +0x0da:  setne  %al
085d1a96 +0x0dd:  add    $0x14,%esp
085d1a99 +0x0e0:  pop    %ebx
085d1a9a +0x0e1:  pop    %ebp
085d1a9b +0x0e2:  ret
085d1a9c +0x0e3:  push   %ebp
085d1a9d +0x0e4:  mov    %esp,%ebp
085d1a9f +0x0e6:  mov    0x8(%ebp),%eax
085d1aa2 +0x0e9:  mov    (%eax),%eax
085d1aa4 +0x0eb:  lea    0x8(%eax),%edx
085d1aa7 +0x0ee:  mov    0x8(%ebp),%eax
085d1aaa +0x0f1:  mov    %edx,(%eax)
085d1aac +0x0f3:  mov    0x8(%ebp),%eax
085d1aaf +0x0f6:  pop    %ebp
085d1ab0 +0x0f7:  ret
085d1ab1 +0x0f8:  nop
085d1ab2 +0x0f9:  push   %ebp
085d1ab3 +0x0fa:  mov    %esp,%ebp
085d1ab5 +0x0fc:  mov    0x8(%ebp),%eax
085d1ab8 +0x0ff:  mov    (%eax),%eax
085d1aba +0x101:  pop    %ebp
085d1abb +0x102:  ret
085d1abc +0x103:  push   %ebp
085d1abd +0x104:  mov    %esp,%ebp
085d1abf +0x106:  mov    0xc(%ebp),%eax
085d1ac2 +0x109:  mov    (%eax),%edx
085d1ac4 +0x10b:  mov    0x8(%ebp),%eax
085d1ac7 +0x10e:  mov    %edx,(%eax)
085d1ac9 +0x110:  pop    %ebp
085d1aca +0x111:  ret
085d1acb +0x112:  nop
085d1acc +0x113:  push   %ebp
085d1acd +0x114:  mov    %esp,%ebp
085d1acf +0x116:  mov    0x8(%ebp),%eax
085d1ad2 +0x119:  pop    %ebp
085d1ad3 +0x11a:  ret
```

## 反编译 C

```c
// <global>::global @ 0x85d19b9

/* expert_job::CAlchemist::CAlchemist() */

void expert_job::CAlchemist::_GLOBAL__I_CAlchemist(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
