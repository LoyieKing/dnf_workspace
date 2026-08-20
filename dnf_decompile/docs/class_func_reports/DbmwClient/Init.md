# Init

`_ZN10DbmwClient4InitEv`

`DbmwClient::Init()`

| 类 | 地址 |
|---|---|
| `DbmwClient` | `0x081205e6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081205e6  _ZN10DbmwClient4InitEv
#           DbmwClient::Init()
# range [0x081205e6, 0x08120653]
081205e6 +0x00:  push   %ebp
081205e7 +0x01:  mov    %esp,%ebp
081205e9 +0x03:  sub    $0x18,%esp
081205ec +0x06:  mov    0x8(%ebp),%eax
081205ef +0x09:  movzbl 0x1(%eax),%eax
081205f3 +0x0d:  test   %al,%al
081205f5 +0x0f:  je     081205fe <+0x18>
081205f7 +0x11:  mov    $0x0,%eax
081205fc +0x16:  jmp    08120652 <+0x6c>
081205fe +0x18:  movl   $0x0,0x8(%esp)
08120606 +0x20:  movl   $0x1,0x4(%esp)
0812060e +0x28:  movl   $0x2,(%esp)
08120615 +0x2f:  call   0807dab0 <_init+0x3a8>
0812061a +0x34:  mov    0x8(%ebp),%edx
0812061d +0x37:  mov    %eax,0x8(%edx)
08120620 +0x3a:  mov    0x8(%ebp),%eax
08120623 +0x3d:  mov    0x8(%eax),%eax
08120626 +0x40:  cmp    $0xffffffff,%eax
08120629 +0x43:  jne    08120632 <+0x4c>
0812062b +0x45:  mov    $0xffffff9c,%eax
08120630 +0x4a:  jmp    08120652 <+0x6c>
08120632 +0x4c:  mov    0x8(%ebp),%eax
08120635 +0x4f:  movl   $0x0,0xc(%eax)
0812063c +0x56:  mov    0x8(%ebp),%eax
0812063f +0x59:  movl   $0x0,0x10(%eax)
08120646 +0x60:  mov    0x8(%ebp),%eax
08120649 +0x63:  movb   $0x1,0x1(%eax)
0812064d +0x67:  mov    $0x0,%eax
08120652 +0x6c:  leave
08120653 +0x6d:  ret
```

## 反编译 C

```c
// DbmwClient::Init @ 0x81205e6

/* DbmwClient::Init() */

undefined4 __thiscall DbmwClient::Init(DbmwClient *this)

{
  undefined4 uVar1;
  int iVar2;
  
  if (this[1] == (DbmwClient)0x0) {
    iVar2 = socket(2,1,0);
    *(int *)(this + 8) = iVar2;
    if (*(int *)(this + 8) == -1) {
      uVar1 = 0xffffff9c;
    }
    else {
      *(undefined4 *)(this + 0xc) = 0;
      *(undefined4 *)(this + 0x10) = 0;
      this[1] = (DbmwClient)0x1;
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```
