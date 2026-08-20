# get_uniqueid

`_ZN21CUserGlobalInfoHandle12get_uniqueidEv`

`CUserGlobalInfoHandle::get_uniqueid()`

| 类 | 地址 |
|---|---|
| `CUserGlobalInfoHandle` | `0x086ad910` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086ad910  _ZN21CUserGlobalInfoHandle12get_uniqueidEv
#           CUserGlobalInfoHandle::get_uniqueid()
# range [0x086ad910, 0x086ad95d]
086ad910 +0x00:  push   %ebp
086ad911 +0x01:  mov    %esp,%ebp
086ad913 +0x03:  sub    $0x14,%esp
086ad916 +0x06:  mov    0x8(%ebp),%eax
086ad919 +0x09:  mov    %eax,(%esp)
086ad91c +0x0c:  call   086ad8c2 <_ZN21CUserGlobalInfoHandle13find_uniqueidEv>  ; CUserGlobalInfoHandle::find_uniqueid()
086ad921 +0x11:  mov    %eax,-0x4(%ebp)
086ad924 +0x14:  cmpl   $0xffffffff,-0x4(%ebp)
086ad928 +0x18:  sete   %al
086ad92b +0x1b:  test   %al,%al
086ad92d +0x1d:  je     086ad94a <+0x3a>
086ad92f +0x1f:  mov    0x8(%ebp),%eax
086ad932 +0x22:  movl   $0x1,&_ZL14gUnicodeBuffer+0x5ad4(%eax)
086ad93c +0x2c:  mov    0x8(%ebp),%eax
086ad93f +0x2f:  mov    %eax,(%esp)
086ad942 +0x32:  call   086ad8c2 <_ZN21CUserGlobalInfoHandle13find_uniqueidEv>  ; CUserGlobalInfoHandle::find_uniqueid()
086ad947 +0x37:  mov    %eax,-0x4(%ebp)
086ad94a +0x3a:  mov    -0x4(%ebp),%eax
086ad94d +0x3d:  lea    0x1(%eax),%edx
086ad950 +0x40:  mov    0x8(%ebp),%eax
086ad953 +0x43:  mov    %edx,&_ZL14gUnicodeBuffer+0x5ad4(%eax)
086ad959 +0x49:  mov    -0x4(%ebp),%eax
086ad95c +0x4c:  leave
086ad95d +0x4d:  ret
```

## 反编译 C

```c
// CUserGlobalInfoHandle::get_uniqueid @ 0x86ad910

/* CUserGlobalInfoHandle::get_uniqueid() */

int __thiscall CUserGlobalInfoHandle::get_uniqueid(CUserGlobalInfoHandle *this)

{
  int local_8;
  
  local_8 = find_uniqueid(this);
  if (local_8 == -1) {
    *(undefined4 *)(this + 0x10000) = 1;
    local_8 = find_uniqueid(this);
  }
  *(int *)(this + 0x10000) = local_8 + 1;
  return local_8;
}
```
