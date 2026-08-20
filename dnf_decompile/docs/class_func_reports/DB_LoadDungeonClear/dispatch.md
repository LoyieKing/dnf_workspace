# dispatch

`_ZN19DB_LoadDungeonClear8dispatchEiiP6Stream`

`DB_LoadDungeonClear::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_LoadDungeonClear` | `0x084198bc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084198bc  _ZN19DB_LoadDungeonClear8dispatchEiiP6Stream
#           DB_LoadDungeonClear::dispatch(int, int, Stream*)
# range [0x084198bc, 0x0841996d]
084198bc +0x00:  push   %ebp
084198bd +0x01:  mov    %esp,%ebp
084198bf +0x03:  sub    $0x28,%esp
084198c2 +0x06:  mov    0x8(%ebp),%eax
084198c5 +0x09:  mov    0x14(%ebp),%edx
084198c8 +0x0c:  mov    %edx,0xc(%esp)
084198cc +0x10:  mov    0x10(%ebp),%edx
084198cf +0x13:  mov    %edx,0x8(%esp)
084198d3 +0x17:  mov    0xc(%ebp),%edx
084198d6 +0x1a:  mov    %edx,0x4(%esp)
084198da +0x1e:  mov    %eax,(%esp)
084198dd +0x21:  call   083fbf7c <_ZN12DBDispatcher8dispatchEiiP6Stream>  ; DBDispatcher::dispatch(int, int, Stream*)
084198e2 +0x26:  xor    $0x1,%eax
084198e5 +0x29:  test   %al,%al
084198e7 +0x2b:  je     084198f0 <+0x34>
084198e9 +0x2d:  mov    $0x0,%eax
084198ee +0x32:  jmp    0841996c <+0xb0>
084198f0 +0x34:  mov    0x14(%ebp),%eax
084198f3 +0x37:  mov    %eax,(%esp)
084198f6 +0x3a:  call   08450f74 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x3b8a>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x3b8a
084198fb +0x3f:  mov    %eax,-0xc(%ebp)
084198fe +0x42:  cmpl   $0x0,-0xc(%ebp)
08419902 +0x46:  jne    0841990b <+0x4f>
08419904 +0x48:  mov    $0x0,%eax
08419909 +0x4d:  jmp    0841996c <+0xb0>
0841990b +0x4f:  mov    -0xc(%ebp),%eax
0841990e +0x52:  mov    %eax,0x4(%esp)
08419912 +0x56:  mov    0x8(%ebp),%eax
08419915 +0x59:  mov    %eax,(%esp)
08419918 +0x5c:  call   08419db4 <_ZN19DB_LoadDungeonClear16LoadDungeonClearEP22SIG_LOAD_DUNGEON_CLEAR>  ; DB_LoadDungeonClear::LoadDungeonClear(SIG_LOAD_DUNGEON_CLEAR*)
0841991d +0x61:  mov    %al,-0xd(%ebp)
08419920 +0x64:  movzbl -0xd(%ebp),%eax
08419924 +0x68:  xor    $0x1,%eax
08419927 +0x6b:  test   %al,%al
08419929 +0x6d:  je     08419932 <+0x76>
0841992b +0x6f:  mov    $0x0,%eax
08419930 +0x74:  jmp    0841996c <+0xb0>
08419932 +0x76:  mov    -0xc(%ebp),%eax
08419935 +0x79:  mov    %eax,0xc(%esp)
08419939 +0x7d:  mov    0x10(%ebp),%eax
0841993c +0x80:  mov    %eax,0x8(%esp)
08419940 +0x84:  mov    0xc(%ebp),%eax
08419943 +0x87:  mov    %eax,0x4(%esp)
08419947 +0x8b:  mov    0x8(%ebp),%eax
0841994a +0x8e:  mov    %eax,(%esp)
0841994d +0x91:  call   08419f0a <_ZN19DB_LoadDungeonClear10SendResultEiiP22SIG_LOAD_DUNGEON_CLEAR>  ; DB_LoadDungeonClear::SendResult(int, int, SIG_LOAD_DUNGEON_CLEAR*)
08419952 +0x96:  mov    %al,-0xd(%ebp)
08419955 +0x99:  movzbl -0xd(%ebp),%eax
08419959 +0x9d:  xor    $0x1,%eax
0841995c +0xa0:  test   %al,%al
0841995e +0xa2:  je     08419967 <+0xab>
08419960 +0xa4:  mov    $0x0,%eax
08419965 +0xa9:  jmp    0841996c <+0xb0>
08419967 +0xab:  mov    $0x1,%eax
0841996c +0xb0:  leave
0841996d +0xb1:  ret
```

## 反编译 C

```c
// DB_LoadDungeonClear::dispatch @ 0x84198bc

/* DB_LoadDungeonClear::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_LoadDungeonClear::dispatch(DB_LoadDungeonClear *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  SIG_LOAD_DUNGEON_CLEAR *pSVar3;
  
  cVar1 = DBDispatcher::dispatch((int)this,param_1,(Stream *)param_2);
  if (cVar1 == '\x01') {
    pSVar3 = Stream::GetOutBuffer<SIG_LOAD_DUNGEON_CLEAR>(param_3);
    if (pSVar3 == (SIG_LOAD_DUNGEON_CLEAR *)0x0) {
      uVar2 = 0;
    }
    else {
      cVar1 = LoadDungeonClear(this,pSVar3);
      if (cVar1 == '\x01') {
        cVar1 = SendResult(this,param_1,param_2,pSVar3);
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
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
