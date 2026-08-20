# ChecknFixWineAndMoru

`_ZN10CInventory20ChecknFixWineAndMoruEv`

`CInventory::ChecknFixWineAndMoru()`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x08509880` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08509880  _ZN10CInventory20ChecknFixWineAndMoruEv
#           CInventory::ChecknFixWineAndMoru()
# range [0x08509880, 0x08509a05]
08509880 +0x000:  push   %ebp
08509881 +0x001:  mov    %esp,%ebp
08509883 +0x003:  sub    $0x28,%esp
08509886 +0x006:  movl   $0x3,-0xc(%ebp)
0850988d +0x00d:  jmp    08509943 <+0xc3>
08509892 +0x012:  mov    0x8(%ebp),%eax
08509895 +0x015:  mov    0x650(%eax),%edx
0850989b +0x01b:  mov    -0xc(%ebp),%eax
0850989e +0x01e:  imul   $0x3d,%eax,%eax
085098a1 +0x021:  lea    (%edx,%eax,1),%eax
085098a4 +0x024:  mov    0x2(%eax),%eax
085098a7 +0x027:  test   %eax,%eax
085098a9 +0x029:  je     0850993f <+0xbf>
085098af +0x02f:  mov    0x8(%ebp),%eax
085098b2 +0x032:  mov    0x650(%eax),%edx
085098b8 +0x038:  mov    -0xc(%ebp),%eax
085098bb +0x03b:  imul   $0x3d,%eax,%eax
085098be +0x03e:  lea    (%edx,%eax,1),%eax
085098c1 +0x041:  movzbl 0x1(%eax),%eax
085098c5 +0x045:  cmp    $0x1,%al
085098c7 +0x047:  je     0850993f <+0xbf>
085098c9 +0x049:  mov    0x8(%ebp),%eax
085098cc +0x04c:  mov    0x650(%eax),%edx
085098d2 +0x052:  mov    -0xc(%ebp),%eax
085098d5 +0x055:  imul   $0x3d,%eax,%eax
085098d8 +0x058:  lea    (%edx,%eax,1),%eax
085098db +0x05b:  movzbl 0x1(%eax),%eax
085098df +0x05f:  movzbl %al,%edx
085098e2 +0x062:  mov    0x8(%ebp),%eax
085098e5 +0x065:  mov    0x650(%eax),%ecx
085098eb +0x06b:  mov    -0xc(%ebp),%eax
085098ee +0x06e:  imul   $0x3d,%eax,%eax
085098f1 +0x071:  lea    (%ecx,%eax,1),%eax
085098f4 +0x074:  mov    0x2(%eax),%eax
085098f7 +0x077:  mov    %edx,0x4(%esp)
085098fb +0x07b:  mov    %eax,(%esp)
085098fe +0x07e:  call   0850a082 <_ZN10CInventory19IsOverStackableItemEih>  ; CInventory::IsOverStackableItem(int, unsigned char)
08509903 +0x083:  xor    $0x1,%eax
08509906 +0x086:  test   %al,%al
08509908 +0x088:  je     0850993f <+0xbf>
0850990a +0x08a:  mov    0x8(%ebp),%eax
0850990d +0x08d:  mov    0x650(%eax),%edx
08509913 +0x093:  mov    -0xc(%ebp),%eax
08509916 +0x096:  imul   $0x3d,%eax,%eax
08509919 +0x099:  lea    (%edx,%eax,1),%eax
0850991c +0x09c:  mov    0x7(%eax),%eax
0850991f +0x09f:  cmp    $0x31f,%eax
08509924 +0x0a4:  jle    0850993f <+0xbf>
08509926 +0x0a6:  mov    0x8(%ebp),%eax
08509929 +0x0a9:  mov    0x650(%eax),%edx
0850992f +0x0af:  mov    -0xc(%ebp),%eax
08509932 +0x0b2:  imul   $0x3d,%eax,%eax
08509935 +0x0b5:  lea    (%edx,%eax,1),%eax
08509938 +0x0b8:  movl   $0x1,0x7(%eax)
0850993f +0x0bf:  addl   $0x1,-0xc(%ebp)
08509943 +0x0c3:  cmpl   $0x8,-0xc(%ebp)
08509947 +0x0c7:  setle  %al
0850994a +0x0ca:  test   %al,%al
0850994c +0x0cc:  jne    08509892 <+0x12>
08509952 +0x0d2:  movl   $0x39,-0xc(%ebp)
08509959 +0x0d9:  jmp    085099f1 <+0x171>
0850995e +0x0de:  mov    0x8(%ebp),%eax
08509961 +0x0e1:  mov    0x650(%eax),%edx
08509967 +0x0e7:  mov    -0xc(%ebp),%eax
0850996a +0x0ea:  imul   $0x3d,%eax,%eax
0850996d +0x0ed:  lea    (%edx,%eax,1),%eax
08509970 +0x0f0:  mov    0x2(%eax),%eax
08509973 +0x0f3:  test   %eax,%eax
08509975 +0x0f5:  je     085099ed <+0x16d>
08509977 +0x0f7:  mov    0x8(%ebp),%eax
0850997a +0x0fa:  mov    0x650(%eax),%edx
08509980 +0x100:  mov    -0xc(%ebp),%eax
08509983 +0x103:  imul   $0x3d,%eax,%eax
08509986 +0x106:  lea    (%edx,%eax,1),%eax
08509989 +0x109:  movzbl 0x1(%eax),%eax
0850998d +0x10d:  movzbl %al,%edx
08509990 +0x110:  mov    0x8(%ebp),%eax
08509993 +0x113:  mov    0x650(%eax),%ecx
08509999 +0x119:  mov    -0xc(%ebp),%eax
0850999c +0x11c:  imul   $0x3d,%eax,%eax
0850999f +0x11f:  lea    (%ecx,%eax,1),%eax
085099a2 +0x122:  mov    0x2(%eax),%eax
085099a5 +0x125:  mov    %edx,0x4(%esp)
085099a9 +0x129:  mov    %eax,(%esp)
085099ac +0x12c:  call   0850a082 <_ZN10CInventory19IsOverStackableItemEih>  ; CInventory::IsOverStackableItem(int, unsigned char)
085099b1 +0x131:  xor    $0x1,%eax
085099b4 +0x134:  test   %al,%al
085099b6 +0x136:  je     085099ed <+0x16d>
085099b8 +0x138:  mov    0x8(%ebp),%eax
085099bb +0x13b:  mov    0x650(%eax),%edx
085099c1 +0x141:  mov    -0xc(%ebp),%eax
085099c4 +0x144:  imul   $0x3d,%eax,%eax
085099c7 +0x147:  lea    (%edx,%eax,1),%eax
085099ca +0x14a:  mov    0x7(%eax),%eax
085099cd +0x14d:  cmp    $0x31f,%eax
085099d2 +0x152:  jle    085099ed <+0x16d>
085099d4 +0x154:  mov    0x8(%ebp),%eax
085099d7 +0x157:  mov    0x650(%eax),%edx
085099dd +0x15d:  mov    -0xc(%ebp),%eax
085099e0 +0x160:  imul   $0x3d,%eax,%eax
085099e3 +0x163:  lea    (%edx,%eax,1),%eax
085099e6 +0x166:  movl   $0x1,0x7(%eax)
085099ed +0x16d:  addl   $0x1,-0xc(%ebp)
085099f1 +0x171:  cmpl   $0xc8,-0xc(%ebp)
085099f8 +0x178:  setle  %al
085099fb +0x17b:  test   %al,%al
085099fd +0x17d:  jne    0850995e <+0xde>
08509a03 +0x183:  leave
08509a04 +0x184:  ret
08509a05 +0x185:  nop
```

