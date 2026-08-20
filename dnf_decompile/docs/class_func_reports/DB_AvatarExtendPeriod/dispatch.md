# dispatch

`_ZN21DB_AvatarExtendPeriod8dispatchEiiP6Stream`

`DB_AvatarExtendPeriod::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_AvatarExtendPeriod` | `0x083ffb22` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083ffb22  _ZN21DB_AvatarExtendPeriod8dispatchEiiP6Stream
#           DB_AvatarExtendPeriod::dispatch(int, int, Stream*)
# range [0x083ffb22, 0x083ffbb3]
083ffb22 +0x00:  push   %ebp
083ffb23 +0x01:  mov    %esp,%ebp
083ffb25 +0x03:  sub    $0x28,%esp
083ffb28 +0x06:  mov    0x8(%ebp),%eax
083ffb2b +0x09:  mov    0x14(%ebp),%edx
083ffb2e +0x0c:  mov    %edx,0xc(%esp)
083ffb32 +0x10:  mov    0x10(%ebp),%edx
083ffb35 +0x13:  mov    %edx,0x8(%esp)
083ffb39 +0x17:  mov    0xc(%ebp),%edx
083ffb3c +0x1a:  mov    %edx,0x4(%esp)
083ffb40 +0x1e:  mov    %eax,(%esp)
083ffb43 +0x21:  call   083fbf7c <_ZN12DBDispatcher8dispatchEiiP6Stream>  ; DBDispatcher::dispatch(int, int, Stream*)
083ffb48 +0x26:  xor    $0x1,%eax
083ffb4b +0x29:  test   %al,%al
083ffb4d +0x2b:  je     083ffb56 <+0x34>
083ffb4f +0x2d:  mov    $0x0,%eax
083ffb54 +0x32:  jmp    083ffbb1 <+0x8f>
083ffb56 +0x34:  movl   $0x7,0x8(%esp)
083ffb5e +0x3c:  lea    -0x10(%ebp),%eax
083ffb61 +0x3f:  mov    %eax,0x4(%esp)
083ffb65 +0x43:  mov    0x14(%ebp),%eax
083ffb68 +0x46:  mov    %eax,(%esp)
083ffb6b +0x49:  call   0861c7fa <_ZN6Stream10get_binaryEPvi>  ; Stream::get_binary(void*, int)
083ffb70 +0x4e:  mov    %al,-0x9(%ebp)
083ffb73 +0x51:  movzbl -0x9(%ebp),%eax
083ffb77 +0x55:  xor    $0x1,%eax
083ffb7a +0x58:  test   %al,%al
083ffb7c +0x5a:  je     083ffb85 <+0x63>
083ffb7e +0x5c:  mov    $0x0,%eax
083ffb83 +0x61:  jmp    083ffbb1 <+0x8f>
083ffb85 +0x63:  lea    -0x10(%ebp),%eax
083ffb88 +0x66:  mov    %eax,0x4(%esp)
083ffb8c +0x6a:  mov    0x8(%ebp),%eax
083ffb8f +0x6d:  mov    %eax,(%esp)
083ffb92 +0x70:  call   083ffbb4 <_ZN21DB_AvatarExtendPeriod12ExtendPeriodER16SIG_AVATAR_RENEW>  ; DB_AvatarExtendPeriod::ExtendPeriod(SIG_AVATAR_RENEW&)
083ffb97 +0x75:  mov    %al,-0x9(%ebp)
083ffb9a +0x78:  movzbl -0x9(%ebp),%eax
083ffb9e +0x7c:  xor    $0x1,%eax
083ffba1 +0x7f:  test   %al,%al
083ffba3 +0x81:  je     083ffbac <+0x8a>
083ffba5 +0x83:  mov    $0x0,%eax
083ffbaa +0x88:  jmp    083ffbb1 <+0x8f>
083ffbac +0x8a:  mov    $0x1,%eax
083ffbb1 +0x8f:  leave
083ffbb2 +0x90:  ret
083ffbb3 +0x91:  nop
```

## 反编译 C

```c
// DB_AvatarExtendPeriod::dispatch @ 0x83ffb22

/* DB_AvatarExtendPeriod::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_AvatarExtendPeriod::dispatch(DB_AvatarExtendPeriod *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  SIG_AVATAR_RENEW local_14 [7];
  char local_d;
  
  cVar1 = DBDispatcher::dispatch((int)this,param_1,(Stream *)param_2);
  if (cVar1 == '\x01') {
    local_d = Stream::get_binary(param_3,local_14,7);
    if (local_d == '\x01') {
      cVar1 = ExtendPeriod(this,local_14);
      if (cVar1 == '\x01') {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
