# Connect

`_ZN10DbmwClient7ConnectEv`

`DbmwClient::Connect()`

| 类 | 地址 |
|---|---|
| `DbmwClient` | `0x081209fa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081209fa  _ZN10DbmwClient7ConnectEv
#           DbmwClient::Connect()
# range [0x081209fa, 0x08120aaf]
081209fa +0x00:  push   %ebp
081209fb +0x01:  mov    %esp,%ebp
081209fd +0x03:  sub    $0x18,%esp
08120a00 +0x06:  mov    0x8(%ebp),%eax
08120a03 +0x09:  mov    %eax,(%esp)
08120a06 +0x0c:  call   081205e6 <_ZN10DbmwClient4InitEv>  ; DbmwClient::Init()
08120a0b +0x11:  test   %eax,%eax
08120a0d +0x13:  setne  %al
08120a10 +0x16:  test   %al,%al
08120a12 +0x18:  je     08120a1e <+0x24>
08120a14 +0x1a:  mov    $0xffffff9e,%eax
08120a19 +0x1f:  jmp    08120aad <+0xb3>
08120a1e +0x24:  mov    0x8(%ebp),%eax
08120a21 +0x27:  movzbl 0x2(%eax),%eax
08120a25 +0x2b:  test   %al,%al
08120a27 +0x2d:  je     08120a30 <+0x36>
08120a29 +0x2f:  mov    $0xffffffa0,%eax
08120a2e +0x34:  jmp    08120aad <+0xb3>
08120a30 +0x36:  mov    0x8(%ebp),%eax
08120a33 +0x39:  add    $0x1c,%eax
08120a36 +0x3c:  mov    %eax,%edx
08120a38 +0x3e:  mov    0x8(%ebp),%eax
08120a3b +0x41:  mov    0x8(%eax),%eax
08120a3e +0x44:  movl   $0x10,0x8(%esp)
08120a46 +0x4c:  mov    %edx,0x4(%esp)
08120a4a +0x50:  mov    %eax,(%esp)
08120a4d +0x53:  call   0807e230 <_init+0xb28>
08120a52 +0x58:  cmp    $0xffffffff,%eax
08120a55 +0x5b:  sete   %al
08120a58 +0x5e:  test   %al,%al
08120a5a +0x60:  je     08120a88 <+0x8e>
08120a5c +0x62:  call   0807dd70 <_init+0x668>
08120a61 +0x67:  mov    (%eax),%eax
08120a63 +0x69:  cmp    $0x73,%eax
08120a66 +0x6c:  jne    08120a81 <+0x87>
08120a68 +0x6e:  mov    0x8(%ebp),%eax
08120a6b +0x71:  mov    %eax,(%esp)
08120a6e +0x74:  call   081209ba <_ZN10DbmwClient6RegistEv>  ; DbmwClient::Regist()
08120a73 +0x79:  xor    $0x1,%eax
08120a76 +0x7c:  test   %al,%al
08120a78 +0x7e:  je     08120aa1 <+0xa7>
08120a7a +0x80:  mov    $0xffffffa1,%eax
08120a7f +0x85:  jmp    08120aad <+0xb3>
08120a81 +0x87:  mov    $0xffffff9f,%eax
08120a86 +0x8c:  jmp    08120aad <+0xb3>
08120a88 +0x8e:  mov    0x8(%ebp),%eax
08120a8b +0x91:  mov    %eax,(%esp)
08120a8e +0x94:  call   081209ba <_ZN10DbmwClient6RegistEv>  ; DbmwClient::Regist()
08120a93 +0x99:  xor    $0x1,%eax
08120a96 +0x9c:  test   %al,%al
08120a98 +0x9e:  je     08120aa1 <+0xa7>
08120a9a +0xa0:  mov    $0xffffffa1,%eax
08120a9f +0xa5:  jmp    08120aad <+0xb3>
08120aa1 +0xa7:  mov    0x8(%ebp),%eax
08120aa4 +0xaa:  movb   $0x1,0x2(%eax)
08120aa8 +0xae:  mov    $0x0,%eax
08120aad +0xb3:  leave
08120aae +0xb4:  ret
08120aaf +0xb5:  nop
```

## 反编译 C

```c
// DbmwClient::Connect @ 0x81209fa

/* DbmwClient::Connect() */

undefined4 __thiscall DbmwClient::Connect(DbmwClient *this)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  
  iVar2 = Init(this);
  if (iVar2 == 0) {
    if (this[2] == (DbmwClient)0x0) {
      iVar2 = connect(*(int *)(this + 8),(sockaddr *)(this + 0x1c),0x10);
      if (iVar2 == -1) {
        piVar4 = __errno_location();
        if (*piVar4 != 0x73) {
          return 0xffffff9f;
        }
        cVar1 = Regist(this);
        if (cVar1 != '\x01') {
          return 0xffffffa1;
        }
      }
      else {
        cVar1 = Regist(this);
        if (cVar1 != '\x01') {
          return 0xffffffa1;
        }
      }
      this[2] = (DbmwClient)0x1;
      uVar3 = 0;
    }
    else {
      uVar3 = 0xffffffa0;
    }
  }
  else {
    uVar3 = 0xffffff9e;
  }
  return uVar3;
}
```
