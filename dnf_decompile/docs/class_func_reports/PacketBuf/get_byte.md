# get_byte

`_ZN9PacketBuf8get_byteERc`

`PacketBuf::get_byte(char&)`

| 类 | 地址 |
|---|---|
| `PacketBuf` | `0x0858cf22` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0858cf22  _ZN9PacketBuf8get_byteERc
#           PacketBuf::get_byte(char&)
# range [0x0858cf22, 0x0858cf6f]
0858cf22 +0x00:  push   %ebp
0858cf23 +0x01:  mov    %esp,%ebp
0858cf25 +0x03:  sub    $0x8,%esp
0858cf28 +0x06:  movl   $0x1,0x4(%esp)
0858cf30 +0x0e:  mov    0x8(%ebp),%eax
0858cf33 +0x11:  mov    %eax,(%esp)
0858cf36 +0x14:  call   0858cefc <_ZN9PacketBuf10is_len_endEi>  ; PacketBuf::is_len_end(int)
0858cf3b +0x19:  test   %al,%al
0858cf3d +0x1b:  je     0858cf46 <+0x24>
0858cf3f +0x1d:  mov    $0x0,%eax
0858cf44 +0x22:  jmp    0858cf6d <+0x4b>
0858cf46 +0x24:  mov    0x8(%ebp),%eax
0858cf49 +0x27:  mov    0x14(%eax),%ecx
0858cf4c +0x2a:  mov    0x8(%ebp),%eax
0858cf4f +0x2d:  mov    0x4(%eax),%eax
0858cf52 +0x30:  mov    %eax,%edx
0858cf54 +0x32:  lea    (%ecx,%edx,1),%edx
0858cf57 +0x35:  movzbl (%edx),%ecx
0858cf5a +0x38:  mov    0xc(%ebp),%edx
0858cf5d +0x3b:  mov    %cl,(%edx)
0858cf5f +0x3d:  lea    0x1(%eax),%edx
0858cf62 +0x40:  mov    0x8(%ebp),%eax
0858cf65 +0x43:  mov    %edx,0x4(%eax)
0858cf68 +0x46:  mov    $0x1,%eax
0858cf6d +0x4b:  leave
0858cf6e +0x4c:  ret
0858cf6f +0x4d:  nop
```

## 反编译 C

```c
// PacketBuf::get_byte @ 0x858cf22

/* PacketBuf::get_byte(char&) */

bool __thiscall PacketBuf::get_byte(PacketBuf *this,char *param_1)

{
  int iVar1;
  char cVar2;
  
  cVar2 = is_len_end(this,1);
  if (cVar2 == '\0') {
    iVar1 = *(int *)(this + 4);
    *param_1 = *(char *)(*(int *)(this + 0x14) + iVar1);
    *(int *)(this + 4) = iVar1 + 1;
  }
  return cVar2 == '\0';
}
```
