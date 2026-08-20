# CItemDictionary

`_GLOBAL__I__ZN15CItemDictionaryC2Ev`

`global constructors keyed to CItemDictionary::CItemDictionary()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CItemDictionary` | `0x0811dec0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0811dec0  _GLOBAL__I__ZN15CItemDictionaryC2Ev
#           global constructors keyed to CItemDictionary::CItemDictionary()
# range [0x0811dec0, 0x0811dfab]
0811dec0 +0x00:  push   %ebp
0811dec1 +0x01:  mov    %esp,%ebp
0811dec3 +0x03:  sub    $0x18,%esp
0811dec6 +0x06:  movl   $0xffff,0x4(%esp)
0811dece +0x0e:  movl   $0x1,(%esp)
0811ded5 +0x15:  call   0811de80 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
0811deda +0x1a:  leave
0811dedb +0x1b:  ret
0811dedc +0x1c:  push   %ebp
0811dedd +0x1d:  mov    %esp,%ebp
0811dedf +0x1f:  sub    $0x18,%esp
0811dee2 +0x22:  mov    0x8(%ebp),%eax
0811dee5 +0x25:  lea    0x4(%eax),%edx
0811dee8 +0x28:  mov    0x10(%ebp),%eax
0811deeb +0x2b:  mov    %eax,0xc(%esp)
0811deef +0x2f:  mov    0xc(%ebp),%eax
0811def2 +0x32:  mov    %eax,0x8(%esp)
0811def6 +0x36:  mov    %edx,0x4(%esp)
0811defa +0x3a:  mov    0x8(%ebp),%eax
0811defd +0x3d:  mov    %eax,(%esp)
0811df00 +0x40:  call   0858cd68 <_ZN9PacketBuf10put_binaryERiPci>  ; PacketBuf::put_binary(int&, char*, int)
0811df05 +0x45:  leave
0811df06 +0x46:  ret
0811df07 +0x47:  nop
0811df08 +0x48:  push   %ebp
0811df09 +0x49:  mov    %esp,%ebp
0811df0b +0x4b:  sub    $0x18,%esp
0811df0e +0x4e:  mov    0x8(%ebp),%eax
0811df11 +0x51:  mov    (%eax),%eax
0811df13 +0x53:  mov    0x10(%ebp),%edx
0811df16 +0x56:  mov    %edx,0x8(%esp)
0811df1a +0x5a:  mov    0xc(%ebp),%edx
0811df1d +0x5d:  mov    %edx,0x4(%esp)
0811df21 +0x61:  mov    %eax,(%esp)
0811df24 +0x64:  call   0811dedc <+0x1c>
0811df29 +0x69:  leave
0811df2a +0x6a:  ret
0811df2b +0x6b:  nop
0811df2c +0x6c:  push   %ebp
0811df2d +0x6d:  mov    %esp,%ebp
0811df2f +0x6f:  sub    $0x18,%esp
0811df32 +0x72:  mov    0x8(%ebp),%eax
0811df35 +0x75:  mov    (%eax),%eax
0811df37 +0x77:  mov    %eax,(%esp)
0811df3a +0x7a:  call   0811df42 <+0x82>
0811df3f +0x7f:  leave
0811df40 +0x80:  ret
0811df41 +0x81:  nop
0811df42 +0x82:  push   %ebp
0811df43 +0x83:  mov    %esp,%ebp
0811df45 +0x85:  sub    $0x28,%esp
0811df48 +0x88:  jmp    0811df66 <+0xa6>
0811df4a +0x8a:  mov    0x8(%ebp),%eax
0811df4d +0x8d:  mov    %eax,(%esp)
0811df50 +0x90:  call   0861bdc8 <_ZN6Stream4sizeEv>  ; Stream::size()
0811df55 +0x95:  add    %eax,%eax
0811df57 +0x97:  mov    %eax,0x4(%esp)
0811df5b +0x9b:  mov    0x8(%ebp),%eax
0811df5e +0x9e:  mov    %eax,(%esp)
0811df61 +0xa1:  call   0861bee8 <_ZN6Stream6resizeEi>  ; Stream::resize(int)
0811df66 +0xa6:  movl   $0x138c,0x4(%esp)
0811df6e +0xae:  mov    0x8(%ebp),%eax
0811df71 +0xb1:  mov    %eax,(%esp)
0811df74 +0xb4:  call   0861bf9e <_ZN6Stream9enable_inEi>  ; Stream::enable_in(int)
0811df79 +0xb9:  xor    $0x1,%eax
0811df7c +0xbc:  test   %al,%al
0811df7e +0xbe:  jne    0811df4a <+0x8a>
0811df80 +0xc0:  mov    0x8(%ebp),%eax
0811df83 +0xc3:  mov    0x8(%eax),%eax
0811df86 +0xc6:  mov    %eax,%edx
0811df88 +0xc8:  mov    0x8(%ebp),%eax
0811df8b +0xcb:  mov    0xc(%eax),%eax
0811df8e +0xce:  lea    (%edx,%eax,1),%eax
0811df91 +0xd1:  mov    %eax,-0xc(%ebp)
0811df94 +0xd4:  movl   $0x138c,0x4(%esp)
0811df9c +0xdc:  mov    0x8(%ebp),%eax
0811df9f +0xdf:  mov    %eax,(%esp)
0811dfa2 +0xe2:  call   0861be0c <_ZN6Stream6in_ptrEi>  ; Stream::in_ptr(int)
0811dfa7 +0xe7:  mov    -0xc(%ebp),%eax
0811dfaa +0xea:  leave
0811dfab +0xeb:  ret
```

## 反编译 C

```c
// <global>::global @ 0x811dec0

/* CItemDictionary::CItemDictionary() */

void CItemDictionary::_GLOBAL__I_CItemDictionary(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
