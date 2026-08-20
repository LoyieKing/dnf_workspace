# Add

`_ZN5yaSSL6Errors3AddEi`

`yaSSL::Errors::Add(int)`

| 类 | 地址 |
|---|---|
| `yaSSL::Errors` | `0x08753550` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08753550  _ZN5yaSSL6Errors3AddEi
#           yaSSL::Errors::Add(int)
# range [0x08753550, 0x087535cc]
08753550 +0x00:  push   %ebp
08753551 +0x01:  mov    %esp,%ebp
08753553 +0x03:  sub    $0x28,%esp
08753556 +0x06:  mov    %ebx,-0xc(%ebp)
08753559 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
0875355e +0x0e:  add    $0xc1963a,%ebx
08753564 +0x14:  mov    %esi,-0x8(%ebp)
08753567 +0x17:  mov    0x8(%ebp),%esi
0875356a +0x1a:  mov    %edi,-0x4(%ebp)
0875356d +0x1d:  call   0874f7b0 <_ZN5yaSSL20yassl_int_cpp_local27GetSelfEv>  ; yaSSL::yassl_int_cpp_local2::GetSelf()
08753572 +0x22:  mov    %esi,(%esp)
08753575 +0x25:  mov    %eax,%edi
08753577 +0x27:  call   08753470 <_ZN5yaSSL6Errors6RemoveEv>  ; yaSSL::Errors::Remove()
0875357c +0x2c:  movb   $0x0,0x4(%esp)
08753581 +0x31:  movl   $0x10,(%esp)
08753588 +0x38:  call   08752350 <_ZnajN5yaSSL5new_tE>  ; operator new[](unsigned int, yaSSL::new_t)
0875358d +0x3d:  movl   $0x0,(%eax)
08753593 +0x43:  movl   $0x0,0x4(%eax)
0875359a +0x4a:  mov    0xc(%ebp),%edx
0875359d +0x4d:  mov    %edi,0x8(%eax)
087535a0 +0x50:  mov    %edx,0xc(%eax)
087535a3 +0x53:  mov    0x4(%esi),%edx
087535a6 +0x56:  test   %edx,%edx
087535a8 +0x58:  je     087535c8 <+0x78>
087535aa +0x5a:  mov    %eax,0x4(%edx)
087535ad +0x5d:  mov    0x4(%esi),%edx
087535b0 +0x60:  mov    %edx,(%eax)
087535b2 +0x62:  addl   $0x1,0x8(%esi)
087535b6 +0x66:  mov    %eax,0x4(%esi)
087535b9 +0x69:  mov    -0xc(%ebp),%ebx
087535bc +0x6c:  mov    -0x8(%ebp),%esi
087535bf +0x6f:  mov    -0x4(%ebp),%edi
087535c2 +0x72:  mov    %ebp,%esp
087535c4 +0x74:  pop    %ebp
087535c5 +0x75:  ret
087535c6 +0x76:  xchg   %ax,%ax
087535c8 +0x78:  mov    %eax,(%esi)
087535ca +0x7a:  jmp    087535b2 <+0x62>
087535cc +0x7c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::Errors::Add @ 0x8753550

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::Errors::Add(int) */

void __thiscall yaSSL::Errors::Add(Errors *this,int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  uVar1 = yassl_int_cpp_local2::GetSelf();
  Remove(this);
  puVar2 = operator_new__(0x10,0);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = uVar1;
  puVar2[3] = param_1;
  if (*(int *)(this + 4) == 0) {
    *(undefined4 **)this = puVar2;
  }
  else {
    *(undefined4 **)(*(int *)(this + 4) + 4) = puVar2;
    *puVar2 = *(undefined4 *)(this + 4);
  }
  *(int *)(this + 8) = *(int *)(this + 8) + 1;
  *(undefined4 **)(this + 4) = puVar2;
  return;
}
```
