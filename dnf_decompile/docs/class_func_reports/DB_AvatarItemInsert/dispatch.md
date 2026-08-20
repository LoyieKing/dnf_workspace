# dispatch

`_ZN19DB_AvatarItemInsert8dispatchEiiP6Stream`

`DB_AvatarItemInsert::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_AvatarItemInsert` | `0x083ffdba` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083ffdba  _ZN19DB_AvatarItemInsert8dispatchEiiP6Stream
#           DB_AvatarItemInsert::dispatch(int, int, Stream*)
# range [0x083ffdba, 0x083ffe0d]
083ffdba +0x00:  push   %ebp
083ffdbb +0x01:  mov    %esp,%ebp
083ffdbd +0x03:  sub    $0x28,%esp
083ffdc0 +0x06:  mov    0x14(%ebp),%eax
083ffdc3 +0x09:  mov    %eax,(%esp)
083ffdc6 +0x0c:  call   0845035a <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2f70>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2f70
083ffdcb +0x11:  mov    %eax,-0xc(%ebp)
083ffdce +0x14:  mov    -0xc(%ebp),%eax
083ffdd1 +0x17:  mov    %eax,(%esp)
083ffdd4 +0x1a:  call   083ffe0e <_ZN19DB_AvatarItemInsert16InsertAvatarItemEP17SIG_AVATAR_INSERT>  ; DB_AvatarItemInsert::InsertAvatarItem(SIG_AVATAR_INSERT*)
083ffdd9 +0x1f:  mov    %al,-0xd(%ebp)
083ffddc +0x22:  movzbl -0xd(%ebp),%eax
083ffde0 +0x26:  xor    $0x1,%eax
083ffde3 +0x29:  test   %al,%al
083ffde5 +0x2b:  je     083ffdee <+0x34>
083ffde7 +0x2d:  mov    $0x0,%eax
083ffdec +0x32:  jmp    083ffe0c <+0x52>
083ffdee +0x34:  mov    0x10(%ebp),%eax
083ffdf1 +0x37:  mov    %eax,0x8(%esp)
083ffdf5 +0x3b:  mov    -0xc(%ebp),%eax
083ffdf8 +0x3e:  mov    %eax,0x4(%esp)
083ffdfc +0x42:  mov    0x8(%ebp),%eax
083ffdff +0x45:  mov    %eax,(%esp)
083ffe02 +0x48:  call   084001fe <_ZN19DB_AvatarItemInsert11_SendResultEP17SIG_AVATAR_INSERTi>  ; DB_AvatarItemInsert::_SendResult(SIG_AVATAR_INSERT*, int)
083ffe07 +0x4d:  mov    $0x1,%eax
083ffe0c +0x52:  leave
083ffe0d +0x53:  ret
```

## 反编译 C

```c
// DB_AvatarItemInsert::dispatch @ 0x83ffdba

/* DB_AvatarItemInsert::dispatch(int, int, Stream*) */

bool __thiscall
DB_AvatarItemInsert::dispatch(DB_AvatarItemInsert *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  SIG_AVATAR_INSERT *pSVar2;
  
  pSVar2 = Stream::GetOutBuffer<SIG_AVATAR_INSERT>(param_3);
  cVar1 = InsertAvatarItem(pSVar2);
  if (cVar1 == '\x01') {
    _SendResult(this,pSVar2,param_2);
  }
  return cVar1 == '\x01';
}
```
