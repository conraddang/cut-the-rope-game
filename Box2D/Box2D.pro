QT -= core gui

TARGET = Box2D
TEMPLATE = lib
CONFIG += staticlib

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    collision/b2_broad_phase.cpp \
    collision/b2_chain_shape.cpp \
    collision/b2_circle_shape.cpp \
    collision/b2_collide_circle.cpp \
    collision/b2_collide_edge.cpp \
    collision/b2_collide_polygon.cpp \
    collision/b2_collision.cpp \
    collision/b2_distance.cpp \
    collision/b2_dynamic_tree.cpp \
    collision/b2_edge_shape.cpp \
    collision/b2_polygon_shape.cpp \
    collision/b2_time_of_impact.cpp \
    common/b2_block_allocator.cpp \
    common/b2_draw.cpp \
    common/b2_math.cpp \
    common/b2_settings.cpp \
    common/b2_stack_allocator.cpp \
    common/b2_timer.cpp \
    dynamics/b2_body.cpp \
    dynamics/b2_chain_circle_contact.cpp \
    dynamics/b2_chain_polygon_contact.cpp \
    dynamics/b2_circle_contact.cpp \
    dynamics/b2_contact.cpp \
    dynamics/b2_contact_manager.cpp \
    dynamics/b2_contact_solver.cpp \
    dynamics/b2_distance_joint.cpp \
    dynamics/b2_edge_circle_contact.cpp \
    dynamics/b2_edge_polygon_contact.cpp \
    dynamics/b2_fixture.cpp \
    dynamics/b2_friction_joint.cpp \
    dynamics/b2_gear_joint.cpp \
    dynamics/b2_island.cpp \
    dynamics/b2_joint.cpp \
    dynamics/b2_motor_joint.cpp \
    dynamics/b2_mouse_joint.cpp \
    dynamics/b2_polygon_circle_contact.cpp \
    dynamics/b2_polygon_contact.cpp \
    dynamics/b2_prismatic_joint.cpp \
    dynamics/b2_pulley_joint.cpp \
    dynamics/b2_revolute_joint.cpp \
    dynamics/b2_rope_joint.cpp \
    dynamics/b2_weld_joint.cpp \
    dynamics/b2_wheel_joint.cpp \
    dynamics/b2_world.cpp \
    dynamics/b2_world_callbacks.cpp \
    rope/b2_rope.cpp

HEADERS += \
    dynamics/b2_chain_circle_contact.h \
    dynamics/b2_chain_polygon_contact.h \
    dynamics/b2_circle_contact.h \
    dynamics/b2_contact_solver.h \
    dynamics/b2_edge_circle_contact.h \
    dynamics/b2_edge_polygon_contact.h \
    dynamics/b2_island.h \
    dynamics/b2_polygon_circle_contact.h \
    dynamics/b2_polygon_contact.h

# Default rules for deployment.
unix {
    target.path = $$[QT_INSTALL_PLUGINS]/generic
}
!isEmpty(target.path): INSTALLS += target
