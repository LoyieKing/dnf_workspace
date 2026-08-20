# update

`_ZN13charac_expand8CDataMgr6updateEP5CUser23ENUM_CHARAC_EXPAND_TYPE`

`charac_expand::CDataMgr::update(CUser*, ENUM_CHARAC_EXPAND_TYPE)`

| 类 | 地址 |
|---|---|
| `charac_expand::CDataMgr` | `0x0832ad30` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0832ad30  _ZN13charac_expand8CDataMgr6updateEP5CUser23ENUM_CHARAC_EXPAND_TYPE
#           charac_expand::CDataMgr::update(CUser*, ENUM_CHARAC_EXPAND_TYPE)
# range [0x0832ad30, 0x0832ad77]
0832ad30 +0x00:  push   %ebp
0832ad31 +0x01:  mov    %esp,%ebp
0832ad33 +0x03:  sub    $0x28,%esp
0832ad36 +0x06:  movb   $0x1,-0x9(%ebp)
0832ad3a +0x0a:  mov    0x10(%ebp),%edx
0832ad3d +0x0d:  mov    0x8(%ebp),%eax
0832ad40 +0x10:  mov    (%eax,%edx,4),%eax
0832ad43 +0x13:  mov    %eax,(%esp)
0832ad46 +0x16:  call   0832ae80 <_GLOBAL__I__ZN13charac_expand8CDataMgrC2Ev+0x1d>  ; global constructors keyed to charac_expand::CDataMgr::CDataMgr()+0x1d
0832ad4b +0x1b:  test   %al,%al
0832ad4d +0x1d:  je     0832ad72 <+0x42>
0832ad4f +0x1f:  mov    0x10(%ebp),%edx
0832ad52 +0x22:  mov    0x8(%ebp),%eax
0832ad55 +0x25:  mov    (%eax,%edx,4),%eax
0832ad58 +0x28:  mov    0xc(%ebp),%edx
0832ad5b +0x2b:  mov    %edx,0x4(%esp)
0832ad5f +0x2f:  mov    %eax,(%esp)
0832ad62 +0x32:  call   0832ae8c <_GLOBAL__I__ZN13charac_expand8CDataMgrC2Ev+0x29>  ; global constructors keyed to charac_expand::CDataMgr::CDataMgr()+0x29
0832ad67 +0x37:  xor    $0x1,%eax
0832ad6a +0x3a:  test   %al,%al
0832ad6c +0x3c:  je     0832ad72 <+0x42>
0832ad6e +0x3e:  movb   $0x0,-0x9(%ebp)
0832ad72 +0x42:  movzbl -0x9(%ebp),%eax
0832ad76 +0x46:  leave
0832ad77 +0x47:  ret
```

## 反编译 C

```c
// charac_expand::CDataMgr::update @ 0x832ad30

/* charac_expand::CDataMgr::update(CUser*, ENUM_CHARAC_EXPAND_TYPE) */

undefined1 __thiscall charac_expand::CDataMgr::update(CDataMgr *this,CUser *param_1,int param_3)

{
  char cVar1;
  undefined1 local_d;
  
  local_d = 1;
  cVar1 = CData::isSave(*(CData **)(this + param_3 * 4));
  if (cVar1 != '\0') {
    cVar1 = CData::saveData(*(CData **)(this + param_3 * 4),param_1);
    if (cVar1 != '\x01') {
      local_d = 0;
    }
  }
  return local_d;
}
```
