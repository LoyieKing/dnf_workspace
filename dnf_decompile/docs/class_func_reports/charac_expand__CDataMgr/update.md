# update

`_ZN13charac_expand8CDataMgr6updateEP5CUser`

`charac_expand::CDataMgr::update(CUser*)`

| 类 | 地址 |
|---|---|
| `charac_expand::CDataMgr` | `0x0832acd0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0832acd0  _ZN13charac_expand8CDataMgr6updateEP5CUser
#           charac_expand::CDataMgr::update(CUser*)
# range [0x0832acd0, 0x0832ad2f]
0832acd0 +0x00:  push   %ebp
0832acd1 +0x01:  mov    %esp,%ebp
0832acd3 +0x03:  sub    $0x28,%esp
0832acd6 +0x06:  movb   $0x1,-0xd(%ebp)
0832acda +0x0a:  movl   $0x0,-0xc(%ebp)
0832ace1 +0x11:  jmp    0832ad1f <+0x4f>
0832ace3 +0x13:  mov    -0xc(%ebp),%edx
0832ace6 +0x16:  mov    0x8(%ebp),%eax
0832ace9 +0x19:  mov    (%eax,%edx,4),%eax
0832acec +0x1c:  mov    %eax,(%esp)
0832acef +0x1f:  call   0832ae80 <_GLOBAL__I__ZN13charac_expand8CDataMgrC2Ev+0x1d>  ; global constructors keyed to charac_expand::CDataMgr::CDataMgr()+0x1d
0832acf4 +0x24:  test   %al,%al
0832acf6 +0x26:  je     0832ad1b <+0x4b>
0832acf8 +0x28:  mov    -0xc(%ebp),%edx
0832acfb +0x2b:  mov    0x8(%ebp),%eax
0832acfe +0x2e:  mov    (%eax,%edx,4),%eax
0832ad01 +0x31:  mov    0xc(%ebp),%edx
0832ad04 +0x34:  mov    %edx,0x4(%esp)
0832ad08 +0x38:  mov    %eax,(%esp)
0832ad0b +0x3b:  call   0832ae8c <_GLOBAL__I__ZN13charac_expand8CDataMgrC2Ev+0x29>  ; global constructors keyed to charac_expand::CDataMgr::CDataMgr()+0x29
0832ad10 +0x40:  xor    $0x1,%eax
0832ad13 +0x43:  test   %al,%al
0832ad15 +0x45:  je     0832ad1b <+0x4b>
0832ad17 +0x47:  movb   $0x0,-0xd(%ebp)
0832ad1b +0x4b:  addl   $0x1,-0xc(%ebp)
0832ad1f +0x4f:  cmpl   $0x13,-0xc(%ebp)
0832ad23 +0x53:  setle  %al
0832ad26 +0x56:  test   %al,%al
0832ad28 +0x58:  jne    0832ace3 <+0x13>
0832ad2a +0x5a:  movzbl -0xd(%ebp),%eax
0832ad2e +0x5e:  leave
0832ad2f +0x5f:  ret
```

## 反编译 C

```c
// charac_expand::CDataMgr::update @ 0x832acd0

/* charac_expand::CDataMgr::update(CUser*) */

undefined1 __thiscall charac_expand::CDataMgr::update(CDataMgr *this,CUser *param_1)

{
  char cVar1;
  undefined1 local_11;
  int local_10;
  
  local_11 = 1;
  for (local_10 = 0; local_10 < 0x14; local_10 = local_10 + 1) {
    cVar1 = CData::isSave(*(CData **)(this + local_10 * 4));
    if (cVar1 != '\0') {
      cVar1 = CData::saveData(*(CData **)(this + local_10 * 4),param_1);
      if (cVar1 != '\x01') {
        local_11 = 0;
      }
    }
  }
  return local_11;
}
```
