# AvatarFixedHiddenOptionServer

`_ZN29AvatarFixedHiddenOptionServerC1Ev`

`AvatarFixedHiddenOptionServer::AvatarFixedHiddenOptionServer()`

| 类 | 地址 |
|---|---|
| `AvatarFixedHiddenOptionServer` | `0x0817e02c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0817e02c  _ZN29AvatarFixedHiddenOptionServerC1Ev
#           AvatarFixedHiddenOptionServer::AvatarFixedHiddenOptionServer()
# range [0x0817e02c, 0x0817e0e5]
0817e02c +0x00:  push   %ebp
0817e02d +0x01:  mov    %esp,%ebp
0817e02f +0x03:  push   %edi
0817e030 +0x04:  push   %esi
0817e031 +0x05:  push   %ebx
0817e032 +0x06:  sub    $0x2c,%esp
0817e035 +0x09:  mov    0x8(%ebp),%eax
0817e038 +0x0c:  add    $0x4,%eax
0817e03b +0x0f:  mov    %eax,(%esp)
0817e03e +0x12:  call   088aecac <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOptionC1Ev>  ; ARAD::SCRIPT::AvatarFixedHiddenOption::AvatarFixedHiddenOption()
0817e043 +0x17:  mov    0x8(%ebp),%eax
0817e046 +0x1a:  mov    %eax,(%esp)
0817e049 +0x1d:  call   0817ef68 <_GLOBAL__I__ZN29AvatarFixedHiddenOptionServerC2Ev+0x199>  ; global constructors keyed to AvatarFixedHiddenOptionServer::AvatarFixedHiddenOptionServer()+0x199
0817e04e +0x22:  mov    0x8(%ebp),%eax
0817e051 +0x25:  mov    %eax,(%esp)
0817e054 +0x28:  call   080e2454 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x1fa>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x1fa
0817e059 +0x2d:  mov    0x8(%ebp),%eax
0817e05c +0x30:  movl   $&_ZTV29AvatarFixedHiddenOptionServer+0x8,(%eax)
0817e062 +0x36:  mov    0x8(%ebp),%eax
0817e065 +0x39:  lea    0x50(%eax),%esi
0817e068 +0x3c:  mov    %esi,%edi
0817e06a +0x3e:  mov    $0x5,%ebx
0817e06f +0x43:  jmp    0817e07f <+0x53>
0817e071 +0x45:  mov    %edi,(%esp)
0817e074 +0x48:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
0817e079 +0x4d:  add    $0xc,%edi
0817e07c +0x50:  sub    $0x1,%ebx
0817e07f +0x53:  cmp    $0xffffffff,%ebx
0817e082 +0x56:  setne  %al
0817e085 +0x59:  test   %al,%al
0817e087 +0x5b:  jne    0817e071 <+0x45>
0817e089 +0x5d:  jmp    0817e0dd <+0xb1>
0817e08b +0x5f:  mov    %edx,%edi
0817e08d +0x61:  mov    %eax,-0x1c(%ebp)
0817e090 +0x64:  test   %esi,%esi
0817e092 +0x66:  je     0817e0ba <+0x8e>
0817e094 +0x68:  mov    $0x5,%eax
0817e099 +0x6d:  sub    %ebx,%eax
0817e09b +0x6f:  mov    %eax,%edx
0817e09d +0x71:  mov    %edx,%eax
0817e09f +0x73:  add    %eax,%eax
0817e0a1 +0x75:  add    %edx,%eax
0817e0a3 +0x77:  shl    $0x2,%eax
0817e0a6 +0x7a:  lea    (%esi,%eax,1),%ebx
0817e0a9 +0x7d:  cmp    %esi,%ebx
0817e0ab +0x7f:  je     0817e0ba <+0x8e>
0817e0ad +0x81:  sub    $0xc,%ebx
0817e0b0 +0x84:  mov    %ebx,(%esp)
0817e0b3 +0x87:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
0817e0b8 +0x8c:  jmp    0817e0a9 <+0x7d>
0817e0ba +0x8e:  mov    -0x1c(%ebp),%eax
0817e0bd +0x91:  mov    %edi,%edx
0817e0bf +0x93:  mov    %edx,%ebx
0817e0c1 +0x95:  mov    %eax,%esi
0817e0c3 +0x97:  mov    0x8(%ebp),%eax
0817e0c6 +0x9a:  add    $0x4,%eax
0817e0c9 +0x9d:  mov    %eax,(%esp)
0817e0cc +0xa0:  call   088aed5e <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOptionD1Ev>  ; ARAD::SCRIPT::AvatarFixedHiddenOption::~AvatarFixedHiddenOption()
0817e0d1 +0xa5:  mov    %esi,%eax
0817e0d3 +0xa7:  mov    %ebx,%edx
0817e0d5 +0xa9:  mov    %eax,(%esp)
0817e0d8 +0xac:  call   08ae3750 <_Unwind_Resume>
0817e0dd +0xb1:  add    $0x2c,%esp
0817e0e0 +0xb4:  pop    %ebx
0817e0e1 +0xb5:  pop    %esi
0817e0e2 +0xb6:  pop    %edi
0817e0e3 +0xb7:  pop    %ebp
0817e0e4 +0xb8:  ret
0817e0e5 +0xb9:  nop
```

## 反编译 C

```c
// AvatarFixedHiddenOptionServer::AvatarFixedHiddenOptionServer @ 0x817e02c

/* AvatarFixedHiddenOptionServer::AvatarFixedHiddenOptionServer() */

void __thiscall
AvatarFixedHiddenOptionServer::AvatarFixedHiddenOptionServer(AvatarFixedHiddenOptionServer *this)

{
  int iVar1;
  vector<int,std::allocator<int>> *this_00;
  
  ARAD::SCRIPT::AvatarFixedHiddenOption::AvatarFixedHiddenOption
            ((AvatarFixedHiddenOption *)(this + 4));
  ARAD::Singleton<AvatarFixedHiddenOptionServer>::Singleton();
  ARAD::ScriptInterface::ScriptInterface((ScriptInterface *)this);
  *(undefined ***)this = &PTR_Load_08b8ac60;
  this_00 = (vector<int,std::allocator<int>> *)(this + 0x50);
  for (iVar1 = 5; iVar1 != -1; iVar1 = iVar1 + -1) {
                    /* try { // try from 0817e074 to 0817e078 has its CatchHandler @ 0817e08b */
    std::vector<int,std::allocator<int>>::vector(this_00);
    this_00 = this_00 + 0xc;
  }
  return;
}
```
