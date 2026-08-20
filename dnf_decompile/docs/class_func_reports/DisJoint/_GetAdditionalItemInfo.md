# _GetAdditionalItemInfo

`_ZN8DisJoint22_GetAdditionalItemInfoEi`

`DisJoint::_GetAdditionalItemInfo(int)`

| 类 | 地址 |
|---|---|
| `DisJoint` | `0x08473224` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08473224  _ZN8DisJoint22_GetAdditionalItemInfoEi
#           DisJoint::_GetAdditionalItemInfo(int)
# range [0x08473224, 0x084732b3]
08473224 +0x00:  push   %ebp
08473225 +0x01:  mov    %esp,%ebp
08473227 +0x03:  sub    $0x28,%esp
0847322a +0x06:  mov    0xc(%ebp),%edx
0847322d +0x09:  mov    0x8(%ebp),%eax
08473230 +0x0c:  add    $0x5c,%edx
08473233 +0x0f:  shl    $0x4,%edx
08473236 +0x12:  add    %edx,%eax
08473238 +0x14:  add    $0x8,%eax
0847323b +0x17:  mov    (%eax),%eax
0847323d +0x19:  test   %eax,%eax
0847323f +0x1b:  jne    08473248 <+0x24>
08473241 +0x1d:  mov    $0x0,%eax
08473246 +0x22:  jmp    084732b2 <+0x8e>
08473248 +0x24:  movl   $0x0,-0x10(%ebp)
0847324f +0x2b:  mov    0xc(%ebp),%edx
08473252 +0x2e:  mov    0x8(%ebp),%eax
08473255 +0x31:  add    $0x5c,%edx
08473258 +0x34:  shl    $0x4,%edx
0847325b +0x37:  add    %edx,%eax
0847325d +0x39:  add    $0x8,%eax
08473260 +0x3c:  mov    (%eax),%eax
08473262 +0x3e:  imul   $0x3e8,%eax,%eax
08473268 +0x44:  mov    %eax,-0xc(%ebp)
0847326b +0x47:  mov    -0xc(%ebp),%eax
0847326e +0x4a:  mov    %eax,(%esp)
08473271 +0x4d:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
08473276 +0x52:  mov    %eax,%ecx
08473278 +0x54:  mov    $0x10624dd3,%edx
0847327d +0x59:  mov    %ecx,%eax
0847327f +0x5b:  imul   %edx
08473281 +0x5d:  sar    $0x6,%edx
08473284 +0x60:  mov    %ecx,%eax
08473286 +0x62:  sar    $0x1f,%eax
08473289 +0x65:  mov    %edx,%ecx
0847328b +0x67:  sub    %eax,%ecx
0847328d +0x69:  mov    %ecx,%eax
0847328f +0x6b:  mov    0xc(%ebp),%edx
08473292 +0x6e:  add    $0x5c,%edx
08473295 +0x71:  shl    $0x4,%edx
08473298 +0x74:  add    0x8(%ebp),%edx
0847329b +0x77:  add    $0xc,%edx
0847329e +0x7a:  mov    %eax,0x4(%esp)
084732a2 +0x7e:  mov    %edx,(%esp)
084732a5 +0x81:  call   0808e1dc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x4c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x4c
084732aa +0x86:  mov    (%eax),%eax
084732ac +0x88:  mov    %eax,-0x10(%ebp)
084732af +0x8b:  mov    -0x10(%ebp),%eax
084732b2 +0x8e:  leave
084732b3 +0x8f:  ret
```

## 反编译 C

```c
// DisJoint::_GetAdditionalItemInfo @ 0x8473224

/* DisJoint::_GetAdditionalItemInfo(int) */

undefined4 __thiscall DisJoint::_GetAdditionalItemInfo(DisJoint *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (*(int *)(this + (param_1 + 0x5c) * 0x10 + 8) == 0) {
    uVar1 = 0;
  }
  else {
    iVar2 = get_rand_int(*(int *)(this + (param_1 + 0x5c) * 0x10 + 8) * 1000);
    puVar3 = (undefined4 *)
             std::vector<int,std::allocator<int>>::operator[]
                       ((vector<int,std::allocator<int>> *)(this + (param_1 + 0x5c) * 0x10 + 0xc),
                        iVar2 / 1000);
    uVar1 = *puVar3;
  }
  return uVar1;
}
```
