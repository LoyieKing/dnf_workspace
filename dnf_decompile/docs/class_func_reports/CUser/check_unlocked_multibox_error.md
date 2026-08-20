# check_unlocked_multibox_error

`_ZN5CUser29check_unlocked_multibox_errorEPK5CItemi`

`CUser::check_unlocked_multibox_error(CItem const*, int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x086761e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086761e0  _ZN5CUser29check_unlocked_multibox_errorEPK5CItemi
#           CUser::check_unlocked_multibox_error(CItem const*, int)
# range [0x086761e0, 0x08676295]
086761e0 +0x00:  push   %ebp
086761e1 +0x01:  mov    %esp,%ebp
086761e3 +0x03:  sub    $0x28,%esp
086761e6 +0x06:  cmpl   $0x0,0xc(%ebp)
086761ea +0x0a:  jne    086761f6 <+0x16>
086761ec +0x0c:  mov    $0x11,%eax
086761f1 +0x11:  jmp    08676293 <+0xb3>
086761f6 +0x16:  mov    0xc(%ebp),%eax
086761f9 +0x19:  mov    %eax,(%esp)
086761fc +0x1c:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
08676201 +0x21:  xor    $0x1,%eax
08676204 +0x24:  test   %al,%al
08676206 +0x26:  je     08676212 <+0x32>
08676208 +0x28:  mov    $0x11,%eax
0867620d +0x2d:  jmp    08676293 <+0xb3>
08676212 +0x32:  mov    0xc(%ebp),%eax
08676215 +0x35:  mov    (%eax),%eax
08676217 +0x37:  add    $0xc,%eax
0867621a +0x3a:  mov    (%eax),%edx
0867621c +0x3c:  mov    0xc(%ebp),%eax
0867621f +0x3f:  mov    %eax,(%esp)
08676222 +0x42:  call   *%edx
08676224 +0x44:  cmp    $0x1a,%eax
08676227 +0x47:  je     08676247 <+0x67>
08676229 +0x49:  mov    0xc(%ebp),%eax
0867622c +0x4c:  mov    (%eax),%eax
0867622e +0x4e:  add    $0xc,%eax
08676231 +0x51:  mov    (%eax),%edx
08676233 +0x53:  mov    0xc(%ebp),%eax
08676236 +0x56:  mov    %eax,(%esp)
08676239 +0x59:  call   *%edx
0867623b +0x5b:  cmp    $0x1b,%eax
0867623e +0x5e:  je     08676247 <+0x67>
08676240 +0x60:  mov    $0x1,%eax
08676245 +0x65:  jmp    0867624c <+0x6c>
08676247 +0x67:  mov    $0x0,%eax
0867624c +0x6c:  test   %al,%al
0867624e +0x6e:  je     08676257 <+0x77>
08676250 +0x70:  mov    $0x11,%eax
08676255 +0x75:  jmp    08676293 <+0xb3>
08676257 +0x77:  cmpl   $0xffff,0x10(%ebp)
0867625e +0x7e:  je     08676267 <+0x87>
08676260 +0x80:  mov    $0x11,%eax
08676265 +0x85:  jmp    08676293 <+0xb3>
08676267 +0x87:  movl   $0x2,-0x10(%ebp)
0867626e +0x8e:  mov    -0x10(%ebp),%eax
08676271 +0x91:  mov    %eax,0x4(%esp)
08676275 +0x95:  mov    0x8(%ebp),%eax
08676278 +0x98:  mov    %eax,(%esp)
0867627b +0x9b:  call   08675edc <_ZN5CUser20check_multibox_errorEi>  ; CUser::check_multibox_error(int)
08676280 +0xa0:  mov    %eax,-0xc(%ebp)
08676283 +0xa3:  cmpl   $0x0,-0xc(%ebp)
08676287 +0xa7:  je     0867628e <+0xae>
08676289 +0xa9:  mov    -0xc(%ebp),%eax
0867628c +0xac:  jmp    08676293 <+0xb3>
0867628e +0xae:  mov    $0x0,%eax
08676293 +0xb3:  leave
08676294 +0xb4:  ret
08676295 +0xb5:  nop
```

## 反编译 C

```c
// CUser::check_unlocked_multibox_error @ 0x86761e0

/* CUser::check_unlocked_multibox_error(CItem const*, int) */

int __thiscall CUser::check_unlocked_multibox_error(CUser *this,CItem *param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  
  if (param_1 == (CItem *)0x0) {
    iVar3 = 0x11;
  }
  else {
    cVar2 = CItem::is_stackable(param_1);
    if (cVar2 == '\x01') {
      iVar3 = (**(code **)(*(int *)param_1 + 0xc))(param_1);
      if ((iVar3 == 0x1a) || (iVar3 = (**(code **)(*(int *)param_1 + 0xc))(param_1), iVar3 == 0x1b))
      {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        iVar3 = 0x11;
      }
      else if (param_2 == 0xffff) {
        iVar3 = check_multibox_error(this,2);
        if (iVar3 == 0) {
          iVar3 = 0;
        }
      }
      else {
        iVar3 = 0x11;
      }
    }
    else {
      iVar3 = 0x11;
    }
  }
  return iVar3;
}
```
