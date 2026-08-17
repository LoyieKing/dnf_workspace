# Dispatcher_Check3rdPartyConcent

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## process

```asm
// === 081df3d0 Dispatcher_Check3rdPartyConcent::process  [0x081df3d0-0x81df421] ===
 81df3d0:	55                   	push   %ebp
 81df3d1:	89 e5                	mov    %esp,%ebp
 81df3d3:	53                   	push   %ebx
 81df3d4:	83 ec 14             	sub    $0x14,%esp
 81df3d7:	8b 45 0c             	mov    0xc(%ebp),%eax
 81df3da:	89 04 24             	mov    %eax,(%esp)
 81df3dd:	e8 aa af ef ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81df3e2:	83 f8 03             	cmp    $0x3,%eax
 81df3e5:	0f 95 c0             	setne  %al
 81df3e8:	84 c0                	test   %al,%al
 81df3ea:	74 07                	je     81df3f3 <_ZN31Dispatcher_Check3rdPartyConcent7processEP5CUserR8MSG_BASER9ParamBase+0x23>
 81df3ec:	b8 00 00 00 00       	mov    $0x0,%eax
 81df3f1:	eb 29                	jmp    81df41c <_ZN31Dispatcher_Check3rdPartyConcent7processEP5CUserR8MSG_BASER9ParamBase+0x4c>
 81df3f3:	8b 45 0c             	mov    0xc(%ebp),%eax
 81df3f6:	89 04 24             	mov    %eax,(%esp)
 81df3f9:	e8 70 af ef ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81df3fe:	89 c3                	mov    %eax,%ebx
 81df400:	8b 45 0c             	mov    0xc(%ebp),%eax
 81df403:	89 04 24             	mov    %eax,(%esp)
 81df406:	e8 8b 98 ee ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 81df40b:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81df40f:	89 04 24             	mov    %eax,(%esp)
 81df412:	e8 a9 6c 26 00       	call   84460c0 <_ZN23DB_Check3rdPartyConcent11makeRequestEij>
 81df417:	b8 00 00 00 00       	mov    $0x0,%eax
 81df41c:	83 c4 14             	add    $0x14,%esp
 81df41f:	5b                   	pop    %ebx
 81df420:	5d                   	pop    %ebp
 81df421:	c3                   	ret

```

```c
// Dispatcher_Check3rdPartyConcent::process @ 0x81df3d0

/* Dispatcher_Check3rdPartyConcent::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4
Dispatcher_Check3rdPartyConcent::process(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if (iVar1 == 3) {
    uVar2 = CUser::get_acc_id((CUser *)param_2);
    iVar1 = CUser::GetUID((CUser *)param_2);
    DB_Check3rdPartyConcent::makeRequest(iVar1,uVar2);
  }
  return 0;
}

```

---

## read

```asm
// === 081df3c6 Dispatcher_Check3rdPartyConcent::read  [0x081df3c6-0x81df3cf] ===
 81df3c6:	55                   	push   %ebp
 81df3c7:	89 e5                	mov    %esp,%ebp
 81df3c9:	b8 00 00 00 00       	mov    $0x0,%eax
 81df3ce:	5d                   	pop    %ebp
 81df3cf:	c3                   	ret

```

```c
// Dispatcher_Check3rdPartyConcent::read @ 0x81df3c6

/* Dispatcher_Check3rdPartyConcent::read(PacketBuf&, MSG_BASE&) */

undefined4 Dispatcher_Check3rdPartyConcent::read(PacketBuf *param_1,MSG_BASE *param_2)

{
  return 0;
}

```

