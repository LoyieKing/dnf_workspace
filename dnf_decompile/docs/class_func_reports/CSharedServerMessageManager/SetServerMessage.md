# SetServerMessage

`_ZN27CSharedServerMessageManager16SetServerMessageEP24SIG_EVENT_SERVER_MESSAGE`

`CSharedServerMessageManager::SetServerMessage(SIG_EVENT_SERVER_MESSAGE*)`

| 类 | 地址 |
|---|---|
| `CSharedServerMessageManager` | `0x08600b7a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08600b7a  _ZN27CSharedServerMessageManager16SetServerMessageEP24SIG_EVENT_SERVER_MESSAGE
#           CSharedServerMessageManager::SetServerMessage(SIG_EVENT_SERVER_MESSAGE*)
# range [0x08600b7a, 0x08600c33]
08600b7a +0x00:  push   %ebp
08600b7b +0x01:  mov    %esp,%ebp
08600b7d +0x03:  sub    $0x28,%esp
08600b80 +0x06:  mov    0x8(%ebp),%eax
08600b83 +0x09:  movzbl 0x4(%eax),%eax
08600b87 +0x0d:  xor    $0x1,%eax
08600b8a +0x10:  test   %al,%al
08600b8c +0x12:  je     08600c24 <+0xaa>
08600b92 +0x18:  mov    0xc(%ebp),%eax
08600b95 +0x1b:  movzbl (%eax),%eax
08600b98 +0x1e:  test   %al,%al
08600b9a +0x20:  je     08600c31 <+0xb7>
08600ba0 +0x26:  mov    0xc(%ebp),%eax
08600ba3 +0x29:  movzbl (%eax),%edx
08600ba6 +0x2c:  mov    0x8(%ebp),%eax
08600ba9 +0x2f:  mov    %dl,0x8(%eax)
08600bac +0x32:  movl   $0x0,-0xc(%ebp)
08600bb3 +0x39:  jmp    08600bfb <+0x81>
08600bb5 +0x3b:  mov    -0xc(%ebp),%edx
08600bb8 +0x3e:  mov    0xc(%ebp),%eax
08600bbb +0x41:  imul   $0x58,%edx,%edx
08600bbe +0x44:  movzbl 0x5(%edx,%eax,1),%eax
08600bc3 +0x49:  movzbl %al,%edx
08600bc6 +0x4c:  mov    0x8(%ebp),%eax
08600bc9 +0x4f:  mov    %edx,0x4(%esp)
08600bcd +0x53:  mov    %eax,(%esp)
08600bd0 +0x56:  call   08601700 <_ZN27CSharedServerMessageManager27CSharedServerMessageAdapter9IsOnIndexEi>  ; CSharedServerMessageManager::CSharedServerMessageAdapter::IsOnIndex(int)
08600bd5 +0x5b:  test   %al,%al
08600bd7 +0x5d:  je     08600bf7 <+0x7d>
08600bd9 +0x5f:  mov    -0xc(%ebp),%eax
08600bdc +0x62:  imul   $0x58,%eax,%eax
08600bdf +0x65:  add    0xc(%ebp),%eax
08600be2 +0x68:  lea    0x4(%eax),%edx
08600be5 +0x6b:  mov    0x8(%ebp),%eax
08600be8 +0x6e:  add    $0xc,%eax
08600beb +0x71:  mov    %edx,0x4(%esp)
08600bef +0x75:  mov    %eax,(%esp)
08600bf2 +0x78:  call   08601ad4 <_GLOBAL__I__ZN27CSharedServerMessageManagerC2Ev+0x120>  ; global constructors keyed to CSharedServerMessageManager::CSharedServerMessageManager()+0x120
08600bf7 +0x7d:  addl   $0x1,-0xc(%ebp)
08600bfb +0x81:  mov    0xc(%ebp),%eax
08600bfe +0x84:  movzbl (%eax),%eax
08600c01 +0x87:  movzbl %al,%eax
08600c04 +0x8a:  cmp    -0xc(%ebp),%eax
08600c07 +0x8d:  setg   %al
08600c0a +0x90:  test   %al,%al
08600c0c +0x92:  jne    08600bb5 <+0x3b>
08600c0e +0x94:  mov    0x8(%ebp),%eax
08600c11 +0x97:  add    $0xc,%eax
08600c14 +0x9a:  mov    %eax,(%esp)
08600c17 +0x9d:  call   084f13da <_GLOBAL__I__Z7getUserj+0x838c>  ; global constructors keyed to getUser(unsigned int)+0x838c
08600c1c +0xa2:  mov    %eax,%edx
08600c1e +0xa4:  mov    0x8(%ebp),%eax
08600c21 +0xa7:  mov    %dl,0x8(%eax)
08600c24 +0xaa:  mov    0x8(%ebp),%eax
08600c27 +0xad:  mov    %eax,(%esp)
08600c2a +0xb0:  call   08601a0e <_GLOBAL__I__ZN27CSharedServerMessageManagerC2Ev+0x5a>  ; global constructors keyed to CSharedServerMessageManager::CSharedServerMessageManager()+0x5a
08600c2f +0xb5:  jmp    08600c32 <+0xb8>
08600c31 +0xb7:  nop
08600c32 +0xb8:  leave
08600c33 +0xb9:  ret
```

## 反编译 C

```c
// CSharedServerMessageManager::SetServerMessage @ 0x8600b7a

/* CSharedServerMessageManager::SetServerMessage(SIG_EVENT_SERVER_MESSAGE*) */

void __thiscall
CSharedServerMessageManager::SetServerMessage
          (CSharedServerMessageManager *this,SIG_EVENT_SERVER_MESSAGE *param_1)

{
  char cVar1;
  CSharedServerMessageManager CVar2;
  int local_10;
  
  if (this[4] != (CSharedServerMessageManager)0x1) {
    if (*param_1 == (SIG_EVENT_SERVER_MESSAGE)0x0) {
      return;
    }
    this[8] = *(CSharedServerMessageManager *)param_1;
    for (local_10 = 0; local_10 < (int)(uint)(byte)*param_1; local_10 = local_10 + 1) {
      cVar1 = CSharedServerMessageAdapter::IsOnIndex
                        ((CSharedServerMessageAdapter *)this,
                         (uint)(byte)param_1[local_10 * 0x58 + 5]);
      if (cVar1 != '\0') {
        std::vector<stSERVER_MESSAGE,std::allocator<stSERVER_MESSAGE>>::push_back
                  ((vector<stSERVER_MESSAGE,std::allocator<stSERVER_MESSAGE>> *)(this + 0xc),
                   (stSERVER_MESSAGE *)(param_1 + local_10 * 0x58 + 4));
      }
    }
    CVar2 = (CSharedServerMessageManager)
            std::vector<stSERVER_MESSAGE,std::allocator<stSERVER_MESSAGE>>::size
                      ((vector<stSERVER_MESSAGE,std::allocator<stSERVER_MESSAGE>> *)(this + 0xc));
    this[8] = CVar2;
  }
  setLoadingComplete(this);
  return;
}
```
