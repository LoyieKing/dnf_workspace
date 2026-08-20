# dispatch

`_ZN16DB_AvatarItemDel8dispatchEiiP6Stream`

`DB_AvatarItemDel::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_AvatarItemDel` | `0x083ffcac` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083ffcac  _ZN16DB_AvatarItemDel8dispatchEiiP6Stream
#           DB_AvatarItemDel::dispatch(int, int, Stream*)
# range [0x083ffcac, 0x083ffd45]
083ffcac +0x00:  push   %ebp
083ffcad +0x01:  mov    %esp,%ebp
083ffcaf +0x03:  sub    $0x728,%esp
083ffcb5 +0x09:  mov    0x8(%ebp),%eax
083ffcb8 +0x0c:  mov    0x14(%ebp),%edx
083ffcbb +0x0f:  mov    %edx,0xc(%esp)
083ffcbf +0x13:  mov    0x10(%ebp),%edx
083ffcc2 +0x16:  mov    %edx,0x8(%esp)
083ffcc6 +0x1a:  mov    0xc(%ebp),%edx
083ffcc9 +0x1d:  mov    %edx,0x4(%esp)
083ffccd +0x21:  mov    %eax,(%esp)
083ffcd0 +0x24:  call   083fbf7c <_ZN12DBDispatcher8dispatchEiiP6Stream>  ; DBDispatcher::dispatch(int, int, Stream*)
083ffcd5 +0x29:  xor    $0x1,%eax
083ffcd8 +0x2c:  test   %al,%al
083ffcda +0x2e:  je     083ffce3 <+0x37>
083ffcdc +0x30:  mov    $0x0,%eax
083ffce1 +0x35:  jmp    083ffd44 <+0x98>
083ffce3 +0x37:  movl   $0x70c,0x8(%esp)
083ffceb +0x3f:  lea    -0x715(%ebp),%eax
083ffcf1 +0x45:  mov    %eax,0x4(%esp)
083ffcf5 +0x49:  mov    0x14(%ebp),%eax
083ffcf8 +0x4c:  mov    %eax,(%esp)
083ffcfb +0x4f:  call   0861c7fa <_ZN6Stream10get_binaryEPvi>  ; Stream::get_binary(void*, int)
083ffd00 +0x54:  mov    %al,-0x9(%ebp)
083ffd03 +0x57:  movzbl -0x9(%ebp),%eax
083ffd07 +0x5b:  xor    $0x1,%eax
083ffd0a +0x5e:  test   %al,%al
083ffd0c +0x60:  je     083ffd15 <+0x69>
083ffd0e +0x62:  mov    $0x0,%eax
083ffd13 +0x67:  jmp    083ffd44 <+0x98>
083ffd15 +0x69:  lea    -0x715(%ebp),%eax
083ffd1b +0x6f:  mov    %eax,0x4(%esp)
083ffd1f +0x73:  mov    0x8(%ebp),%eax
083ffd22 +0x76:  mov    %eax,(%esp)
083ffd25 +0x79:  call   083ffd46 <_ZN16DB_AvatarItemDel13DelAvatarItemER17SIG_AVATAR_DELETE>  ; DB_AvatarItemDel::DelAvatarItem(SIG_AVATAR_DELETE&)
083ffd2a +0x7e:  mov    %al,-0x9(%ebp)
083ffd2d +0x81:  movzbl -0x9(%ebp),%eax
083ffd31 +0x85:  xor    $0x1,%eax
083ffd34 +0x88:  test   %al,%al
083ffd36 +0x8a:  je     083ffd3f <+0x93>
083ffd38 +0x8c:  mov    $0x0,%eax
083ffd3d +0x91:  jmp    083ffd44 <+0x98>
083ffd3f +0x93:  mov    $0x1,%eax
083ffd44 +0x98:  leave
083ffd45 +0x99:  ret
```

## 反编译 C

```c
// DB_AvatarItemDel::dispatch @ 0x83ffcac

/* DB_AvatarItemDel::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_AvatarItemDel::dispatch(DB_AvatarItemDel *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 local_719 [1804];
  char local_d;
  
  cVar1 = DBDispatcher::dispatch((int)this,param_1,(Stream *)param_2);
  if (cVar1 == '\x01') {
    local_d = Stream::get_binary(param_3,local_719,0x70c);
    if (local_d == '\x01') {
      cVar1 = DelAvatarItem((SIG_AVATAR_DELETE *)this);
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
