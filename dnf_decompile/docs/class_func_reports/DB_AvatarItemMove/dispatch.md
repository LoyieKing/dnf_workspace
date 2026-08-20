# dispatch

`_ZN17DB_AvatarItemMove8dispatchEiiP6Stream`

`DB_AvatarItemMove::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_AvatarItemMove` | `0x08400388` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08400388  _ZN17DB_AvatarItemMove8dispatchEiiP6Stream
#           DB_AvatarItemMove::dispatch(int, int, Stream*)
# range [0x08400388, 0x084003c9]
08400388 +0x00:  push   %ebp
08400389 +0x01:  mov    %esp,%ebp
0840038b +0x03:  sub    $0x28,%esp
0840038e +0x06:  mov    0x14(%ebp),%eax
08400391 +0x09:  mov    %eax,(%esp)
08400394 +0x0c:  call   084503c4 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2fda>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2fda
08400399 +0x11:  mov    %eax,-0xc(%ebp)
0840039c +0x14:  mov    -0xc(%ebp),%eax
0840039f +0x17:  mov    %eax,0x4(%esp)
084003a3 +0x1b:  mov    0x8(%ebp),%eax
084003a6 +0x1e:  mov    %eax,(%esp)
084003a9 +0x21:  call   084003ca <_ZN17DB_AvatarItemMove14MoveAvatarItemEP15SIG_AVATAR_MOVE>  ; DB_AvatarItemMove::MoveAvatarItem(SIG_AVATAR_MOVE*)
084003ae +0x26:  mov    %al,-0xd(%ebp)
084003b1 +0x29:  movzbl -0xd(%ebp),%eax
084003b5 +0x2d:  xor    $0x1,%eax
084003b8 +0x30:  test   %al,%al
084003ba +0x32:  je     084003c3 <+0x3b>
084003bc +0x34:  mov    $0x0,%eax
084003c1 +0x39:  jmp    084003c8 <+0x40>
084003c3 +0x3b:  mov    $0x1,%eax
084003c8 +0x40:  leave
084003c9 +0x41:  ret
```

## 反编译 C

```c
// DB_AvatarItemMove::dispatch @ 0x8400388

/* DB_AvatarItemMove::dispatch(int, int, Stream*) */

bool __thiscall
DB_AvatarItemMove::dispatch(DB_AvatarItemMove *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  SIG_AVATAR_MOVE *pSVar2;
  
  pSVar2 = Stream::GetOutBuffer<SIG_AVATAR_MOVE>(param_3);
  cVar1 = MoveAvatarItem(this,pSVar2);
  return cVar1 == '\x01';
}
```
