# getLastPosXY

`_ZN13CBattle_Field12getLastPosXYERiS0_`

`CBattle_Field::getLastPosXY(int&, int&)`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x08300e44` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08300e44  _ZN13CBattle_Field12getLastPosXYERiS0_
#           CBattle_Field::getLastPosXY(int&, int&)
# range [0x08300e44, 0x08300ed3]
08300e44 +0x00:  push   %ebp
08300e45 +0x01:  mov    %esp,%ebp
08300e47 +0x03:  sub    $0x18,%esp
08300e4a +0x06:  mov    0x8(%ebp),%eax
08300e4d +0x09:  mov    0x188(%eax),%eax
08300e53 +0x0f:  mov    %eax,(%esp)
08300e56 +0x12:  call   08365278 <_ZNK8CDungeon14IsEnterEachMapEv>  ; CDungeon::IsEnterEachMap() const
08300e5b +0x17:  test   %al,%al
08300e5d +0x19:  je     08300e81 <+0x3d>
08300e5f +0x1b:  mov    0x8(%ebp),%eax
08300e62 +0x1e:  mov    0x114(%eax),%eax
08300e68 +0x24:  test   %eax,%eax
08300e6a +0x26:  js     08300e81 <+0x3d>
08300e6c +0x28:  mov    0x8(%ebp),%eax
08300e6f +0x2b:  mov    0x114(%eax),%eax
08300e75 +0x31:  cmp    $0x3,%eax
08300e78 +0x34:  jg     08300e81 <+0x3d>
08300e7a +0x36:  mov    $0x1,%eax
08300e7f +0x3b:  jmp    08300e86 <+0x42>
08300e81 +0x3d:  mov    $0x0,%eax
08300e86 +0x42:  test   %al,%al
08300e88 +0x44:  je     08300ebc <+0x78>
08300e8a +0x46:  mov    0x8(%ebp),%eax
08300e8d +0x49:  mov    0x114(%eax),%edx
08300e93 +0x4f:  mov    0x8(%ebp),%eax
08300e96 +0x52:  add    $0x6,%edx
08300e99 +0x55:  mov    0xc(%eax,%edx,8),%edx
08300e9d +0x59:  mov    0xc(%ebp),%eax
08300ea0 +0x5c:  mov    %edx,(%eax)
08300ea2 +0x5e:  mov    0x8(%ebp),%eax
08300ea5 +0x61:  mov    0x114(%eax),%edx
08300eab +0x67:  mov    0x8(%ebp),%eax
08300eae +0x6a:  add    $0x6,%edx
08300eb1 +0x6d:  mov    0x10(%eax,%edx,8),%edx
08300eb5 +0x71:  mov    0x10(%ebp),%eax
08300eb8 +0x74:  mov    %edx,(%eax)
08300eba +0x76:  jmp    08300ed2 <+0x8e>
08300ebc +0x78:  mov    0x8(%ebp),%eax
08300ebf +0x7b:  mov    0x68(%eax),%edx
08300ec2 +0x7e:  mov    0xc(%ebp),%eax
08300ec5 +0x81:  mov    %edx,(%eax)
08300ec7 +0x83:  mov    0x8(%ebp),%eax
08300eca +0x86:  mov    0x6c(%eax),%edx
08300ecd +0x89:  mov    0xc(%ebp),%eax
08300ed0 +0x8c:  mov    %edx,(%eax)
08300ed2 +0x8e:  leave
08300ed3 +0x8f:  ret
```

## 反编译 C

```c
// CBattle_Field::getLastPosXY @ 0x8300e44

/* CBattle_Field::getLastPosXY(int&, int&) */

void __thiscall CBattle_Field::getLastPosXY(CBattle_Field *this,int *param_1,int *param_2)

{
  bool bVar1;
  char cVar2;
  
  cVar2 = CDungeon::IsEnterEachMap(*(CDungeon **)(this + 0x188));
  if (((cVar2 == '\0') || (*(int *)(this + 0x114) < 0)) || (3 < *(int *)(this + 0x114))) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    *param_1 = *(int *)(this + (*(int *)(this + 0x114) + 6) * 8 + 0xc);
    *param_2 = *(int *)(this + (*(int *)(this + 0x114) + 6) * 8 + 0x10);
  }
  else {
    *param_1 = *(int *)(this + 0x68);
    *param_1 = *(int *)(this + 0x6c);
  }
  return;
}
```