## 反编译 C

```c
// CInventory::ChecknFixWineAndMoru @ 0x8509880

/* CInventory::ChecknFixWineAndMoru() */

void __thiscall CInventory::ChecknFixWineAndMoru(CInventory *this)

{
  char cVar1;
  int local_10;
  
  for (local_10 = 3; local_10 < 9; local_10 = local_10 + 1) {
    if ((*(int *)(*(int *)(this + 0x650) + local_10 * 0x3d + 2) != 0) &&
       (*(char *)(*(int *)(this + 0x650) + local_10 * 0x3d + 1) != '\x01')) {
      cVar1 = IsOverStackableItem(*(int *)(*(int *)(this + 0x650) + local_10 * 0x3d + 2),
                                  *(uchar *)(*(int *)(this + 0x650) + local_10 * 0x3d + 1));
      if ((cVar1 != '\x01') && (799 < *(int *)(*(int *)(this + 0x650) + local_10 * 0x3d + 7))) {
        *(undefined4 *)(*(int *)(this + 0x650) + local_10 * 0x3d + 7) = 1;
      }
    }
  }
  for (local_10 = 0x39; local_10 < 0xc9; local_10 = local_10 + 1) {
    if (*(int *)(*(int *)(this + 0x650) + local_10 * 0x3d + 2) != 0) {
      cVar1 = IsOverStackableItem(*(int *)(*(int *)(this + 0x650) + local_10 * 0x3d + 2),
                                  *(uchar *)(*(int *)(this + 0x650) + local_10 * 0x3d + 1));
      if ((cVar1 != '\x01') && (799 < *(int *)(*(int *)(this + 0x650) + local_10 * 0x3d + 7))) {
        *(undefined4 *)(*(int *)(this + 0x650) + local_10 * 0x3d + 7) = 1;
      }
    }
  }
  return;
}
```
